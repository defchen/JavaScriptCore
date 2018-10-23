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
#include "JSTestNamedDeleterNoIdentifier.h"

#include "JSDOMAbstractOperations.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMWrapperCache.h"
#include <runtime/FunctionPrototype.h>
#include <runtime/JSCInlines.h>
#include <wtf/GetPtr.h>


namespace WebCore {
using namespace JSC;

// Attributes

JSC::EncodedJSValue jsTestNamedDeleterNoIdentifierConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestNamedDeleterNoIdentifierConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestNamedDeleterNoIdentifierPrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestNamedDeleterNoIdentifierPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestNamedDeleterNoIdentifierPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestNamedDeleterNoIdentifierPrototype>(vm.heap)) JSTestNamedDeleterNoIdentifierPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestNamedDeleterNoIdentifierPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestNamedDeleterNoIdentifierConstructor = JSDOMConstructorNotConstructable<JSTestNamedDeleterNoIdentifier>;

template<> JSValue JSTestNamedDeleterNoIdentifierConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestNamedDeleterNoIdentifierConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestNamedDeleterNoIdentifier::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TestNamedDeleterNoIdentifier"))), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestNamedDeleterNoIdentifierConstructor::s_info = { "TestNamedDeleterNoIdentifier", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterNoIdentifierConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestNamedDeleterNoIdentifierPrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestNamedDeleterNoIdentifierConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestNamedDeleterNoIdentifierConstructor) } },
};

const ClassInfo JSTestNamedDeleterNoIdentifierPrototype::s_info = { "TestNamedDeleterNoIdentifierPrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterNoIdentifierPrototype) };

void JSTestNamedDeleterNoIdentifierPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestNamedDeleterNoIdentifier::info(), JSTestNamedDeleterNoIdentifierPrototypeTableValues, *this);
}

const ClassInfo JSTestNamedDeleterNoIdentifier::s_info = { "TestNamedDeleterNoIdentifier", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterNoIdentifier) };

JSTestNamedDeleterNoIdentifier::JSTestNamedDeleterNoIdentifier(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestNamedDeleterNoIdentifier>&& impl)
    : JSDOMWrapper<TestNamedDeleterNoIdentifier>(structure, globalObject, WTFMove(impl))
{
}

void JSTestNamedDeleterNoIdentifier::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestNamedDeleterNoIdentifier::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestNamedDeleterNoIdentifierPrototype::create(vm, &globalObject, JSTestNamedDeleterNoIdentifierPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestNamedDeleterNoIdentifier::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestNamedDeleterNoIdentifier>(vm, globalObject);
}

JSValue JSTestNamedDeleterNoIdentifier::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestNamedDeleterNoIdentifierConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestNamedDeleterNoIdentifier::destroy(JSC::JSCell* cell)
{
    JSTestNamedDeleterNoIdentifier* thisObject = static_cast<JSTestNamedDeleterNoIdentifier*>(cell);
    thisObject->JSTestNamedDeleterNoIdentifier::~JSTestNamedDeleterNoIdentifier();
}

bool JSTestNamedDeleterNoIdentifier::getOwnPropertySlot(JSObject* object, ExecState* state, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSTestNamedDeleterNoIdentifier*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    using GetterIDLType = IDLDOMString;
    auto getterFunctor = [] (auto& thisObject, auto propertyName) -> std::optional<typename GetterIDLType::ImplementationType> {
        auto result = thisObject.wrapped().namedItem(propertyNameToAtomicString(propertyName));
        if (!GetterIDLType::isNullValue(result))
            return typename GetterIDLType::ImplementationType { GetterIDLType::extractValueFromNullable(result) };
        return std::nullopt;
    };
    if (auto namedProperty = accessVisibleNamedProperty<OverrideBuiltins::No>(*state, *thisObject, propertyName, getterFunctor)) {
        auto value = toJS<IDLDOMString>(*state, WTFMove(namedProperty.value()));
        slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
        return true;
    }
    return JSObject::getOwnPropertySlot(object, state, propertyName, slot);
}

