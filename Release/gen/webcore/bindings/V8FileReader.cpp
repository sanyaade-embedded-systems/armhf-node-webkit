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
#include "V8FileReader.h"

#if ENABLE(BLOB)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8Blob.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8FileError.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8FileReader::info = { V8FileReader::GetTemplate, V8FileReader::derefObject, V8FileReader::toActiveDOMObject, 0, V8FileReader::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace FileReaderV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> readyStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return v8Integer(imp->readyState(), info.GetIsolate());
}

static v8::Handle<v8::Value> errorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    RefPtr<FileError> result = imp->error();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "error", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> onloadstartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onloadstart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onloadstart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadstartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onloadstart(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnloadstart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onprogressAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onprogress() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onprogress())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onprogressAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onprogress(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnprogress(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onload() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onload())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onload(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnload(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onabortAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onabort() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onabort())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onabortAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onabort(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnabort(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    return imp->onloadend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onloadend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onloadendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    FileReader* imp = V8FileReader::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onloadend(), value, V8FileReader::eventListenerCacheIndex);
    imp->setOnloadend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> readAsArrayBufferCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    FileReader* imp = V8FileReader::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->readAsArrayBuffer(blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> readAsBinaryStringCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    FileReader* imp = V8FileReader::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->readAsBinaryString(blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> readAsTextCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    FileReader* imp = V8FileReader::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (args.Length() <= 1) {
        imp->readAsText(blob, ec);
        if (UNLIKELY(ec))
            goto fail;
        return v8Undefined();
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, encoding, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    imp->readAsText(blob, encoding, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> readAsDataURLCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    FileReader* imp = V8FileReader::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->readAsDataURL(blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    FileReader* imp = V8FileReader::toNative(args.Holder());
    imp->abort();
    return v8Undefined();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8FileReader::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8FileReader::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8FileReader::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8FileReader::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    FileReader* imp = V8FileReader::toNative(args.Holder());
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

} // namespace FileReaderV8Internal

static const V8DOMConfiguration::BatchedAttribute V8FileReaderAttrs[] = {
    // Attribute 'readyState' (Type: 'readonly attribute' ExtAttr: '')
    {"readyState", FileReaderV8Internal::readyStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"result", V8FileReader::resultAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'error' (Type: 'readonly attribute' ExtAttr: '')
    {"error", FileReaderV8Internal::errorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onloadstart' (Type: 'attribute' ExtAttr: '')
    {"onloadstart", FileReaderV8Internal::onloadstartAttrGetter, FileReaderV8Internal::onloadstartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onprogress' (Type: 'attribute' ExtAttr: '')
    {"onprogress", FileReaderV8Internal::onprogressAttrGetter, FileReaderV8Internal::onprogressAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onload' (Type: 'attribute' ExtAttr: '')
    {"onload", FileReaderV8Internal::onloadAttrGetter, FileReaderV8Internal::onloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onabort' (Type: 'attribute' ExtAttr: '')
    {"onabort", FileReaderV8Internal::onabortAttrGetter, FileReaderV8Internal::onabortAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", FileReaderV8Internal::onerrorAttrGetter, FileReaderV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onloadend' (Type: 'attribute' ExtAttr: '')
    {"onloadend", FileReaderV8Internal::onloadendAttrGetter, FileReaderV8Internal::onloadendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8FileReaderCallbacks[] = {
    {"readAsText", FileReaderV8Internal::readAsTextCallback},
    {"abort", FileReaderV8Internal::abortCallback},
    {"addEventListener", FileReaderV8Internal::addEventListenerCallback},
    {"removeEventListener", FileReaderV8Internal::removeEventListenerCallback},
};

static const V8DOMConfiguration::BatchedConstant V8FileReaderConsts[] = {
    {"EMPTY", static_cast<signed int>(0)},
    {"LOADING", static_cast<signed int>(1)},
    {"DONE", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == FileReader::EMPTY, FileReaderEnumEMPTYIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == FileReader::LOADING, FileReaderEnumLOADINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == FileReader::DONE, FileReaderEnumDONEIsWrongUseDoNotCheckConstants);

v8::Handle<v8::Value> V8FileReader::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    ScriptExecutionContext* context = getScriptExecutionContext();

    RefPtr<FileReader> impl = FileReader::create(context);
    v8::Handle<v8::Object> wrapper = args.Holder();

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8FileReaderTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "FileReader", v8::Persistent<v8::FunctionTemplate>(), V8FileReader::internalFieldCount,
        V8FileReaderAttrs, WTF_ARRAY_LENGTH(V8FileReaderAttrs),
        V8FileReaderCallbacks, WTF_ARRAY_LENGTH(V8FileReaderCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8FileReader::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'readAsArrayBuffer'
    const int readAsArrayBufferArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsArrayBufferArgv[readAsArrayBufferArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsArrayBufferSignature = v8::Signature::New(desc, readAsArrayBufferArgc, readAsArrayBufferArgv);
    proto->Set(v8::String::NewSymbol("readAsArrayBuffer"), v8::FunctionTemplate::New(FileReaderV8Internal::readAsArrayBufferCallback, v8Undefined(), readAsArrayBufferSignature));

    // Custom Signature 'readAsBinaryString'
    const int readAsBinaryStringArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsBinaryStringArgv[readAsBinaryStringArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsBinaryStringSignature = v8::Signature::New(desc, readAsBinaryStringArgc, readAsBinaryStringArgv);
    proto->Set(v8::String::NewSymbol("readAsBinaryString"), v8::FunctionTemplate::New(FileReaderV8Internal::readAsBinaryStringCallback, v8Undefined(), readAsBinaryStringSignature));

    // Custom Signature 'readAsDataURL'
    const int readAsDataURLArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsDataURLArgv[readAsDataURLArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsDataURLSignature = v8::Signature::New(desc, readAsDataURLArgc, readAsDataURLArgv);
    proto->Set(v8::String::NewSymbol("readAsDataURL"), v8::FunctionTemplate::New(FileReaderV8Internal::readAsDataURLCallback, v8Undefined(), readAsDataURLSignature));

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(FileReaderV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8FileReaderConsts, WTF_ARRAY_LENGTH(V8FileReaderConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8FileReader::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8FileReader::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8FileReaderTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8FileReader::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8FileReader::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8FileReader::createWrapper(PassRefPtr<FileReader> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8FileReader::derefObject(void* object)
{
    static_cast<FileReader*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(BLOB)