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

#ifndef V8HTMLAppletElement_h
#define V8HTMLAppletElement_h

#include "HTMLAppletElement.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "WrapperTypeInfo.h"
#include <v8.h>
#include <wtf/HashMap.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class V8HTMLAppletElement {
public:
    static const bool hasDependentLifetime = V8HTMLElement::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value>);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static HTMLAppletElement* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<HTMLAppletElement*>(object->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> indexedPropertyGetter(uint32_t, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> indexedPropertySetter(uint32_t, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> namedPropertyGetter(v8::Local<v8::String>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> namedPropertySetter(v8::Local<v8::String>, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> callAsFunctionCallback(const v8::Arguments&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installPerContextProperties(v8::Handle<v8::Object>, HTMLAppletElement*) { }
    static void installPerContextPrototypeProperties(v8::Handle<v8::Object>) { }
private:
    friend v8::Handle<v8::Object> wrap(HTMLAppletElement*, v8::Handle<v8::Object> creationContext, v8::Isolate*);
    static v8::Handle<v8::Object> createWrapper(PassRefPtr<HTMLAppletElement>, v8::Handle<v8::Object> creationContext, v8::Isolate*);
};


inline v8::Handle<v8::Object> wrap(HTMLAppletElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate = 0)
{
    ASSERT(impl);
    ASSERT(DOMDataStore::getWrapper(impl, isolate).IsEmpty());
    return V8HTMLAppletElement::createWrapper(impl, creationContext, isolate);
}

inline v8::Handle<v8::Value> toV8(HTMLAppletElement* impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    if (UNLIKELY(!impl))
        return v8NullWithCheck(isolate);
    v8::Handle<v8::Value> wrapper = DOMDataStore::getWrapper(impl, isolate);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, creationContext, isolate);
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(HTMLAppletElement* impl, const HolderContainer& container, Wrappable* wrappable)
{
    if (UNLIKELY(!impl))
        return v8Null(container.GetIsolate());
    v8::Handle<v8::Object> wrapper = DOMDataStore::getWrapperFast(impl, container, wrappable);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, container.Holder(), container.GetIsolate());
}

template<class HolderContainer, class Wrappable>
inline v8::Handle<v8::Value> toV8Fast(PassRefPtr< HTMLAppletElement > impl, const HolderContainer& container, Wrappable* wrappable)
{
    return toV8Fast(impl.get(), container, wrappable);
}

inline v8::Handle<v8::Value> toV8(PassRefPtr< HTMLAppletElement > impl, v8::Handle<v8::Object> creationContext = v8::Handle<v8::Object>(), v8::Isolate* isolate = 0)
{
    return toV8(impl.get(), creationContext, isolate);
}

}

#endif // V8HTMLAppletElement_h
