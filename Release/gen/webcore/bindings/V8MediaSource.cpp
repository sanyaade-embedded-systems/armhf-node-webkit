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
#include "V8MediaSource.h"

#if ENABLE(MEDIA_SOURCE)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8SourceBuffer.h"
#include "V8SourceBufferList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8MediaSource::info = { V8MediaSource::GetTemplate, V8MediaSource::derefObject, V8MediaSource::toActiveDOMObject, 0, V8MediaSource::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace MediaSourceV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> sourceBuffersAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MediaSource* imp = V8MediaSource::toNative(info.Holder());
    RefPtr<SourceBufferList> result = imp->sourceBuffers();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "sourceBuffers", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> activeSourceBuffersAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MediaSource* imp = V8MediaSource::toNative(info.Holder());
    RefPtr<SourceBufferList> result = imp->activeSourceBuffers();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "activeSourceBuffers", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> durationAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MediaSource* imp = V8MediaSource::toNative(info.Holder());
    return v8::Number::New(imp->duration());
}

static void durationAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    MediaSource* imp = V8MediaSource::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setDuration(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> readyStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MediaSource* imp = V8MediaSource::toNative(info.Holder());
    return v8String(imp->readyState(), info.GetIsolate());
}

static v8::Handle<v8::Value> addSourceBufferCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    MediaSource* imp = V8MediaSource::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, type, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    RefPtr<SourceBuffer> result = imp->addSourceBuffer(type, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> removeSourceBufferCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    MediaSource* imp = V8MediaSource::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(SourceBuffer*, buffer, V8SourceBuffer::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SourceBuffer::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->removeSourceBuffer(buffer, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> endOfStreamCallback(const v8::Arguments& args)
{
    MediaSource* imp = V8MediaSource::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, error, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsNullString));
    imp->endOfStream(error, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8MediaSource::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8MediaSource::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8MediaSource::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8MediaSource::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    MediaSource* imp = V8MediaSource::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Event*, event, V8Event::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    bool result = imp->dispatchEvent(event, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace MediaSourceV8Internal

static const V8DOMConfiguration::BatchedAttribute V8MediaSourceAttrs[] = {
    // Attribute 'sourceBuffers' (Type: 'readonly attribute' ExtAttr: '')
    {"sourceBuffers", MediaSourceV8Internal::sourceBuffersAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'activeSourceBuffers' (Type: 'readonly attribute' ExtAttr: '')
    {"activeSourceBuffers", MediaSourceV8Internal::activeSourceBuffersAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'duration' (Type: 'attribute' ExtAttr: '')
    {"duration", MediaSourceV8Internal::durationAttrGetter, MediaSourceV8Internal::durationAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'readyState' (Type: 'readonly attribute' ExtAttr: '')
    {"readyState", MediaSourceV8Internal::readyStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8MediaSourceCallbacks[] = {
    {"addSourceBuffer", MediaSourceV8Internal::addSourceBufferCallback},
    {"endOfStream", MediaSourceV8Internal::endOfStreamCallback},
    {"addEventListener", MediaSourceV8Internal::addEventListenerCallback},
    {"removeEventListener", MediaSourceV8Internal::removeEventListenerCallback},
};

v8::Handle<v8::Value> V8MediaSource::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    ScriptExecutionContext* context = getScriptExecutionContext();

    RefPtr<MediaSource> impl = MediaSource::create(context);
    v8::Handle<v8::Object> wrapper = args.Holder();

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MediaSourceTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::mediaSourceEnabled())
        defaultSignature = V8DOMConfiguration::configureTemplate(desc, "", v8::Persistent<v8::FunctionTemplate>(), V8MediaSource::internalFieldCount, 0, 0, 0, 0);
    else
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "MediaSource", v8::Persistent<v8::FunctionTemplate>(), V8MediaSource::internalFieldCount,
        V8MediaSourceAttrs, WTF_ARRAY_LENGTH(V8MediaSourceAttrs),
        V8MediaSourceCallbacks, WTF_ARRAY_LENGTH(V8MediaSourceCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8MediaSource::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'removeSourceBuffer'
    const int removeSourceBufferArgc = 1;
    v8::Handle<v8::FunctionTemplate> removeSourceBufferArgv[removeSourceBufferArgc] = { V8SourceBuffer::GetRawTemplate() };
    v8::Handle<v8::Signature> removeSourceBufferSignature = v8::Signature::New(desc, removeSourceBufferArgc, removeSourceBufferArgv);
    proto->Set(v8::String::NewSymbol("removeSourceBuffer"), v8::FunctionTemplate::New(MediaSourceV8Internal::removeSourceBufferCallback, v8Undefined(), removeSourceBufferSignature));

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(MediaSourceV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MediaSource::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8MediaSource::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8MediaSourceTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8MediaSource::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8MediaSource::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8MediaSource::createWrapper(PassRefPtr<MediaSource> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8MediaSource::derefObject(void* object)
{
    static_cast<MediaSource*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(MEDIA_SOURCE)