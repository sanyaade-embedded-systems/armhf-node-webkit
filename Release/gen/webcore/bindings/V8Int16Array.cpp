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
#include "V8Int16Array.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8ArrayBufferView.h"
#include "V8ArrayBufferViewCustom.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/GetPtr.h>
#include <wtf/Int16Array.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8Int16Array::info = { V8Int16Array::GetTemplate, V8Int16Array::derefObject, 0, 0, V8Int16Array::installPerContextPrototypeProperties, &V8ArrayBufferView::info, WrapperTypeObjectPrototype };

namespace Int16ArrayV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Int16Array* imp = V8Int16Array::toNative(info.Holder());
    return v8UnsignedInteger(imp->length(), info.GetIsolate());
}

static v8::Handle<v8::Value> subarrayCallback(const v8::Arguments& args)
{
    Int16Array* imp = V8Int16Array::toNative(args.Holder());
    V8TRYCATCH(int, start, toInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (args.Length() <= 1) {
        return toV8(imp->subarray(start), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(int, end, toInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    return toV8(imp->subarray(start, end), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> setCallback(const v8::Arguments& args)
{
    return setWebGLArrayHelper<Int16Array, V8Int16Array>(args);
}

} // namespace Int16ArrayV8Internal

v8::Handle<v8::Object> wrap(Int16Array* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    v8::Handle<v8::Object> wrapper = V8Int16Array::createWrapper(impl, creationContext, isolate);
    if (!wrapper.IsEmpty())
        wrapper->SetIndexedPropertiesToExternalArrayData(impl->baseAddress(), v8::kExternalShortArray, impl->length());
    return wrapper;
}

static const V8DOMConfiguration::BatchedAttribute V8Int16ArrayAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", Int16ArrayV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8Int16ArrayCallbacks[] = {
    {"subarray", Int16ArrayV8Internal::subarrayCallback},
    {"set", Int16ArrayV8Internal::setCallback},
};

static const V8DOMConfiguration::BatchedConstant V8Int16ArrayConsts[] = {
    {"BYTES_PER_ELEMENT", static_cast<signed int>(2)},
};

v8::Handle<v8::Value> V8Int16Array::constructorCallback(const v8::Arguments& args)
{
    return constructWebGLArray<Int16Array, V8Int16Array, short>(args, &info, v8::kExternalShortArray);
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8Int16ArrayTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Int16Array", V8ArrayBufferView::GetTemplate(), V8Int16Array::internalFieldCount,
        V8Int16ArrayAttrs, WTF_ARRAY_LENGTH(V8Int16ArrayAttrs),
        V8Int16ArrayCallbacks, WTF_ARRAY_LENGTH(V8Int16ArrayCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8Int16Array::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8Int16ArrayConsts, WTF_ARRAY_LENGTH(V8Int16ArrayConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Int16Array::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Int16Array::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8Int16ArrayTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Int16Array::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Int16Array::createWrapper(PassRefPtr<Int16Array> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<ArrayBufferView*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8Int16Array::derefObject(void* object)
{
    static_cast<Int16Array*>(object)->deref();
}

} // namespace WebCore
