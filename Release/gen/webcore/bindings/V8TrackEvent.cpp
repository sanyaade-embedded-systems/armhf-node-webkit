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
#include "V8TrackEvent.h"

#if ENABLE(VIDEO_TRACK)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Dictionary.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TrackEvent::info = { V8TrackEvent::GetTemplate, V8TrackEvent::derefObject, 0, 0, V8TrackEvent::installPerContextPrototypeProperties, &V8Event::info, WrapperTypeObjectPrototype };

namespace TrackEventV8Internal {

template <typename T> void V8_USE(T) { }

} // namespace TrackEventV8Internal

static const V8DOMConfiguration::BatchedAttribute V8TrackEventAttrs[] = {
    // Attribute 'track' (Type: 'readonly attribute' ExtAttr: 'InitializedByEventConstructor CustomGetter')
    {"track", V8TrackEvent::trackAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

v8::Handle<v8::Value> V8TrackEvent::constructorCallback(const v8::Arguments& args)
{
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());

    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, type, args[0]);
    TrackEventInit eventInit;
    if (args.Length() >= 2) {
        V8TRYCATCH(Dictionary, options, Dictionary(args[1], args.GetIsolate()));
        if (!fillTrackEventInit(eventInit, options))
            return v8Undefined();
    }

    RefPtr<TrackEvent> event = TrackEvent::create(type, eventInit);

    v8::Handle<v8::Object> wrapper = args.Holder();
    V8DOMWrapper::associateObjectWithWrapper(event.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

bool fillTrackEventInit(TrackEventInit& eventInit, const Dictionary& options)
{
    if (!fillEventInit(eventInit, options))
        return false;

    options.get("track", eventInit.track);
    return true;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TrackEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::webkitVideoTrackEnabled())
        defaultSignature = V8DOMConfiguration::configureTemplate(desc, "", V8Event::GetTemplate(), V8TrackEvent::internalFieldCount, 0, 0, 0, 0);
    else
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "TrackEvent", V8Event::GetTemplate(), V8TrackEvent::internalFieldCount,
        V8TrackEventAttrs, WTF_ARRAY_LENGTH(V8TrackEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8TrackEvent::constructorCallback);
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TrackEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8TrackEvent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TrackEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TrackEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TrackEvent::createWrapper(PassRefPtr<TrackEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Event*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8TrackEvent::derefObject(void* object)
{
    static_cast<TrackEvent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO_TRACK)