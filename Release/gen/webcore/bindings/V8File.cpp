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
#include "V8File.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Blob.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8File::info = { V8File::GetTemplate, V8File::derefObject, 0, 0, V8File::installPerContextPrototypeProperties, &V8Blob::info, WrapperTypeObjectPrototype };

namespace FileV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    File* imp = V8File::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> pathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    File* imp = V8File::toNative(info.Holder());
    return v8String(imp->path(), info.GetIsolate());
}

static v8::Handle<v8::Value> lastModifiedDateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    File* imp = V8File::toNative(info.Holder());
    return v8DateOrNull(imp->lastModifiedDate(), info.GetIsolate());
}

static v8::Handle<v8::Value> webkitRelativePathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    File* imp = V8File::toNative(info.Holder());
    return v8String(imp->webkitRelativePath(), info.GetIsolate());
}

} // namespace FileV8Internal

static const V8DOMConfiguration::BatchedAttribute V8FileAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", FileV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'path' (Type: 'readonly attribute' ExtAttr: '')
    {"path", FileV8Internal::pathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lastModifiedDate' (Type: 'readonly attribute' ExtAttr: '')
    {"lastModifiedDate", FileV8Internal::lastModifiedDateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'webkitRelativePath' (Type: 'readonly attribute' ExtAttr: '')
    {"webkitRelativePath", FileV8Internal::webkitRelativePathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8FileTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "File", V8Blob::GetTemplate(), V8File::internalFieldCount,
        V8FileAttrs, WTF_ARRAY_LENGTH(V8FileAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8File::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8File::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8FileTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8File::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8File::createWrapper(PassRefPtr<File> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Blob*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8File::derefObject(void* object)
{
    static_cast<File*>(object)->deref();
}

} // namespace WebCore
