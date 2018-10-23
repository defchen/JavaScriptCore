/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestCallTracer.h"

#include "CallTracer.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertBoolean.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertNullable.h"
#include "JSDOMConvertNumbers.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMConvertUnion.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "JSNode.h"
#include <runtime/FunctionPrototype.h>
#include <runtime/JSCInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/Variant.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationInterface(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationSpecified(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithArguments(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithNullableArgument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithVariantArgument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithNullableVariantArgument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithOptionalVariantArgument(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithDefaultVariantArgument(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestCallTracerConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCallTracerConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCallTracerTestAttributeInterface(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCallTracerTestAttributeInterface(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCallTracerTestAttributeSpecified(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCallTracerTestAttributeSpecified(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCallTracerTestAttributeWithVariant(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestCallTracerTestAttributeWithVariant(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestCallTracerTestReadonlyAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);

class JSTestCallTracerPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestCallTracerPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestCallTracerPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestCallTracerPrototype>(vm.heap)) JSTestCallTracerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestCallTracerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestCallTracerConstructor = JSDOMConstructorNotConstructable<JSTestCallTracer>;

/* Hash table for constructor */

static const HashTableValue JSTestCallTracerConstructorTableValues[] =
{
    { "testConstValue", JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::ConstantInteger, NoIntrinsic, { (long long)(false) } },
};

static_assert(TestCallTracer::testConstValue == false, "testConstValue in TestCallTracer does not match value from IDL");

template<> JSValue JSTestCallTracerConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestCallTracerConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestCallTracer::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TestCallTracer"))), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    reifyStaticProperties(vm, JSTestCallTracer::info(), JSTestCallTracerConstructorTableValues, *this);
}

template<> const ClassInfo JSTestCallTracerConstructor::s_info = { "TestCallTracer", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCallTracerConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestCallTracerPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCallTracerConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCallTracerConstructor) } },
    { "testAttributeInterface", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCallTracerTestAttributeInterface), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCallTracerTestAttributeInterface) } },
    { "testAttributeSpecified", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCallTracerTestAttributeSpecified), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCallTracerTestAttributeSpecified) } },
    { "testAttributeWithVariant", static_cast<unsigned>(JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCallTracerTestAttributeWithVariant), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestCallTracerTestAttributeWithVariant) } },
    { "testReadonlyAttribute", static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestCallTracerTestReadonlyAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) } },
    { "testOperationInterface", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationInterface), (intptr_t) (0) } },
    { "testOperationSpecified", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationSpecified), (intptr_t) (0) } },
    { "testOperationWithArguments", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithArguments), (intptr_t) (3) } },
    { "testOperationWithNullableArgument", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithNullableArgument), (intptr_t) (1) } },
    { "testOperationWithVariantArgument", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithVariantArgument), (intptr_t) (1) } },
    { "testOperationWithNullableVariantArgument", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithNullableVariantArgument), (intptr_t) (1) } },
    { "testOperationWithOptionalVariantArgument", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithOptionalVariantArgument), (intptr_t) (0) } },
    { "testOperationWithDefaultVariantArgument", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestCallTracerPrototypeFunctionTestOperationWithDefaultVariantArgument), (intptr_t) (0) } },
    { "testConstValue", JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::ConstantInteger, NoIntrinsic, { (long long)(false) } },
};

const ClassInfo JSTestCallTracerPrototype::s_info = { "TestCallTracerPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCallTracerPrototype) };

void JSTestCallTracerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestCallTracer::info(), JSTestCallTracerPrototypeTableValues, *this);
}

const ClassInfo JSTestCallTracer::s_info = { "TestCallTracer", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestCallTracer) };

JSTestCallTracer::JSTestCallTracer(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestCallTracer>&& impl)
    : JSDOMWrapper<TestCallTracer>(structure, globalObject, WTFMove(impl))
{
}

void JSTestCallTracer::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestCallTracer::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestCallTracerPrototype::create(vm, &globalObject, JSTestCallTracerPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestCallTracer::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestCallTracer>(vm, globalObject);
}

JSValue JSTestCallTracer::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestCallTracerConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestCallTracer::destroy(JSC::JSCell* cell)
{
    JSTestCallTracer* thisObject = static_cast<JSTestCallTracer*>(cell);
    thisObject->JSTestCallTracer::~JSTestCallTracer();
}

template<> inline JSTestCallTracer* IDLAttribute<JSTestCallTracer>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicDowncast<JSTestCallTracer*>(state.vm(), JSValue::decode(thisValue));
}

