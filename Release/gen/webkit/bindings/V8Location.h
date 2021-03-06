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

#ifndef V8Location_h
#define V8Location_h

#include "Location.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "WrapperTypeInfo.h"
#include <v8.h>
#include <wtf/HashMap.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class V8Location {
public:
    static const bool hasDependentLifetime = false;
    static bool HasInstance(v8::Handle<v8::Value>);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static Location* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<Location*>(object->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> assignCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> replaceCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> reloadCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> toStringCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> valueOfCallback(const v8::Arguments&);
    static void hrefAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void protocolAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void hostAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void hostnameAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void portAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void pathnameAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void searchAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static void hashAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Boolean> indexedPropertyDeleter(uint32_t, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> namedPropertySetter(v8::Local<v8::String>, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Boolean> namedPropertyDeleter(v8::Local<v8::String>, const v8::AccessorInfo&);
    static v8::Handle<v8::Array> namedPropertyEnumerator(const v8::AccessorInfo&);
    static v8::Handle<v8::Integer> namedPropertyQuery(v8::Local<v8::String>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> assignAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> reloadAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> replaceAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static bool namedSecurityCheck(v8::Local<v8::Object> host, v8::Local<v8::Value> key, v8::AccessType, v8::Local<v8::Value> data);
    static bool indexedSecurityCheck(v8::Local<v8::Object> host, uint32_t index, v8::AccessType, v8::Local<v8::Value> data);
    static void installPerContextProperties(v8::Handle<v8::Object>, Location*) { }
    static void installPerContextPrototypeProperties(v8::Handle<v8::Object>) { }
private:
    friend v8::Handle<v8::Object> wrap(Location*, v8::Handle<v8::Object> creationContext, v8::Isolate*);
    static v8::Handle<v8::Object> createWrapper(PassRefPtr<Location>, v8::Handle<v8::Object> creationContext, v8::Isolate*);
};


inline v8::Handle<v8::Object> wrap(Location* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate = 0)
{
    ASSERT(impl);
    ASSERT(DOMDataStore::getWrapper(impl, isolate).IsEmpty());
    return V8Location::createWrapper(impl, creationContext, isolate);
}

inline v8::Handle<v8::Value> toV8(Location* impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    if (UNLIKELY(!impl))
        return v8NullWithCheck(isolate);
    v8::Handle<v8::Value> wrapper = DOMDataStore::getWrapper(impl, isolate);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, creationContext, isolate);
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(Location* impl, const HolderContainer& container, Wrappable* wrappable)
{
    if (UNLIKELY(!impl))
        return v8Null(container.GetIsolate());
    v8::Handle<v8::Object> wrapper = DOMDataStore::getWrapperFast(impl, container, wrappable);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, container.Holder(), container.GetIsolate());
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(PassRefPtr< Location > impl, const HolderContainer& container, Wrappable* wrappable)
{
    return toV8Fast(impl.get(), container, wrappable);
}

inline v8::Handle<v8::Value> toV8(PassRefPtr< Location > impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    return toV8(impl.get(), creationContext, isolate);
}

}

#endif // V8Location_h
