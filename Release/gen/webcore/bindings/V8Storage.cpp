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
#include "V8Storage.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8Storage::info = { V8Storage::GetTemplate, V8Storage::derefObject, 0, 0, V8Storage::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace StorageV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Storage* imp = V8Storage::toNative(info.Holder());
    ExceptionCode ec = 0;
    unsigned v = imp->length(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8UnsignedInteger(v, info.GetIsolate());
}

static v8::Handle<v8::Value> keyCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    String result = imp->key(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, key, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    String result = imp->getItem(key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> setItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, key, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, data, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    imp->setItem(key, data, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, key, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->removeItem(key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    Storage* imp = V8Storage::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->clear(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace StorageV8Internal

static const V8DOMConfiguration::BatchedAttribute V8StorageAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: 'NotEnumerable')
    {"length", StorageV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8StorageTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Storage", v8::Persistent<v8::FunctionTemplate>(), V8Storage::internalFieldCount,
        V8StorageAttrs, WTF_ARRAY_LENGTH(V8StorageAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8Storage::indexedPropertyGetter, V8Storage::indexedPropertySetter, 0, V8Storage::indexedPropertyDeleter);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8Storage::namedPropertyGetter, V8Storage::namedPropertySetter, V8Storage::namedPropertyQuery, V8Storage::namedPropertyDeleter, V8Storage::namedPropertyEnumerator);
    proto->Set(v8::String::NewSymbol("key"), v8::FunctionTemplate::New(StorageV8Internal::keyCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::NewSymbol("getItem"), v8::FunctionTemplate::New(StorageV8Internal::getItemCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::NewSymbol("setItem"), v8::FunctionTemplate::New(StorageV8Internal::setItemCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::NewSymbol("removeItem"), v8::FunctionTemplate::New(StorageV8Internal::removeItemCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    proto->Set(v8::String::NewSymbol("clear"), v8::FunctionTemplate::New(StorageV8Internal::clearCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Storage::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Storage::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8StorageTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Storage::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Storage::createWrapper(PassRefPtr<Storage> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8Storage::derefObject(void* object)
{
    static_cast<Storage*>(object)->deref();
}

} // namespace WebCore