template<> inline JSTestCallTracer* IDLOperation<JSTestCallTracer>::cast(ExecState& state)
{
    return jsDynamicDowncast<JSTestCallTracer*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestCallTracerConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSTestCallTracerPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestCallTracer::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestCallTracerConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSTestCallTracerPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsTestCallTracerTestAttributeInterfaceGetter(ExecState& state, JSTestCallTracer& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    if (UNLIKELY(impl.callTracingActive()))
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testAttributeInterface"));
    JSValue result = toJS<IDLBoolean>(state, throwScope, impl.testAttributeInterface());
    return result;
}

EncodedJSValue jsTestCallTracerTestAttributeInterface(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCallTracer>::get<jsTestCallTracerTestAttributeInterfaceGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "testAttributeInterface");
}

static inline bool setJSTestCallTracerTestAttributeInterfaceSetter(ExecState& state, JSTestCallTracer& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLBoolean>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        callTracerParameters.append(nativeValue);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testAttributeInterface"), WTFMove(callTracerParameters));
    }
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setTestAttributeInterface(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestCallTracerTestAttributeInterface(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestCallTracer>::set<setJSTestCallTracerTestAttributeInterfaceSetter>(*state, thisValue, encodedValue, "testAttributeInterface");
}

static inline JSValue jsTestCallTracerTestAttributeSpecifiedGetter(ExecState& state, JSTestCallTracer& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    if (UNLIKELY(impl.callTracingActive()))
        CallTracer::testCallTracerAttribute(impl, ASCIILiteral("testAttributeSpecified"));
    JSValue result = toJS<IDLBoolean>(state, throwScope, impl.testAttributeSpecified());
    return result;
}

EncodedJSValue jsTestCallTracerTestAttributeSpecified(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCallTracer>::get<jsTestCallTracerTestAttributeSpecifiedGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "testAttributeSpecified");
}

static inline bool setJSTestCallTracerTestAttributeSpecifiedSetter(ExecState& state, JSTestCallTracer& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLBoolean>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerAttributeVariant> callTracerParameters;
        callTracerParameters.append(nativeValue);
        CallTracer::testCallTracerAttribute(impl, ASCIILiteral("testAttributeSpecified"), WTFMove(callTracerParameters));
    }
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setTestAttributeSpecified(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestCallTracerTestAttributeSpecified(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestCallTracer>::set<setJSTestCallTracerTestAttributeSpecifiedSetter>(*state, thisValue, encodedValue, "testAttributeSpecified");
}

static inline JSValue jsTestCallTracerTestAttributeWithVariantGetter(ExecState& state, JSTestCallTracer& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    if (UNLIKELY(impl.callTracingActive()))
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testAttributeWithVariant"));
    JSValue result = toJS<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>(state, *thisObject.globalObject(), throwScope, impl.testAttributeWithVariant());
    return result;
}

EncodedJSValue jsTestCallTracerTestAttributeWithVariant(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCallTracer>::get<jsTestCallTracerTestAttributeWithVariantGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "testAttributeWithVariant");
}

static inline bool setJSTestCallTracerTestAttributeWithVariantSetter(ExecState& state, JSTestCallTracer& thisObject, JSValue value, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    auto& impl = thisObject.wrapped();
    auto nativeValue = convert<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>(state, value);
    RETURN_IF_EXCEPTION(throwScope, false);
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        WTF::visit([&] (auto& value) { callTracerParameters.append(value); }, nativeValue);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testAttributeWithVariant"), WTFMove(callTracerParameters));
    }
    AttributeSetter::call(state, throwScope, [&] {
        return impl.setTestAttributeWithVariant(WTFMove(nativeValue));
    });
    return true;
}

bool setJSTestCallTracerTestAttributeWithVariant(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    return IDLAttribute<JSTestCallTracer>::set<setJSTestCallTracerTestAttributeWithVariantSetter>(*state, thisValue, encodedValue, "testAttributeWithVariant");
}

static inline JSValue jsTestCallTracerTestReadonlyAttributeGetter(ExecState& state, JSTestCallTracer& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    auto& impl = thisObject.wrapped();
    JSValue result = toJS<IDLBoolean>(state, throwScope, impl.testReadonlyAttribute());
    return result;
}

