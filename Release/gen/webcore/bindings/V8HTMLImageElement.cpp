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
#include "V8HTMLImageElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLImageElement::info = { V8HTMLImageElement::GetTemplate, V8HTMLImageElement::derefObject, 0, 0, V8HTMLImageElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLImageElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->getNameAttribute(), info.GetIsolate());
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::nameAttr, stringResource);
}

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

static v8::Handle<v8::Value> altAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::altAttr), info.GetIsolate());
}

static void altAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::altAttr, stringResource);
}

static v8::Handle<v8::Value> borderAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::borderAttr), info.GetIsolate());
}

static void borderAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::borderAttr, stringResource);
}

static v8::Handle<v8::Value> crossOriginAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::crossoriginAttr), info.GetIsolate());
}

static void crossOriginAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::crossoriginAttr, stringResource);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->height(), info.GetIsolate());
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setHeight(v);
    return;
}

static v8::Handle<v8::Value> hspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr), info.GetIsolate());
}

static void hspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::hspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> isMapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::ismapAttr), info.GetIsolate());
}

static void isMapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::ismapAttr, v);
    return;
}

static v8::Handle<v8::Value> longDescAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::longdescAttr), info.GetIsolate());
}

static void longDescAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::longdescAttr, stringResource);
}

static v8::Handle<v8::Value> srcAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::srcAttr), info.GetIsolate());
}

static void srcAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::srcAttr, stringResource);
}

static v8::Handle<v8::Value> useMapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::usemapAttr), info.GetIsolate());
}

static void useMapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::usemapAttr, stringResource);
}

static v8::Handle<v8::Value> vspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr), info.GetIsolate());
}

static void vspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::vspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->width(), info.GetIsolate());
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setWidth(v);
    return;
}

static v8::Handle<v8::Value> completeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Boolean(imp->complete(), info.GetIsolate());
}

static v8::Handle<v8::Value> lowsrcAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::lowsrcAttr), info.GetIsolate());
}

static void lowsrcAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::lowsrcAttr, stringResource);
}

static v8::Handle<v8::Value> naturalHeightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->naturalHeight(), info.GetIsolate());
}

static v8::Handle<v8::Value> naturalWidthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->naturalWidth(), info.GetIsolate());
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->x(), info.GetIsolate());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLImageElement* imp = V8HTMLImageElement::toNative(info.Holder());
    return v8Integer(imp->y(), info.GetIsolate());
}

} // namespace HTMLImageElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLImageElementAttrs[] = {
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'Reflect')
    {"name", HTMLImageElementV8Internal::nameAttrGetter, HTMLImageElementV8Internal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLImageElementV8Internal::alignAttrGetter, HTMLImageElementV8Internal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'alt' (Type: 'attribute' ExtAttr: 'Reflect')
    {"alt", HTMLImageElementV8Internal::altAttrGetter, HTMLImageElementV8Internal::altAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'border' (Type: 'attribute' ExtAttr: 'Reflect')
    {"border", HTMLImageElementV8Internal::borderAttrGetter, HTMLImageElementV8Internal::borderAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'crossOrigin' (Type: 'attribute' ExtAttr: 'Reflect')
    {"crossOrigin", HTMLImageElementV8Internal::crossOriginAttrGetter, HTMLImageElementV8Internal::crossOriginAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: '')
    {"height", HTMLImageElementV8Internal::heightAttrGetter, HTMLImageElementV8Internal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hspace", HTMLImageElementV8Internal::hspaceAttrGetter, HTMLImageElementV8Internal::hspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'isMap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"isMap", HTMLImageElementV8Internal::isMapAttrGetter, HTMLImageElementV8Internal::isMapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'longDesc' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"longDesc", HTMLImageElementV8Internal::longDescAttrGetter, HTMLImageElementV8Internal::longDescAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'src' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"src", HTMLImageElementV8Internal::srcAttrGetter, HTMLImageElementV8Internal::srcAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'useMap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"useMap", HTMLImageElementV8Internal::useMapAttrGetter, HTMLImageElementV8Internal::useMapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vspace", HTMLImageElementV8Internal::vspaceAttrGetter, HTMLImageElementV8Internal::vspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: '')
    {"width", HTMLImageElementV8Internal::widthAttrGetter, HTMLImageElementV8Internal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'complete' (Type: 'readonly attribute' ExtAttr: '')
    {"complete", HTMLImageElementV8Internal::completeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lowsrc' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"lowsrc", HTMLImageElementV8Internal::lowsrcAttrGetter, HTMLImageElementV8Internal::lowsrcAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'naturalHeight' (Type: 'readonly attribute' ExtAttr: '')
    {"naturalHeight", HTMLImageElementV8Internal::naturalHeightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'naturalWidth' (Type: 'readonly attribute' ExtAttr: '')
    {"naturalWidth", HTMLImageElementV8Internal::naturalWidthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", HTMLImageElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", HTMLImageElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLImageElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLImageElement", V8HTMLElement::GetTemplate(), V8HTMLImageElement::internalFieldCount,
        V8HTMLImageElementAttrs, WTF_ARRAY_LENGTH(V8HTMLImageElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLImageElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLImageElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLImageElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLImageElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLImageElement::createWrapper(PassRefPtr<HTMLImageElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLImageElement::derefObject(void* object)
{
    static_cast<HTMLImageElement*>(object)->deref();
}

} // namespace WebCore
