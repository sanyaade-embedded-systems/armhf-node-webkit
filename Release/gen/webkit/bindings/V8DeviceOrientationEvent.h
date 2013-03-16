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

#if ENABLE(DEVICE_ORIENTATION)

#ifndef V8DeviceOrientationEvent_h
#define V8DeviceOrientationEvent_h

#include "DeviceOrientationEvent.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "WrapperTypeInfo.h"
#include <v8.h>
#include <wtf/HashMap.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class V8DeviceOrientationEvent {
public:
    static const bool hasDependentLifetime = V8Event::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value>);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static DeviceOrientationEvent* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<DeviceOrientationEvent*>(object->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> initDeviceOrientationEventCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> alphaAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static void alphaAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> betaAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static void betaAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> gammaAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static void gammaAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> absoluteAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static void absoluteAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installPerContextProperties(v8::Handle<v8::Object>, DeviceOrientationEvent*) { }
    static void installPerContextPrototypeProperties(v8::Handle<v8::Object>) { }
private:
    friend v8::Handle<v8::Object> wrap(DeviceOrientationEvent*, v8::Handle<v8::Object> creationContext, v8::Isolate*);
    static v8::Handle<v8::Object> createWrapper(PassRefPtr<DeviceOrientationEvent>, v8::Handle<v8::Object> creationContext, v8::Isolate*);
};


inline v8::Handle<v8::Object> wrap(DeviceOrientationEvent* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate = 0)
{
    ASSERT(impl);
    ASSERT(DOMDataStore::getWrapper(impl, isolate).IsEmpty());
    return V8DeviceOrientationEvent::createWrapper(impl, creationContext, isolate);
}

inline v8::Handle<v8::Value> toV8(DeviceOrientationEvent* impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    if (UNLIKELY(!impl))
        return v8NullWithCheck(isolate);
    v8::Handle<v8::Value> wrapper = DOMDataStore::getWrapper(impl, isolate);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, creationContext, isolate);
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(DeviceOrientationEvent* impl, const HolderContainer& container, Wrappable* wrappable)
{
    if (UNLIKELY(!impl))
        return v8Null(container.GetIsolate());
    v8::Handle<v8::Object> wrapper = DOMDataStore::getWrapperFast(impl, container, wrappable);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, container.Holder(), container.GetIsolate());
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(PassRefPtr< DeviceOrientationEvent > impl, const HolderContainer& container, Wrappable* wrappable)
{
    return toV8Fast(impl.get(), container, wrappable);
}

inline v8::Handle<v8::Value> toV8(PassRefPtr< DeviceOrientationEvent > impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    return toV8(impl.get(), creationContext, isolate);
}

}

#endif // V8DeviceOrientationEvent_h
#endif // ENABLE(DEVICE_ORIENTATION)

