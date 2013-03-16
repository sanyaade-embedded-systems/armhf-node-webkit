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
#include "V8HTMLTableSectionElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8HTMLElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLTableSectionElement::info = { V8HTMLTableSectionElement::GetTemplate, V8HTMLTableSectionElement::derefObject, 0, 0, V8HTMLTableSectionElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLTableSectionElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::alignAttr, stringResource);
}

static v8::Handle<v8::Value> chAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::charAttr), info.GetIsolate());
}

static void chAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::charAttr, stringResource);
}

static v8::Handle<v8::Value> chOffAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::charoffAttr), info.GetIsolate());
}

static void chOffAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::charoffAttr, stringResource);
}

static v8::Handle<v8::Value> vAlignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::valignAttr), info.GetIsolate());
}

static void vAlignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::valignAttr, stringResource);
}

static v8::Handle<v8::Value> rowsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(info.Holder());
    return toV8Fast(imp->rows(), info, imp);
}

static v8::Handle<v8::Value> insertRowCallback(const v8::Arguments& args)
{
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(int, index, toInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<HTMLElement> result = imp->insertRow(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(result.release(), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> deleteRowCallback(const v8::Arguments& args)
{
    HTMLTableSectionElement* imp = V8HTMLTableSectionElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(int, index, toInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    imp->deleteRow(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace HTMLTableSectionElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLTableSectionElementAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableSectionElementV8Internal::alignAttrGetter, HTMLTableSectionElementV8Internal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ch' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ch", HTMLTableSectionElementV8Internal::chAttrGetter, HTMLTableSectionElementV8Internal::chAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'chOff' (Type: 'attribute' ExtAttr: 'Reflect')
    {"chOff", HTMLTableSectionElementV8Internal::chOffAttrGetter, HTMLTableSectionElementV8Internal::chOffAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vAlign' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vAlign", HTMLTableSectionElementV8Internal::vAlignAttrGetter, HTMLTableSectionElementV8Internal::vAlignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rows' (Type: 'readonly attribute' ExtAttr: '')
    {"rows", HTMLTableSectionElementV8Internal::rowsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8HTMLTableSectionElementCallbacks[] = {
    {"insertRow", HTMLTableSectionElementV8Internal::insertRowCallback},
    {"deleteRow", HTMLTableSectionElementV8Internal::deleteRowCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableSectionElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLTableSectionElement", V8HTMLElement::GetTemplate(), V8HTMLTableSectionElement::internalFieldCount,
        V8HTMLTableSectionElementAttrs, WTF_ARRAY_LENGTH(V8HTMLTableSectionElementAttrs),
        V8HTMLTableSectionElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLTableSectionElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLTableSectionElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLTableSectionElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLTableSectionElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableSectionElement::createWrapper(PassRefPtr<HTMLTableSectionElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLTableSectionElement::derefObject(void* object)
{
    static_cast<HTMLTableSectionElement*>(object)->deref();
}

} // namespace WebCore
