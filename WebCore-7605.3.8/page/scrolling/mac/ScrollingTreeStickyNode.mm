/*
 * Copyright (C) 2012 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "config.h"
#import "ScrollingTreeStickyNode.h"

#if ENABLE(ASYNC_SCROLLING)

#import "Logging.h"
#import "ScrollingStateStickyNode.h"
#import "ScrollingTree.h"
#import "ScrollingTreeFrameScrollingNode.h"
#import "ScrollingTreeOverflowScrollingNode.h"
#import <QuartzCore/CALayer.h>
#import <wtf/text/TextStream.h>

namespace WebCore {

Ref<ScrollingTreeStickyNode> ScrollingTreeStickyNode::create(ScrollingTree& scrollingTree, ScrollingNodeID nodeID)
{
    return adoptRef(*new ScrollingTreeStickyNode(scrollingTree, nodeID));
}

ScrollingTreeStickyNode::ScrollingTreeStickyNode(ScrollingTree& scrollingTree, ScrollingNodeID nodeID)
    : ScrollingTreeNode(scrollingTree, StickyNode, nodeID)
{
    scrollingTree.fixedOrStickyNodeAdded();
}

ScrollingTreeStickyNode::~ScrollingTreeStickyNode()
{
    scrollingTree().fixedOrStickyNodeRemoved();
}

void ScrollingTreeStickyNode::commitStateBeforeChildren(const ScrollingStateNode& stateNode)
{
    const ScrollingStateStickyNode& stickyStateNode = downcast<ScrollingStateStickyNode>(stateNode);

    if (stickyStateNode.hasChangedProperty(ScrollingStateNode::ScrollLayer))
        m_layer = stickyStateNode.layer();

    if (stateNode.hasChangedProperty(ScrollingStateStickyNode::ViewportConstraints))
        m_constraints = stickyStateNode.viewportConstraints();
}

namespace ScrollingTreeStickyNodeInternal {
static inline CGPoint operator*(CGPoint& a, const CGSize& b)
{
    return CGPointMake(a.x * b.width, a.y * b.height);
}
}

void ScrollingTreeStickyNode::updateLayersAfterAncestorChange(const ScrollingTreeNode& changedNode, const FloatRect& fixedPositionRect, const FloatSize& cumulativeDelta)
{
    using namespace ScrollingTreeStickyNodeInternal;
    bool adjustStickyLayer = false;
    FloatRect constrainingRect;

    if (is<ScrollingTreeOverflowScrollingNode>(*parent())) {
        constrainingRect = FloatRect(downcast<ScrollingTreeOverflowScrollingNode>(*parent()).scrollPosition(), m_constraints.constrainingRectAtLastLayout().size());
        adjustStickyLayer = true;
    } else if (is<ScrollingTreeFrameScrollingNode>(*parent())) {
        constrainingRect = fixedPositionRect;
        adjustStickyLayer = true;
    }

    LOG_WITH_STREAM(Scrolling, stream << "ScrollingTreeStickyNode " << scrollingNodeID() << " updateLayersAfterAncestorChange: new viewport " << fixedPositionRect << " constrainingRectAtLastLayout " << m_constraints.constrainingRectAtLastLayout() << " last layer pos " << m_constraints.layerPositionAtLastLayout() << " adjustStickyLayer " << adjustStickyLayer);

    FloatSize deltaForDescendants = cumulativeDelta;

    if (adjustStickyLayer) {
        FloatPoint layerPosition = m_constraints.layerPositionForConstrainingRect(constrainingRect);

        CGRect layerBounds = [m_layer bounds];
        CGPoint anchorPoint = [m_layer anchorPoint];
        CGPoint newPosition = layerPosition - m_constraints.alignmentOffset() + anchorPoint * layerBounds.size;
        [m_layer setPosition:newPosition];

        deltaForDescendants = layerPosition - m_constraints.layerPositionAtLastLayout() + cumulativeDelta;
    }

    if (!m_children)
        return;

    for (auto& child : *m_children)
        child->updateLayersAfterAncestorChange(changedNode, fixedPositionRect, deltaForDescendants);
}

void ScrollingTreeStickyNode::dumpProperties(TextStream& ts, ScrollingStateTreeAsTextBehavior behavior) const
{
    ts << "sticky node";

    ScrollingTreeNode::dumpProperties(ts, behavior);
    ts.dumpProperty("sticky constraints", m_constraints);

    if (behavior & ScrollingStateTreeAsTextBehaviorIncludeLayerPositions) {
        FloatRect layerBounds = [m_layer bounds];
        FloatPoint anchorPoint = [m_layer anchorPoint];
        FloatPoint position = [m_layer position];
        FloatPoint layerTopLeft = position - toFloatSize(anchorPoint) * layerBounds.size() + m_constraints.alignmentOffset();
        ts.dumpProperty("layer top left", layerTopLeft);
    }
}

} // namespace WebCore

#endif // ENABLE(ASYNC_SCROLLING)
