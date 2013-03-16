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
#include "V8LocalMediaStream.h"

#if ENABLE(MEDIA_STREAM)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8MediaStream.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8LocalMediaStream::info = { V8LocalMediaStream::GetTemplate, V8LocalMediaStream::derefObject, 0, 0, V8LocalMediaStream::installPerContextPrototypeProperties, &V8MediaStream::info, WrapperTypeObjectPrototype };

namespace LocalMediaStreamV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> stopCallback(const v8::Arguments& args)
{
    LocalMediaStream* imp = V8LocalMediaStream::toNative(args.Holder());
    imp->stop();
    return v8Undefined();
}

} // namespace LocalMediaStreamV8Internal

static const V8DOMConfiguration::BatchedCallback V8LocalMediaStreamCallbacks[] = {
    {"stop", LocalMediaStreamV8Internal::stopCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8LocalMediaStreamTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "LocalMediaStream", V8MediaStream::GetTemplate(), V8LocalMediaStream::internalFieldCount,
        0, 0,
        V8LocalMediaStreamCallbacks, WTF_ARRAY_LENGTH(V8LocalMediaStreamCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8LocalMediaStream::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8LocalMediaStream::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8LocalMediaStreamTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8LocalMediaStream::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8LocalMediaStream::createWrapper(PassRefPtr<LocalMediaStream> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<MediaStream*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8LocalMediaStream::derefObject(void* object)
{
    static_cast<LocalMediaStream*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)
