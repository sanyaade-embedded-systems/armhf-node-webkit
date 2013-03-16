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
#include "V8FileException.h"

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8FileException::info = { V8FileException::GetTemplate, V8FileException::derefObject, 0, 0, V8FileException::installPerContextPrototypeProperties, 0, WrapperTypeErrorPrototype };

namespace FileExceptionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileException* imp = V8FileException::toNative(info.Holder());
    return v8Integer(imp->code(), info.GetIsolate());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileException* imp = V8FileException::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> messageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    FileException* imp = V8FileException::toNative(info.Holder());
    return v8String(imp->message(), info.GetIsolate());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    FileException* imp = V8FileException::toNative(args.Holder());
    return v8String(imp->toString(), args.GetIsolate());
}

} // namespace FileExceptionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8FileExceptionAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", FileExceptionV8Internal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", FileExceptionV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'message' (Type: 'readonly attribute' ExtAttr: '')
    {"message", FileExceptionV8Internal::messageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedConstant V8FileExceptionConsts[] = {
    {"NOT_FOUND_ERR", static_cast<signed int>(1)},
    {"SECURITY_ERR", static_cast<signed int>(2)},
    {"ABORT_ERR", static_cast<signed int>(3)},
    {"NOT_READABLE_ERR", static_cast<signed int>(4)},
    {"ENCODING_ERR", static_cast<signed int>(5)},
    {"NO_MODIFICATION_ALLOWED_ERR", static_cast<signed int>(6)},
    {"INVALID_STATE_ERR", static_cast<signed int>(7)},
    {"SYNTAX_ERR", static_cast<signed int>(8)},
    {"INVALID_MODIFICATION_ERR", static_cast<signed int>(9)},
    {"QUOTA_EXCEEDED_ERR", static_cast<signed int>(10)},
    {"TYPE_MISMATCH_ERR", static_cast<signed int>(11)},
    {"PATH_EXISTS_ERR", static_cast<signed int>(12)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8FileExceptionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "FileException", v8::Persistent<v8::FunctionTemplate>(), V8FileException::internalFieldCount,
        V8FileExceptionAttrs, WTF_ARRAY_LENGTH(V8FileExceptionAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    proto->Set(v8::String::NewSymbol("toString"), v8::FunctionTemplate::New(FileExceptionV8Internal::toStringCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8FileExceptionConsts, WTF_ARRAY_LENGTH(V8FileExceptionConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8FileException::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8FileException::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8FileExceptionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8FileException::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8FileException::createWrapper(PassRefPtr<FileException> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8FileException::derefObject(void* object)
{
    static_cast<FileException*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)