bool JSTestNamedDeleterNoIdentifier::getOwnPropertySlotByIndex(JSObject* object, ExecState* state, unsigned index, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSTestNamedDeleterNoIdentifier*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    auto propertyName = Identifier::from(state, index);
    using GetterIDLType = IDLDOMString;
    auto getterFunctor = [] (auto& thisObject, auto propertyName) -> std::optional<typename GetterIDLType::ImplementationType> {
        auto result = thisObject.wrapped().namedItem(propertyNameToAtomicString(propertyName));
        if (!GetterIDLType::isNullValue(result))
            return typename GetterIDLType::ImplementationType { GetterIDLType::extractValueFromNullable(result) };
        return std::nullopt;
    };
    if (auto namedProperty = accessVisibleNamedProperty<OverrideBuiltins::No>(*state, *thisObject, propertyName, getterFunctor)) {
        auto value = toJS<IDLDOMString>(*state, WTFMove(namedProperty.value()));
        slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
        return true;
    }
    return JSObject::getOwnPropertySlotByIndex(object, state, index, slot);
}

void JSTestNamedDeleterNoIdentifier::getOwnPropertyNames(JSObject* object, ExecState* state, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    auto* thisObject = jsCast<JSTestNamedDeleterNoIdentifier*>(object);
    ASSERT_GC_OBJECT_INHERITS(object, info());
    for (auto& propertyName : thisObject->wrapped().supportedPropertyNames())
        propertyNames.add(Identifier::fromString(state, propertyName));
    JSObject::getOwnPropertyNames(object, state, propertyNames, mode);
}

bool JSTestNamedDeleterNoIdentifier::deleteProperty(JSCell* cell, ExecState* state, PropertyName propertyName)
{
    auto& thisObject = *jsCast<JSTestNamedDeleterNoIdentifier*>(cell);
    auto& impl = thisObject.wrapped();
    if (isVisibleNamedProperty<OverrideBuiltins::No>(*state, thisObject, propertyName)) {
        return impl.deleteNamedProperty(propertyNameToString(propertyName));
    }
    return JSObject::deleteProperty(cell, state, propertyName);
}

bool JSTestNamedDeleterNoIdentifier::deletePropertyByIndex(JSCell* cell, ExecState* state, unsigned index)
{
    auto& thisObject = *jsCast<JSTestNamedDeleterNoIdentifier*>(cell);
    auto& impl = thisObject.wrapped();
    auto propertyName = Identifier::from(state, index);
    if (isVisibleNamedProperty<OverrideBuiltins::No>(*state, thisObject, propertyName)) {
        return impl.deleteNamedProperty(propertyNameToString(propertyName));
    }
    return JSObject::deletePropertyByIndex(cell, state, index);
}

EncodedJSValue jsTestNamedDeleterNoIdentifierConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSTestNamedDeleterNoIdentifierPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestNamedDeleterNoIdentifier::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestNamedDeleterNoIdentifierConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicDowncast<JSTestNamedDeleterNoIdentifierPrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

bool JSTestNamedDeleterNoIdentifierOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestNamedDeleterNoIdentifierOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestNamedDeleterNoIdentifier = static_cast<JSTestNamedDeleterNoIdentifier*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestNamedDeleterNoIdentifier->wrapped(), jsTestNamedDeleterNoIdentifier);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestNamedDeleterNoIdentifier@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore28TestNamedDeleterNoIdentifierE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestNamedDeleterNoIdentifier>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7TestNamedDeleterNoIdentifier@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore28TestNamedDeleterNoIdentifierE[2];
#endif

    // If this fails TestNamedDeleterNoIdentifier does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestNamedDeleterNoIdentifier>::value, "TestNamedDeleterNoIdentifier is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestNamedDeleterNoIdentifier has subclasses. If TestNamedDeleterNoIdentifier has subclasses that get passed
    // to toJS() we currently require TestNamedDeleterNoIdentifier you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestNamedDeleterNoIdentifier>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestNamedDeleterNoIdentifier& impl)
{
    return wrap(state, globalObject, impl);
}

TestNamedDeleterNoIdentifier* JSTestNamedDeleterNoIdentifier::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicDowncast<JSTestNamedDeleterNoIdentifier*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