EncodedJSValue jsTestCallTracerTestReadonlyAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSTestCallTracer>::get<jsTestCallTracerTestReadonlyAttributeGetter, CastedThisErrorBehavior::Assert>(*state, thisValue, "testReadonlyAttribute");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationInterfaceBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(impl.callTracingActive()))
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationInterface"));
    impl.testOperationInterface();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationInterface(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationInterfaceBody>(*state, "testOperationInterface");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationSpecifiedBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(impl.callTracingActive()))
        CallTracer::testCallTracerOperation(impl, ASCIILiteral("testOperationSpecified"));
    impl.testOperationSpecified();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationSpecified(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationSpecifiedBody>(*state, "testOperationSpecified");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithArgumentsBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 3))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto a = convert<IDLBoolean>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    auto b = convert<IDLFloat>(*state, state->uncheckedArgument(1));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    auto c = convert<IDLDOMString>(*state, state->uncheckedArgument(2));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        callTracerParameters.append(a);
        callTracerParameters.append(b);
        callTracerParameters.append(c);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithArguments"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithArguments(WTFMove(a), WTFMove(b), WTFMove(c));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithArguments(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithArgumentsBody>(*state, "testOperationWithArguments");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithNullableArgumentBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto nodeNullableArg = convert<IDLNullable<IDLInterface<Node>>>(*state, state->uncheckedArgument(0), [](JSC::ExecState& state, JSC::ThrowScope& scope) { throwArgumentTypeError(state, scope, 0, "nodeNullableArg", "TestCallTracer", "testOperationWithNullableArgument", "Node"); });
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        if (nodeNullableArg)
            callTracerParameters.append(nodeNullableArg);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithNullableArgument"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithNullableArgument(WTFMove(nodeNullableArg));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithNullableArgument(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithNullableArgumentBody>(*state, "testOperationWithNullableArgument");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithVariantArgumentBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto variantArg = convert<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        WTF::visit([&] (auto& value) { callTracerParameters.append(value); }, variantArg);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithVariantArgument"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithVariantArgument(WTFMove(variantArg));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithVariantArgument(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithVariantArgumentBody>(*state, "testOperationWithVariantArgument");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithNullableVariantArgumentBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto variantNullableArg = convert<IDLNullable<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        if (variantNullableArg)
            WTF::visit([&] (auto& value) { callTracerParameters.append(value); }, *variantNullableArg);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithNullableVariantArgument"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithNullableVariantArgument(WTFMove(variantNullableArg));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithNullableVariantArgument(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithNullableVariantArgumentBody>(*state, "testOperationWithNullableVariantArgument");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithOptionalVariantArgumentBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    auto variantOptionalArg = state->argument(0).isUndefined() ? std::optional<Converter<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>::ReturnType>() : std::optional<Converter<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>::ReturnType>(convert<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>(*state, state->uncheckedArgument(0)));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        if (variantOptionalArg)
            WTF::visit([&] (auto& value) { callTracerParameters.append(value); }, *variantOptionalArg);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithOptionalVariantArgument"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithOptionalVariantArgument(WTFMove(variantOptionalArg));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithOptionalVariantArgument(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithOptionalVariantArgumentBody>(*state, "testOperationWithOptionalVariantArgument");
}

static inline JSC::EncodedJSValue jsTestCallTracerPrototypeFunctionTestOperationWithDefaultVariantArgumentBody(JSC::ExecState* state, typename IDLOperation<JSTestCallTracer>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    auto& impl = castedThis->wrapped();
    auto variantDefaultArg = state->argument(0).isUndefined() ? "" : convert<IDLUnion<IDLBoolean, IDLFloat, IDLDOMString>>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    if (UNLIKELY(impl.callTracingActive())) {
        Vector<TestCallTracerInterfaceVariant> callTracerParameters;
        WTF::visit([&] (auto& value) { callTracerParameters.append(value); }, variantDefaultArg);
        CallTracer::testCallTracerInterface(impl, ASCIILiteral("testOperationWithDefaultVariantArgument"), WTFMove(callTracerParameters));
    }
    impl.testOperationWithDefaultVariantArgument(WTFMove(variantDefaultArg));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestCallTracerPrototypeFunctionTestOperationWithDefaultVariantArgument(ExecState* state)
{
    return IDLOperation<JSTestCallTracer>::call<jsTestCallTracerPrototypeFunctionTestOperationWithDefaultVariantArgumentBody>(*state, "testOperationWithDefaultVariantArgument");
}

bool JSTestCallTracerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestCallTracerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestCallTracer = static_cast<JSTestCallTracer*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestCallTracer->wrapped(), jsTestCallTracer);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestCallTracer@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14TestCallTracerE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestCallTracer>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7TestCallTracer@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14TestCallTracerE[2];
#endif

    // If this fails TestCallTracer does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestCallTracer>::value, "TestCallTracer is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestCallTracer has subclasses. If TestCallTracer has subclasses that get passed
    // to toJS() we currently require TestCallTracer you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestCallTracer>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestCallTracer& impl)
{
    return wrap(state, globalObject, impl);
}

TestCallTracer* JSTestCallTracer::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicDowncast<JSTestCallTracer*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
