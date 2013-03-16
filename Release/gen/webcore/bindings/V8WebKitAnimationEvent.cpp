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
#include "V8WebKitAnimationEvent.h"

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

WrapperTypeInfo V8WebKitAnimationEvent::info = { V8WebKitAnimationEvent::GetTemplate, V8WebKitAnimationEvent::derefObject, 0, 0, V8WebKitAnimationEvent::installPerContextPrototypeProperties, &V8Event::info, WrapperTypeObjectPrototype };

namespace WebKitAnimationEventV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> animationNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitAnimationEvent* imp = V8WebKitAnimationEvent::toNative(info.Holder());
    return v8String(imp->animationName(), info.GetIsolate());
}

static v8::Handle<v8::Value> elapsedTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitAnimationEvent* imp = V8WebKitAnimationEvent::toNative(info.Holder());
    return v8::Number::New(imp->elapsedTime());
}

} // namespace WebKitAnimationEventV8Internal

static const V8DOMConfiguration::BatchedAttribute V8WebKitAnimationEventAttrs[] = {
    // Attribute 'animationName' (Type: 'readonly attribute' ExtAttr: 'InitializedByEventConstructor')
    {"animationName", WebKitAnimationEventV8Internal::animationNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'elapsedTime' (Type: 'readonly attribute' ExtAttr: 'InitializedByEventConstructor')
    {"elapsedTime", WebKitAnimationEventV8Internal::elapsedTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

v8::Handle<v8::Value> V8WebKitAnimationEvent::constructorCallback(const v8::Arguments& args)
{
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());

    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, type, args[0]);
    WebKitAnimationEventInit eventInit;
    if (args.Length() >= 2) {
        V8TRYCATCH(Dictionary, options, Dictionary(args[1], args.GetIsolate()));
        if (!fillWebKitAnimationEventInit(eventInit, options))
            return v8Undefined();
    }

    RefPtr<WebKitAnimationEvent> event = WebKitAnimationEvent::create(type, eventInit);

    v8::Handle<v8::Object> wrapper = args.Holder();
    V8DOMWrapper::associateObjectWithWrapper(event.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

bool fillWebKitAnimationEventInit(WebKitAnimationEventInit& eventInit, const Dictionary& options)
{
    if (!fillEventInit(eventInit, options))
        return false;

    options.get("animationName", eventInit.animationName);
    options.get("elapsedTime", eventInit.elapsedTime);
    return true;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitAnimationEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "WebKitAnimationEvent", V8Event::GetTemplate(), V8WebKitAnimationEvent::internalFieldCount,
        V8WebKitAnimationEventAttrs, WTF_ARRAY_LENGTH(V8WebKitAnimationEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8WebKitAnimationEvent::constructorCallback);
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitAnimationEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitAnimationEvent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitAnimationEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitAnimationEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitAnimationEvent::createWrapper(PassRefPtr<WebKitAnimationEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8WebKitAnimationEvent::derefObject(void* object)
{
    static_cast<WebKitAnimationEvent*>(object)->deref();
}

} // namespace WebCore