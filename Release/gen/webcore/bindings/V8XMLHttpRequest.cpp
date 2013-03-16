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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8XMLHttpRequest.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Document.h"
#include "V8Event.h"
#include "V8XMLHttpRequestUpload.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8XMLHttpRequest::info = { V8XMLHttpRequest::GetTemplate, V8XMLHttpRequest::derefObject, V8XMLHttpRequest::toActiveDOMObject, 0, V8XMLHttpRequest::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace XMLHttpRequestV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> onabortAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onabort() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onabort())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onabortAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onabort(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnabort(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onload() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onload())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onload(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnload(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onloadend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onloadend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onloadend(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnloadend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadstartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onloadstart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onloadstart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadstartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onloadstart(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnloadstart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onprogressAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onprogress() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onprogress())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onprogressAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onprogress(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnprogress(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

#if ENABLE(XHR_TIMEOUT)

static v8::Handle<v8::Value> ontimeoutAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->ontimeout() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->ontimeout())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

#endif // ENABLE(XHR_TIMEOUT)

#if ENABLE(XHR_TIMEOUT)

static void ontimeoutAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->ontimeout(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOntimeout(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

#endif // ENABLE(XHR_TIMEOUT)

static v8::Handle<v8::Value> onreadystatechangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return imp->onreadystatechange() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onreadystatechange())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onreadystatechangeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onreadystatechange(), value, V8XMLHttpRequest::eventListenerCacheIndex);
    imp->setOnreadystatechange(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

#if ENABLE(XHR_TIMEOUT)

static v8::Handle<v8::Value> timeoutAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return v8UnsignedInteger(imp->timeout(), info.GetIsolate());
}

#endif // ENABLE(XHR_TIMEOUT)

#if ENABLE(XHR_TIMEOUT)

static void timeoutAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    unsigned v = toUInt32(value);
    ExceptionCode ec = 0;
    imp->setTimeout(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

#endif // ENABLE(XHR_TIMEOUT)

static v8::Handle<v8::Value> readyStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return v8Integer(imp->readyState(), info.GetIsolate());
}

static v8::Handle<v8::Value> withCredentialsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return v8Boolean(imp->withCredentials(), info.GetIsolate());
}

static void withCredentialsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    bool v = value->BooleanValue();
    ExceptionCode ec = 0;
    imp->setWithCredentials(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> uploadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    RefPtr<XMLHttpRequestUpload> result = imp->upload();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "upload", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> responseXMLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    ExceptionCode ec = 0;
    RefPtr<Document> v = imp->responseXML(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return toV8Fast(v.release(), info, imp);
}

static v8::Handle<v8::Value> responseTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    return v8String(imp->responseType(), info.GetIsolate());
}

