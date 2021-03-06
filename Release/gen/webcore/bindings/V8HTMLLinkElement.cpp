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
#include "V8HTMLLinkElement.h"

#include "BindingState.h"
#include "CSSImportRule.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8StyleSheet.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLLinkElement::info = { V8HTMLLinkElement::GetTemplate, V8HTMLLinkElement::derefObject, 0, 0, V8HTMLLinkElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLLinkElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> disabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLLinkElement* imp = V8HTMLLinkElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::disabledAttr), info.GetIsolate());
}

static void disabledAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLLinkElement* imp = V8HTMLLinkElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, v);
    return;
}

static v8::Handle<v8::Value> charsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::charsetAttr), info.GetIsolate());
}

static void charsetAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::charsetAttr, stringResource);
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLLinkElement* imp = V8HTMLLinkElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::hrefAttr), info.GetIsolate());
}

static void hrefAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::hrefAttr, stringResource);
}

static v8::Handle<v8::Value> hreflangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::hreflangAttr), info.GetIsolate());
}

static void hreflangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::hreflangAttr, stringResource);
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::mediaAttr), info.GetIsolate());
}

static void mediaAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::mediaAttr, stringResource);
}

static v8::Handle<v8::Value> relAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::relAttr), info.GetIsolate());
}

static void relAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::relAttr, stringResource);
}

static v8::Handle<v8::Value> revAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::revAttr), info.GetIsolate());
}

static void revAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::revAttr, stringResource);
}

static v8::Handle<v8::Value> targetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::targetAttr), info.GetIsolate());
}

static void targetAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::targetAttr, stringResource);
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::typeAttr), info.GetIsolate());
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::typeAttr, stringResource);
}

static v8::Handle<v8::Value> sheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLLinkElement* imp = V8HTMLLinkElement::toNative(info.Holder());
    return toV8Fast(imp->sheet(), info, imp);
}

} // namespace HTMLLinkElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLLinkElementAttrs[] = {
    // Attribute 'disabled' (Type: 'attribute' ExtAttr: 'Reflect')
    {"disabled", HTMLLinkElementV8Internal::disabledAttrGetter, HTMLLinkElementV8Internal::disabledAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'charset' (Type: 'attribute' ExtAttr: 'Reflect')
    {"charset", HTMLLinkElementV8Internal::charsetAttrGetter, HTMLLinkElementV8Internal::charsetAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"href", HTMLLinkElementV8Internal::hrefAttrGetter, HTMLLinkElementV8Internal::hrefAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hreflang' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hreflang", HTMLLinkElementV8Internal::hreflangAttrGetter, HTMLLinkElementV8Internal::hreflangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'attribute' ExtAttr: 'Reflect')
    {"media", HTMLLinkElementV8Internal::mediaAttrGetter, HTMLLinkElementV8Internal::mediaAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rel' (Type: 'attribute' ExtAttr: 'Reflect')
    {"rel", HTMLLinkElementV8Internal::relAttrGetter, HTMLLinkElementV8Internal::relAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rev' (Type: 'attribute' ExtAttr: 'Reflect')
    {"rev", HTMLLinkElementV8Internal::revAttrGetter, HTMLLinkElementV8Internal::revAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sizes' (Type: 'attribute' ExtAttr: 'Custom')
    {"sizes", V8HTMLLinkElement::sizesAccessorGetter, V8HTMLLinkElement::sizesAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'target' (Type: 'attribute' ExtAttr: 'Reflect')
    {"target", HTMLLinkElementV8Internal::targetAttrGetter, HTMLLinkElementV8Internal::targetAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLLinkElementV8Internal::typeAttrGetter, HTMLLinkElementV8Internal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sheet' (Type: 'readonly attribute' ExtAttr: '')
    {"sheet", HTMLLinkElementV8Internal::sheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLLinkElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLLinkElement", V8HTMLElement::GetTemplate(), V8HTMLLinkElement::internalFieldCount,
        V8HTMLLinkElementAttrs, WTF_ARRAY_LENGTH(V8HTMLLinkElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLLinkElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLLinkElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLLinkElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLLinkElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLLinkElement::createWrapper(PassRefPtr<HTMLLinkElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLLinkElement::derefObject(void* object)
{
    static_cast<HTMLLinkElement*>(object)->deref();
}

} // namespace WebCore
