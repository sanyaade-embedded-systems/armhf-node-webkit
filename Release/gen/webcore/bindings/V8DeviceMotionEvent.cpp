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
#include "V8DeviceMotionEvent.h"

#if ENABLE(DEVICE_ORIENTATION)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DeviceMotionEvent::info = { V8DeviceMotionEvent::GetTemplate, V8DeviceMotionEvent::derefObject, 0, 0, V8DeviceMotionEvent::installPerContextPrototypeProperties, &V8Event::info, WrapperTypeObjectPrototype };

namespace DeviceMotionEventV8Internal {

template <typename T> void V8_USE(T) { }

} // namespace DeviceMotionEventV8Internal

static const V8DOMConfiguration::BatchedAttribute V8DeviceMotionEventAttrs[] = {
    // Attribute 'acceleration' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"acceleration", V8DeviceMotionEvent::accelerationAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'accelerationIncludingGravity' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"accelerationIncludingGravity", V8DeviceMotionEvent::accelerationIncludingGravityAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rotationRate' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"rotationRate", V8DeviceMotionEvent::rotationRateAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'interval' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"interval", V8DeviceMotionEvent::intervalAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8DeviceMotionEventCallbacks[] = {
    {"initDeviceMotionEvent", V8DeviceMotionEvent::initDeviceMotionEventCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DeviceMotionEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "DeviceMotionEvent", V8Event::GetTemplate(), V8DeviceMotionEvent::internalFieldCount,
        V8DeviceMotionEventAttrs, WTF_ARRAY_LENGTH(V8DeviceMotionEventAttrs),
        V8DeviceMotionEventCallbacks, WTF_ARRAY_LENGTH(V8DeviceMotionEventCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DeviceMotionEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DeviceMotionEvent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DeviceMotionEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DeviceMotionEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DeviceMotionEvent::createWrapper(PassRefPtr<DeviceMotionEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DeviceMotionEvent::derefObject(void* object)
{
    static_cast<DeviceMotionEvent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(DEVICE_ORIENTATION)