static void responseTypeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setResponseType(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> statusAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    ExceptionCode ec = 0;
    int v = imp->status(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8Integer(v, info.GetIsolate());
}

static v8::Handle<v8::Value> statusTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(info.Holder());
    ExceptionCode ec = 0;
    String v = imp->statusText(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8String(v, info.GetIsolate());
}

static v8::Handle<v8::Value> setRequestHeaderCallback(const v8::Arguments& args)
{
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, header, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, value, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    imp->setRequestHeader(header, value, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    imp->abort();
    return v8Undefined();
}

static v8::Handle<v8::Value> getAllResponseHeadersCallback(const v8::Arguments& args)
{
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    String result = imp->getAllResponseHeaders(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrUndefined(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getResponseHeaderCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, header, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    String result = imp->getResponseHeader(header, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> overrideMimeTypeCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, override, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->overrideMimeType(override);
    return v8Undefined();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8XMLHttpRequest::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8XMLHttpRequest::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8XMLHttpRequest::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8XMLHttpRequest::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    XMLHttpRequest* imp = V8XMLHttpRequest::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Event*, evt, V8Event::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace XMLHttpRequestV8Internal

static const V8DOMConfiguration::BatchedAttribute V8XMLHttpRequestAttrs[] = {
    // Attribute 'onabort' (Type: 'attribute' ExtAttr: '')
    {"onabort", XMLHttpRequestV8Internal::onabortAttrGetter, XMLHttpRequestV8Internal::onabortAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", XMLHttpRequestV8Internal::onerrorAttrGetter, XMLHttpRequestV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onload' (Type: 'attribute' ExtAttr: '')
    {"onload", XMLHttpRequestV8Internal::onloadAttrGetter, XMLHttpRequestV8Internal::onloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onloadend' (Type: 'attribute' ExtAttr: '')
    {"onloadend", XMLHttpRequestV8Internal::onloadendAttrGetter, XMLHttpRequestV8Internal::onloadendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onloadstart' (Type: 'attribute' ExtAttr: '')
    {"onloadstart", XMLHttpRequestV8Internal::onloadstartAttrGetter, XMLHttpRequestV8Internal::onloadstartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onprogress' (Type: 'attribute' ExtAttr: '')
    {"onprogress", XMLHttpRequestV8Internal::onprogressAttrGetter, XMLHttpRequestV8Internal::onprogressAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(XHR_TIMEOUT)
    // Attribute 'ontimeout' (Type: 'attribute' ExtAttr: 'Conditional')
    {"ontimeout", XMLHttpRequestV8Internal::ontimeoutAttrGetter, XMLHttpRequestV8Internal::ontimeoutAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(XHR_TIMEOUT)
    // Attribute 'onreadystatechange' (Type: 'attribute' ExtAttr: '')
    {"onreadystatechange", XMLHttpRequestV8Internal::onreadystatechangeAttrGetter, XMLHttpRequestV8Internal::onreadystatechangeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(XHR_TIMEOUT)
    // Attribute 'timeout' (Type: 'attribute' ExtAttr: 'Conditional')
    {"timeout", XMLHttpRequestV8Internal::timeoutAttrGetter, XMLHttpRequestV8Internal::timeoutAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(XHR_TIMEOUT)
    // Attribute 'readyState' (Type: 'readonly attribute' ExtAttr: '')
    {"readyState", XMLHttpRequestV8Internal::readyStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'withCredentials' (Type: 'attribute' ExtAttr: '')
    {"withCredentials", XMLHttpRequestV8Internal::withCredentialsAttrGetter, XMLHttpRequestV8Internal::withCredentialsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'upload' (Type: 'readonly attribute' ExtAttr: '')
    {"upload", XMLHttpRequestV8Internal::uploadAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'responseText' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"responseText", V8XMLHttpRequest::responseTextAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'responseXML' (Type: 'readonly attribute' ExtAttr: '')
    {"responseXML", XMLHttpRequestV8Internal::responseXMLAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'responseType' (Type: 'attribute' ExtAttr: '')
    {"responseType", XMLHttpRequestV8Internal::responseTypeAttrGetter, XMLHttpRequestV8Internal::responseTypeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'response' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"response", V8XMLHttpRequest::responseAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'status' (Type: 'readonly attribute' ExtAttr: '')
    {"status", XMLHttpRequestV8Internal::statusAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'statusText' (Type: 'readonly attribute' ExtAttr: '')
    {"statusText", XMLHttpRequestV8Internal::statusTextAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8XMLHttpRequestCallbacks[] = {
    {"open", V8XMLHttpRequest::openCallback},
    {"setRequestHeader", XMLHttpRequestV8Internal::setRequestHeaderCallback},
    {"send", V8XMLHttpRequest::sendCallback},
    {"abort", XMLHttpRequestV8Internal::abortCallback},
    {"getAllResponseHeaders", XMLHttpRequestV8Internal::getAllResponseHeadersCallback},
    {"getResponseHeader", XMLHttpRequestV8Internal::getResponseHeaderCallback},
    {"overrideMimeType", XMLHttpRequestV8Internal::overrideMimeTypeCallback},
    {"addEventListener", XMLHttpRequestV8Internal::addEventListenerCallback},
    {"removeEventListener", XMLHttpRequestV8Internal::removeEventListenerCallback},
};

static const V8DOMConfiguration::BatchedConstant V8XMLHttpRequestConsts[] = {
    {"UNSENT", static_cast<signed int>(0)},
    {"OPENED", static_cast<signed int>(1)},
    {"HEADERS_RECEIVED", static_cast<signed int>(2)},
    {"LOADING", static_cast<signed int>(3)},
    {"DONE", static_cast<signed int>(4)},
};


COMPILE_ASSERT(0 == XMLHttpRequest::UNSENT, XMLHttpRequestEnumUNSENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == XMLHttpRequest::OPENED, XMLHttpRequestEnumOPENEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == XMLHttpRequest::HEADERS_RECEIVED, XMLHttpRequestEnumHEADERS_RECEIVEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == XMLHttpRequest::LOADING, XMLHttpRequestEnumLOADINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == XMLHttpRequest::DONE, XMLHttpRequestEnumDONEIsWrongUseDoNotCheckConstants);

v8::Handle<v8::Value> V8XMLHttpRequest::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    return V8XMLHttpRequest::constructorCallbackCustom(args);
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8XMLHttpRequestTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "XMLHttpRequest", v8::Persistent<v8::FunctionTemplate>(), V8XMLHttpRequest::internalFieldCount,
        V8XMLHttpRequestAttrs, WTF_ARRAY_LENGTH(V8XMLHttpRequestAttrs),
        V8XMLHttpRequestCallbacks, WTF_ARRAY_LENGTH(V8XMLHttpRequestCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8XMLHttpRequest::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(XMLHttpRequestV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8XMLHttpRequestConsts, WTF_ARRAY_LENGTH(V8XMLHttpRequestConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8XMLHttpRequest::GetRawTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->rawTemplateMap().find(&info);
    if (result != data->rawTemplateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ = createRawTemplate();
    data->rawTemplateMap().add(&info, templ);
    return templ;
}

v8::Persistent<v8::FunctionTemplate> V8XMLHttpRequest::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8XMLHttpRequestTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8XMLHttpRequest::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8XMLHttpRequest::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8XMLHttpRequest::createWrapper(PassRefPtr<XMLHttpRequest> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8XMLHttpRequest::derefObject(void* object)
{
    static_cast<XMLHttpRequest*>(object)->deref();
}

} // namespace WebCore