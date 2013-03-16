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

#ifndef V8DOMWindow_h
#define V8DOMWindow_h

#include "DOMWindow.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "WrapperTypeInfo.h"
#include <v8.h>
#include <wtf/HashMap.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class V8DOMWindow {
public:
    static const bool hasDependentLifetime = false;
    static bool HasInstance(v8::Handle<v8::Value>);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static DOMWindow* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<DOMWindow*>(object->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Persistent<v8::ObjectTemplate> GetShadowObjectTemplate();
    static v8::Handle<v8::Value> openCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> showModalDialogCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> postMessageCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> setTimeoutCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> setIntervalCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> captureEventsCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> releaseEventsCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> toStringCallback(const v8::Arguments&);
    static void locationAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> eventAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static void eventAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void openerAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> indexedPropertyGetter(uint32_t, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> namedPropertyGetter(v8::Local<v8::String>, const v8::AccessorInfo&);
    static const int eventListenerCacheIndex = v8DefaultWrapperInternalFieldCount + 0;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 1;
    static bool namedSecurityCheck(v8::Local<v8::Object> host, v8::Local<v8::Value> key, v8::AccessType, v8::Local<v8::Value> data);
    static bool indexedSecurityCheck(v8::Local<v8::Object> host, uint32_t index, v8::AccessType, v8::Local<v8::Value> data);
    static void installPerContextProperties(v8::Handle<v8::Object>, DOMWindow*);
    static void installPerContextPrototypeProperties(v8::Handle<v8::Object>) { }
private:
};

class DOMWindow;
v8::Handle<v8::Value> toV8(DOMWindow*, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* = 0);

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(DOMWindow* impl, const HolderContainer& container, Wrappable*)
{
    return toV8(impl, container.Holder(), container.GetIsolate());
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(PassRefPtr< DOMWindow > impl, const HolderContainer& container, Wrappable* wrappable)
{
    return toV8Fast(impl.get(), container, wrappable);
}

inline v8::Handle<v8::Value> toV8(PassRefPtr< DOMWindow > impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    return toV8(impl.get(), creationContext, isolate);
}

}

#endif // V8DOMWindow_h
