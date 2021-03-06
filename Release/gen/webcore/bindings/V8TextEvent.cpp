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
#include "V8TextEvent.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8UIEvent.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TextEvent::info = { V8TextEvent::GetTemplate, V8TextEvent::derefObject, 0, 0, V8TextEvent::installPerContextPrototypeProperties, &V8UIEvent::info, WrapperTypeObjectPrototype };

namespace TextEventV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> dataAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TextEvent* imp = V8TextEvent::toNative(info.Holder());
    return v8String(imp->data(), info.GetIsolate());
}

static v8::Handle<v8::Value> initTextEventCallback(const v8::Arguments& args)
{
    TextEvent* imp = V8TextEvent::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, typeArg, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH(bool, canBubbleArg, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(bool, cancelableArg, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(DOMWindow*, viewArg, V8DOMWindow::HasInstance(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined)) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined))) : 0);
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, dataArg, MAYBE_MISSING_PARAMETER(args, 4, DefaultIsUndefined));
    imp->initTextEvent(typeArg, canBubbleArg, cancelableArg, viewArg, dataArg);
    return v8Undefined();
}

} // namespace TextEventV8Internal

static const V8DOMConfiguration::BatchedAttribute V8TextEventAttrs[] = {
    // Attribute 'data' (Type: 'readonly attribute' ExtAttr: '')
    {"data", TextEventV8Internal::dataAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TextEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "TextEvent", V8UIEvent::GetTemplate(), V8TextEvent::internalFieldCount,
        V8TextEventAttrs, WTF_ARRAY_LENGTH(V8TextEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'initTextEvent'
    const int initTextEventArgc = 5;
    v8::Handle<v8::FunctionTemplate> initTextEventArgv[initTextEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initTextEventSignature = v8::Signature::New(desc, initTextEventArgc, initTextEventArgv);
    proto->Set(v8::String::NewSymbol("initTextEvent"), v8::FunctionTemplate::New(TextEventV8Internal::initTextEventCallback, v8Undefined(), initTextEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TextEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8TextEvent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TextEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TextEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TextEvent::createWrapper(PassRefPtr<TextEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8TextEvent::derefObject(void* object)
{
    static_cast<TextEvent*>(object)->deref();
}

} // namespace WebCore
