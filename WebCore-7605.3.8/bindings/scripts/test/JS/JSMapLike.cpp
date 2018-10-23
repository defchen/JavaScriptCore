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
#include "JSMapLike.h"

#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertAny.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMMapLike.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include <builtins/BuiltinNames.h>
#include <runtime/FunctionPrototype.h>
#include <runtime/JSCInlines.h>
#include <wtf/GetPtr.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionGet(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionHas(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionEntries(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionKeys(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionValues(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionForEach(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionAdd(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionClear(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionDelete(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsMapLikeConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSMapLikeConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsMapLikeSize(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMapLikePrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSMapLikePrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMapLikePrototype* ptr = new (NotNull, JSC::allocateCell<JSMapLikePrototype>(vm.heap)) JSMapLikePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMapLikePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSMapLikeConstructor = JSDOMConstructorNotConstructable<JSMapLike>;

template<> JSValue JSMapLikeConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSMapLikeConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSMapLike::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MapLike"))), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSMapLikeConstructor::s_info = { "MapLike", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMapLikeConstructor) };

/* Hash table for prototype */

static const HashTableValue JSMapLikePrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMapLikeConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSMapLikeConstructor) } },
    { "size", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMapLikeSize), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) } },
    { "get", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionGet), (intptr_t) (1) } },
    { "has", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionHas), (intptr_t) (1) } },
    { "entries", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionEntries), (intptr_t) (0) } },
    { "keys", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionKeys), (intptr_t) (0) } },
    { "values", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionValues), (intptr_t) (0) } },
    { "forEach", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionForEach), (intptr_t) (1) } },
    { "add", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionAdd), (intptr_t) (1) } },
    { "clear", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionClear), (intptr_t) (0) } },
    { "delete", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsMapLikePrototypeFunctionDelete), (intptr_t) (1) } },
};

const ClassInfo JSMapLikePrototype::s_info = { "MapLikePrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMapLikePrototype) };

void JSMapLikePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMapLike::info(), JSMapLikePrototypeTableValues, *this);
    putDirect(vm, vm.propertyNames->iteratorSymbol, getDirect(vm, vm.propertyNames->builtinNames().entriesPublicName()), static_cast<unsigned>(JSC::PropertyAttribute::DontEnum));
}

const ClassInfo JSMapLike::s_info = { "MapLike", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMapLike) };

JSMapLike::JSMapLike(Structure* structure, JSDOMGlobalObject& globalObject, Ref<MapLike>&& impl)
    : JSDOMWrapper<MapLike>(structure, globalObject, WTFMove(impl))
{
}

void JSMapLike::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

    synchronizeBackingMap(*globalObject()->globalExec(), *globalObject(), *this);
}

JSObject* JSMapLike::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSMapLikePrototype::create(vm, &globalObject, JSMapLikePrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSMapLike::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSMapLike>(vm, globalObject);
}

JSValue JSMapLike::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMapLikeConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSMapLike::destroy(JSC::JSCell* cell)
{
    JSMapLike* thisObject = static_cast<JSMapLike*>(cell);
    thisObject->JSMapLike::~JSMapLike();
}

template<> inline JSMapLike* IDLAttribute<JSMapLike>::cast(ExecState& state, EncodedJSValue thisValue)
{
    return jsDynamicDowncast<JSMapLike*>(state.vm(), JSValue::decode(thisValue));
}

template<> inline JSMapLike* IDLOperation<JSMapLike>::cast(ExecState& state)
{
    return jsDynamicDowncast<JSMapLike*>(state.vm(), state.thisValue());
}

EncodedJSValue jsMapLikeConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSMapLikePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSMapLike::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSMapLikeConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSMapLikePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

static inline JSValue jsMapLikeSizeGetter(ExecState& state, JSMapLike& thisObject, ThrowScope& throwScope)
{
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(state);
    JSValue result = toJS<IDLAny>(state, throwScope, forwardSizeToMapLike(state, thisObject));
    return result;
}

EncodedJSValue jsMapLikeSize(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    return IDLAttribute<JSMapLike>::get<jsMapLikeSizeGetter>(*state, thisValue, "size");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionGetBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto key = convert<IDLDOMString>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    return JSValue::encode(toJS<IDLAny>(forwardGetToMapLike(*state, *castedThis, WTFMove(key))));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionGet(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionGetBody>(*state, "get");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionHasBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto key = convert<IDLDOMString>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    return JSValue::encode(toJS<IDLAny>(forwardHasToMapLike(*state, *castedThis, WTFMove(key))));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionHas(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionHasBody>(*state, "has");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionEntriesBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    return JSValue::encode(toJS<IDLAny>(forwardEntriesToMapLike(*state, *castedThis)));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionEntries(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionEntriesBody>(*state, "entries");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionKeysBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    return JSValue::encode(toJS<IDLAny>(forwardKeysToMapLike(*state, *castedThis)));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionKeys(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionKeysBody>(*state, "keys");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionValuesBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    return JSValue::encode(toJS<IDLAny>(forwardValuesToMapLike(*state, *castedThis)));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionValues(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionValuesBody>(*state, "values");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionForEachBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto callback = convert<IDLAny>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    return JSValue::encode(toJS<IDLAny>(forwardForEachToMapLike(*state, *castedThis, WTFMove(callback))));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionForEach(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionForEachBody>(*state, "forEach");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionAddBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto key = convert<IDLDOMString>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    return JSValue::encode(toJS<IDLAny>(forwardAddToMapLike(*state, *castedThis, WTFMove(key))));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionAdd(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionAddBody>(*state, "add");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionClearBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    forwardClearToMapLike(*state, *castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionClear(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionClearBody>(*state, "clear");
}

static inline JSC::EncodedJSValue jsMapLikePrototypeFunctionDeleteBody(JSC::ExecState* state, typename IDLOperation<JSMapLike>::ClassParameter castedThis, JSC::ThrowScope& throwScope)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(throwScope);
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, throwScope, createNotEnoughArgumentsError(state));
    auto key = convert<IDLDOMString>(*state, state->uncheckedArgument(0));
    RETURN_IF_EXCEPTION(throwScope, encodedJSValue());
    return JSValue::encode(toJS<IDLAny>(forwardDeleteToMapLike(*state, *castedThis, WTFMove(key))));
}

EncodedJSValue JSC_HOST_CALL jsMapLikePrototypeFunctionDelete(ExecState* state)
{
    return IDLOperation<JSMapLike>::call<jsMapLikePrototypeFunctionDeleteBody>(*state, "delete");
}

bool JSMapLikeOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSMapLikeOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsMapLike = static_cast<JSMapLike*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMapLike->wrapped(), jsMapLike);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MapLike@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore7MapLikeE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<MapLike>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MapLike@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore7MapLikeE[2];
#endif

    // If this fails MapLike does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<MapLike>::value, "MapLike is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // MapLike has subclasses. If MapLike has subclasses that get passed
    // to toJS() we currently require MapLike you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<MapLike>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, MapLike& impl)
{
    return wrap(state, globalObject, impl);
}

MapLike* JSMapLike::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicDowncast<JSMapLike*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
