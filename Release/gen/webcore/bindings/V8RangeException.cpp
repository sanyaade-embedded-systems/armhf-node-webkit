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
#include "V8RangeException.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8RangeException::info = { V8RangeException::GetTemplate, V8RangeException::derefObject, 0, 0, V8RangeException::installPerContextPrototypeProperties, 0, WrapperTypeErrorPrototype };

namespace RangeExceptionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RangeException* imp = V8RangeException::toNative(info.Holder());
    return v8Integer(imp->code(), info.GetIsolate());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RangeException* imp = V8RangeException::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> messageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RangeException* imp = V8RangeException::toNative(info.Holder());
    return v8String(imp->message(), info.GetIsolate());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    RangeException* imp = V8RangeException::toNative(args.Holder());
    return v8String(imp->toString(), args.GetIsolate());
}

} // namespace RangeExceptionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8RangeExceptionAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", RangeExceptionV8Internal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", RangeExceptionV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'message' (Type: 'readonly attribute' ExtAttr: '')
    {"message", RangeExceptionV8Internal::messageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedConstant V8RangeExceptionConsts[] = {
    {"BAD_BOUNDARYPOINTS_ERR", static_cast<signed int>(1)},
    {"INVALID_NODE_TYPE_ERR", static_cast<signed int>(2)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8RangeExceptionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "RangeException", v8::Persistent<v8::FunctionTemplate>(), V8RangeException::internalFieldCount,
        V8RangeExceptionAttrs, WTF_ARRAY_LENGTH(V8RangeExceptionAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    proto->Set(v8::String::NewSymbol("toString"), v8::FunctionTemplate::New(RangeExceptionV8Internal::toStringCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8RangeExceptionConsts, WTF_ARRAY_LENGTH(V8RangeExceptionConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8RangeException::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8RangeException::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8RangeExceptionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8RangeException::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8RangeException::createWrapper(PassRefPtr<RangeException> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8RangeException::derefObject(void* object)
{
    static_cast<RangeException*>(object)->deref();
}

} // namespace WebCore
