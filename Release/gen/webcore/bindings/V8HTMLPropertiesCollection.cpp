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
#include "V8HTMLPropertiesCollection.h"

#if ENABLE(MICRODATA)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Collection.h"
#include "V8DOMStringList.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8Node.h"
#include "V8PropertyNodeList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLPropertiesCollection::info = { V8HTMLPropertiesCollection::GetTemplate, V8HTMLPropertiesCollection::derefObject, 0, 0, V8HTMLPropertiesCollection::installPerContextPrototypeProperties, &V8HTMLCollection::info, WrapperTypeObjectPrototype };

namespace HTMLPropertiesCollectionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLPropertiesCollection* imp = V8HTMLPropertiesCollection::toNative(info.Holder());
    return v8UnsignedInteger(imp->length(), info.GetIsolate());
}

static v8::Handle<v8::Value> namesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLPropertiesCollection* imp = V8HTMLPropertiesCollection::toNative(info.Holder());
    RefPtr<DOMStringList> result = imp->names();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "names", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    HTMLPropertiesCollection* imp = V8HTMLPropertiesCollection::toNative(args.Holder());
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    return toV8(imp->item(index), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> namedItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    HTMLPropertiesCollection* imp = V8HTMLPropertiesCollection::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8(imp->propertyNodeList(name), args.Holder(), args.GetIsolate());
}

} // namespace HTMLPropertiesCollectionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLPropertiesCollectionAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", HTMLPropertiesCollectionV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'names' (Type: 'readonly attribute' ExtAttr: '')
    {"names", HTMLPropertiesCollectionV8Internal::namesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8HTMLPropertiesCollectionCallbacks[] = {
    {"item", HTMLPropertiesCollectionV8Internal::itemCallback},
    {"namedItem", HTMLPropertiesCollectionV8Internal::namedItemCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLPropertiesCollectionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLPropertiesCollection", V8HTMLCollection::GetTemplate(), V8HTMLPropertiesCollection::internalFieldCount,
        V8HTMLPropertiesCollectionAttrs, WTF_ARRAY_LENGTH(V8HTMLPropertiesCollectionAttrs),
        V8HTMLPropertiesCollectionCallbacks, WTF_ARRAY_LENGTH(V8HTMLPropertiesCollectionCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    setCollectionIndexedGetter<HTMLPropertiesCollection, Node>(desc);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLCollection::namedPropertyGetter, 0, 0, 0, 0);

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLPropertiesCollection::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLPropertiesCollection::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLPropertiesCollectionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLPropertiesCollection::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLPropertiesCollection::createWrapper(PassRefPtr<HTMLPropertiesCollection> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<HTMLCollection*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8HTMLPropertiesCollection::derefObject(void* object)
{
    static_cast<HTMLPropertiesCollection*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(MICRODATA)