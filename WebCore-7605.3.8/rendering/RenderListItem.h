/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 1999 Antti Koivisto (koivisto@kde.org)
 * Copyright (C) 2003, 2004, 2005, 2006, 2007, 2009 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#pragma once

#include "RenderBlockFlow.h"
#include "RenderListMarker.h"

namespace WebCore {

class HTMLOListElement;

class RenderListItem final : public RenderBlockFlow {
    WTF_MAKE_ISO_ALLOCATED(RenderListItem);
public:
    RenderListItem(Element&, RenderStyle&&);
    virtual ~RenderListItem();
    Element& element() const { return downcast<Element>(nodeForNonAnonymous()); }

    int value() const { if (!m_isValueUpToDate) updateValueNow(); return m_value; }
    void updateValue();

    bool hasExplicitValue() const { return m_hasExplicitValue; }
    int explicitValue() const { return m_explicitValue; }
    void setExplicitValue(int value);
    void clearExplicitValue();

    void setNotInList(bool notInList) { m_notInList = notInList; }
    bool notInList() const { return m_notInList; }

    WEBCORE_EXPORT const String& markerText() const;
    String markerTextWithSuffix() const;

    void updateListMarkerNumbers();

    static void updateItemValuesForOrderedList(const HTMLOListElement&);
    static unsigned itemCountForOrderedList(const HTMLOListElement&);

    RenderStyle computeMarkerStyle() const;

    RenderListMarker* markerRenderer() const { return m_marker.get(); }
    void setMarkerRenderer(RenderListMarker& marker) { m_marker = makeWeakPtr(marker); }

private:
    void willBeDestroyed() override;

    const char* renderName() const override { return "RenderListItem"; }

    bool isListItem() const override { return true; }
    
    void insertedIntoTree() override;
    void willBeRemovedFromTree() override;

    void paint(PaintInfo&, const LayoutPoint&) override;

    void layout() override;

    void positionListMarker();

    void addOverflowFromChildren() override;
    void computePreferredLogicalWidths() override;

    inline int calcValue() const;
    void updateValueNow() const;
    void explicitValueChanged();


    int m_explicitValue;
    WeakPtr<RenderListMarker> m_marker;
    mutable int m_value;
    bool m_hasExplicitValue : 1;
    mutable bool m_isValueUpToDate : 1;
    bool m_notInList : 1;
};

bool isHTMLListElement(const Node&);

} // namespace WebCore

SPECIALIZE_TYPE_TRAITS_RENDER_OBJECT(RenderListItem, isListItem())