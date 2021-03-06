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
#include "V8DOMPlugin.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Collection.h"
#include "V8DOMMimeType.h"
#include "V8DOMWrapper.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DOMPlugin::info = { V8DOMPlugin::GetTemplate, V8DOMPlugin::derefObject, 0, 0, V8DOMPlugin::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace DOMPluginV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> filenameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(info.Holder());
    return v8String(imp->filename(), info.GetIsolate());
}

static v8::Handle<v8::Value> descriptionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(info.Holder());
    return v8String(imp->description(), info.GetIsolate());
}

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(info.Holder());
    return v8UnsignedInteger(imp->length(), info.GetIsolate());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(args.Holder());
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    return toV8(imp->item(index), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> namedItemCallback(const v8::Arguments& args)
{
    DOMPlugin* imp = V8DOMPlugin::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8(imp->namedItem(name), args.Holder(), args.GetIsolate());
}

} // namespace DOMPluginV8Internal

static const V8DOMConfiguration::BatchedAttribute V8DOMPluginAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", DOMPluginV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'filename' (Type: 'readonly attribute' ExtAttr: '')
    {"filename", DOMPluginV8Internal::filenameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'description' (Type: 'readonly attribute' ExtAttr: '')
    {"description", DOMPluginV8Internal::descriptionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", DOMPluginV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8DOMPluginCallbacks[] = {
    {"item", DOMPluginV8Internal::itemCallback},
    {"namedItem", DOMPluginV8Internal::namedItemCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMPluginTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Plugin", v8::Persistent<v8::FunctionTemplate>(), V8DOMPlugin::internalFieldCount,
        V8DOMPluginAttrs, WTF_ARRAY_LENGTH(V8DOMPluginAttrs),
        V8DOMPluginCallbacks, WTF_ARRAY_LENGTH(V8DOMPluginCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    setCollectionIndexedGetter<DOMPlugin, DOMMimeType>(desc);
    setCollectionNamedGetter<DOMPlugin, DOMMimeType>(desc);

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMPlugin::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DOMPlugin::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DOMPluginTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DOMPlugin::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMPlugin::createWrapper(PassRefPtr<DOMPlugin> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DOMPlugin::derefObject(void* object)
{
    static_cast<DOMPlugin*>(object)->deref();
}

} // namespace WebCore
