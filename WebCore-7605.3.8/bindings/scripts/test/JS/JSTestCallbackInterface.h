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

#pragma once

#if ENABLE(TEST_CONDITIONAL)

#include "IDLTypes.h"
#include "JSCallbackData.h"
#include "JSDOMConvertDictionary.h"
#include "JSDOMConvertEnumeration.h"
#include "TestCallbackInterface.h"
#include <wtf/Forward.h>

namespace WebCore {

class JSTestCallbackInterface final : public TestCallbackInterface {
public:
    static Ref<JSTestCallbackInterface> create(JSC::JSObject* callback, JSDOMGlobalObject* globalObject)
    {
        return adoptRef(*new JSTestCallbackInterface(callback, globalObject));
    }

    virtual ScriptExecutionContext* scriptExecutionContext() const { return ContextDestructionObserver::scriptExecutionContext(); }

    virtual ~JSTestCallbackInterface();
    JSCallbackDataStrong* callbackData() { return m_data; }
    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);

    // Functions
    CallbackResult<typename IDLVoid::ImplementationType> callbackWithNoParam() override;
    CallbackResult<typename IDLVoid::ImplementationType> callbackWithArrayParam(typename IDLFloat32Array::ParameterType arrayParam) override;
    CallbackResult<typename IDLVoid::ImplementationType> callbackWithSerializedScriptValueParam(typename IDLSerializedScriptValue<SerializedScriptValue>::ParameterType srzParam, typename IDLDOMString::ParameterType strParam) override;
    CallbackResult<typename IDLLong::ImplementationType> customCallback(typename IDLInterface<TestObj>::ParameterType testObjParam, typename IDLInterface<TestNode>::ParameterType testNodeParam) override;
    CallbackResult<typename IDLVoid::ImplementationType> callbackWithStringList(typename IDLInterface<DOMStringList>::ParameterType listParam) override;
    CallbackResult<typename IDLVoid::ImplementationType> callbackWithBoolean(typename IDLBoolean::ParameterType boolParam) override;
    CallbackResult<typename IDLVoid::ImplementationType> callbackRequiresThisToPass(typename IDLLong::ParameterType longParam, typename IDLInterface<TestNode>::ParameterType testNodeParam) override;
    CallbackResult<typename IDLDOMString::ImplementationType> callbackWithAReturnValue() override;
    CallbackResult<typename IDLDOMString::ImplementationType> callbackThatRethrowsExceptions(typename IDLEnumeration<TestCallbackInterface::Enum>::ParameterType enumParam) override;
    CallbackResult<typename IDLDOMString::ImplementationType> callbackThatSkipsInvokeCheck(typename IDLDictionary<TestCallbackInterface::Dictionary>::ParameterType dictionaryParam) override;
    CallbackResult<typename IDLDOMString::ImplementationType> callbackWithThisObject(typename IDLInterface<TestNode>::ParameterType thisObject, typename IDLInterface<TestObj>::ParameterType testObjParam) override;

private:
    JSTestCallbackInterface(JSC::JSObject*, JSDOMGlobalObject*);

    JSCallbackDataStrong* m_data;
};

JSC::JSValue toJS(TestCallbackInterface&);
inline JSC::JSValue toJS(TestCallbackInterface* impl) { return impl ? toJS(*impl) : JSC::jsNull(); }

String convertEnumerationToString(TestCallbackInterface::Enum);
template<> JSC::JSString* convertEnumerationToJS(JSC::ExecState&, TestCallbackInterface::Enum);

template<> std::optional<TestCallbackInterface::Enum> parseEnumeration<TestCallbackInterface::Enum>(JSC::ExecState&, JSC::JSValue);
template<> const char* expectedEnumerationValues<TestCallbackInterface::Enum>();

template<> TestCallbackInterface::Dictionary convertDictionary<TestCallbackInterface::Dictionary>(JSC::ExecState&, JSC::JSValue);

} // namespace WebCore

#endif // ENABLE(TEST_CONDITIONAL)
