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
#include "V8TextTrack.h"

#if ENABLE(VIDEO_TRACK)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8TextTrackCue.h"
#include "V8TextTrackCueList.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TextTrack::info = { V8TextTrack::GetTemplate, V8TextTrack::derefObject, 0, 0, V8TextTrack::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace TextTrackV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> kindAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    return v8String(imp->kind(), info.GetIsolate());
}

static v8::Handle<v8::Value> labelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    return v8String(imp->label(), info.GetIsolate());
}

static v8::Handle<v8::Value> languageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    return v8String(imp->language(), info.GetIsolate());
}

static v8::Handle<v8::Value> modeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    return v8String(imp->mode(), info.GetIsolate());
}

static void modeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setMode(v);
    return;
}

static v8::Handle<v8::Value> cuesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    RefPtr<TextTrackCueList> result = imp->cues();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "cues", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> activeCuesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    RefPtr<TextTrackCueList> result = imp->activeCues();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "activeCues", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> oncuechangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    return imp->oncuechange() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->oncuechange())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void oncuechangeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    TextTrack* imp = V8TextTrack::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->oncuechange(), value, V8TextTrack::eventListenerCacheIndex);
    imp->setOncuechange(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> addCueCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    TextTrack* imp = V8TextTrack::toNative(args.Holder());
    V8TRYCATCH(TextTrackCue*, cue, V8TextTrackCue::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8TextTrackCue::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->addCue(cue);
    return v8Undefined();
}

static v8::Handle<v8::Value> removeCueCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    TextTrack* imp = V8TextTrack::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(TextTrackCue*, cue, V8TextTrackCue::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8TextTrackCue::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->removeCue(cue, ec);
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
        V8TextTrack::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8TextTrack::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8TextTrack::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8TextTrack::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    TextTrack* imp = V8TextTrack::toNative(args.Holder());
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

} // namespace TextTrackV8Internal

static const V8DOMConfiguration::BatchedAttribute V8TextTrackAttrs[] = {
    // Attribute 'kind' (Type: 'readonly attribute' ExtAttr: '')
    {"kind", TextTrackV8Internal::kindAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'label' (Type: 'readonly attribute' ExtAttr: '')
    {"label", TextTrackV8Internal::labelAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'language' (Type: 'readonly attribute' ExtAttr: '')
    {"language", TextTrackV8Internal::languageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'mode' (Type: 'attribute' ExtAttr: '')
    {"mode", TextTrackV8Internal::modeAttrGetter, TextTrackV8Internal::modeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cues' (Type: 'readonly attribute' ExtAttr: '')
    {"cues", TextTrackV8Internal::cuesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'activeCues' (Type: 'readonly attribute' ExtAttr: '')
    {"activeCues", TextTrackV8Internal::activeCuesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'oncuechange' (Type: 'attribute' ExtAttr: '')
    {"oncuechange", TextTrackV8Internal::oncuechangeAttrGetter, TextTrackV8Internal::oncuechangeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8TextTrackCallbacks[] = {
    {"addEventListener", TextTrackV8Internal::addEventListenerCallback},
    {"removeEventListener", TextTrackV8Internal::removeEventListenerCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TextTrackTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::webkitVideoTrackEnabled())
        defaultSignature = V8DOMConfiguration::configureTemplate(desc, "", v8::Persistent<v8::FunctionTemplate>(), V8TextTrack::internalFieldCount, 0, 0, 0, 0);
    else
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "TextTrack", v8::Persistent<v8::FunctionTemplate>(), V8TextTrack::internalFieldCount,
        V8TextTrackAttrs, WTF_ARRAY_LENGTH(V8TextTrackAttrs),
        V8TextTrackCallbacks, WTF_ARRAY_LENGTH(V8TextTrackCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'addCue'
    const int addCueArgc = 1;
    v8::Handle<v8::FunctionTemplate> addCueArgv[addCueArgc] = { V8TextTrackCue::GetRawTemplate() };
    v8::Handle<v8::Signature> addCueSignature = v8::Signature::New(desc, addCueArgc, addCueArgv);
    proto->Set(v8::String::NewSymbol("addCue"), v8::FunctionTemplate::New(TextTrackV8Internal::addCueCallback, v8Undefined(), addCueSignature));

    // Custom Signature 'removeCue'
    const int removeCueArgc = 1;
    v8::Handle<v8::FunctionTemplate> removeCueArgv[removeCueArgc] = { V8TextTrackCue::GetRawTemplate() };
    v8::Handle<v8::Signature> removeCueSignature = v8::Signature::New(desc, removeCueArgc, removeCueArgv);
    proto->Set(v8::String::NewSymbol("removeCue"), v8::FunctionTemplate::New(TextTrackV8Internal::removeCueCallback, v8Undefined(), removeCueSignature));

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(TextTrackV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TextTrack::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8TextTrack::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TextTrackTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TextTrack::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TextTrack::createWrapper(PassRefPtr<TextTrack> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8TextTrack::derefObject(void* object)
{
    static_cast<TextTrack*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO_TRACK)