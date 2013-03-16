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
#include "V8DocumentType.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8NamedNodeMap.h"
#include "V8Node.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DocumentType::info = { V8DocumentType::GetTemplate, V8DocumentType::derefObject, 0, 0, V8DocumentType::installPerContextPrototypeProperties, &V8Node::info, WrapperTypeObjectPrototype };

namespace DocumentTypeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> entitiesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return toV8Fast(imp->entities(), info, imp);
}

static v8::Handle<v8::Value> notationsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return toV8Fast(imp->notations(), info, imp);
}

static v8::Handle<v8::Value> publicIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->publicId(), info.GetIsolate());
}

static v8::Handle<v8::Value> systemIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->systemId(), info.GetIsolate());
}

static v8::Handle<v8::Value> internalSubsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DocumentType* imp = V8DocumentType::toNative(info.Holder());
    return v8StringOrNull(imp->internalSubset(), info.GetIsolate());
}

static v8::Handle<v8::Value> removeCallback(const v8::Arguments& args)
{
    DocumentType* imp = V8DocumentType::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->remove(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace DocumentTypeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8DocumentTypeAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", DocumentTypeV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'entities' (Type: 'readonly attribute' ExtAttr: '')
    {"entities", DocumentTypeV8Internal::entitiesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'notations' (Type: 'readonly attribute' ExtAttr: '')
    {"notations", DocumentTypeV8Internal::notationsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'publicId' (Type: 'readonly attribute' ExtAttr: 'TreatReturnedNullStringAs')
    {"publicId", DocumentTypeV8Internal::publicIdAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemId' (Type: 'readonly attribute' ExtAttr: 'TreatReturnedNullStringAs')
    {"systemId", DocumentTypeV8Internal::systemIdAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'internalSubset' (Type: 'readonly attribute' ExtAttr: 'TreatReturnedNullStringAs')
    {"internalSubset", DocumentTypeV8Internal::internalSubsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8DocumentTypeCallbacks[] = {
    {"remove", DocumentTypeV8Internal::removeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DocumentTypeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "DocumentType", V8Node::GetTemplate(), V8DocumentType::internalFieldCount,
        V8DocumentTypeAttrs, WTF_ARRAY_LENGTH(V8DocumentTypeAttrs),
        V8DocumentTypeCallbacks, WTF_ARRAY_LENGTH(V8DocumentTypeCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DocumentType::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DocumentType::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DocumentTypeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DocumentType::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DocumentType::createWrapper(PassRefPtr<DocumentType> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Node*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8DocumentType::derefObject(void* object)
{
    static_cast<DocumentType*>(object)->deref();
}

} // namespace WebCore