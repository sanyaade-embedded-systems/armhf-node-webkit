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
#include "V8HTMLTableCellElement.h"

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

WrapperTypeInfo V8HTMLTableCellElement::info = { V8HTMLTableCellElement::GetTemplate, V8HTMLTableCellElement::derefObject, 0, 0, V8HTMLTableCellElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLTableCellElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> cellIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    return v8Integer(imp->cellIndex(), info.GetIsolate());
}

static v8::Handle<v8::Value> abbrAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::abbrAttr), info.GetIsolate());
}

static void abbrAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::abbrAttr, stringResource);
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

static v8::Handle<v8::Value> axisAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::axisAttr), info.GetIsolate());
}

static void axisAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::axisAttr, stringResource);
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::bgcolorAttr), info.GetIsolate());
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::bgcolorAttr, stringResource);
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

static v8::Handle<v8::Value> colSpanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    return v8Integer(imp->colSpan(), info.GetIsolate());
}

static void colSpanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setColSpan(v);
    return;
}

static v8::Handle<v8::Value> headersAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::headersAttr), info.GetIsolate());
}

static void headersAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::headersAttr, stringResource);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::heightAttr), info.GetIsolate());
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::heightAttr, stringResource);
}

static v8::Handle<v8::Value> noWrapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::nowrapAttr), info.GetIsolate());
}

static void noWrapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::nowrapAttr, v);
    return;
}

static v8::Handle<v8::Value> rowSpanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    return v8Integer(imp->rowSpan(), info.GetIsolate());
}

static void rowSpanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLTableCellElement* imp = V8HTMLTableCellElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setRowSpan(v);
    return;
}

static v8::Handle<v8::Value> scopeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::scopeAttr), info.GetIsolate());
}

static void scopeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::scopeAttr, stringResource);
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

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::widthAttr, stringResource);
}

} // namespace HTMLTableCellElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLTableCellElementAttrs[] = {
    // Attribute 'cellIndex' (Type: 'readonly attribute' ExtAttr: '')
    {"cellIndex", HTMLTableCellElementV8Internal::cellIndexAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'abbr' (Type: 'attribute' ExtAttr: 'Reflect')
    {"abbr", HTMLTableCellElementV8Internal::abbrAttrGetter, HTMLTableCellElementV8Internal::abbrAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLTableCellElementV8Internal::alignAttrGetter, HTMLTableCellElementV8Internal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'axis' (Type: 'attribute' ExtAttr: 'Reflect')
    {"axis", HTMLTableCellElementV8Internal::axisAttrGetter, HTMLTableCellElementV8Internal::axisAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'Reflect')
    {"bgColor", HTMLTableCellElementV8Internal::bgColorAttrGetter, HTMLTableCellElementV8Internal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ch' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ch", HTMLTableCellElementV8Internal::chAttrGetter, HTMLTableCellElementV8Internal::chAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'chOff' (Type: 'attribute' ExtAttr: 'Reflect')
    {"chOff", HTMLTableCellElementV8Internal::chOffAttrGetter, HTMLTableCellElementV8Internal::chOffAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'colSpan' (Type: 'attribute' ExtAttr: '')
    {"colSpan", HTMLTableCellElementV8Internal::colSpanAttrGetter, HTMLTableCellElementV8Internal::colSpanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'headers' (Type: 'attribute' ExtAttr: 'Reflect')
    {"headers", HTMLTableCellElementV8Internal::headersAttrGetter, HTMLTableCellElementV8Internal::headersAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: 'Reflect')
    {"height", HTMLTableCellElementV8Internal::heightAttrGetter, HTMLTableCellElementV8Internal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'noWrap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"noWrap", HTMLTableCellElementV8Internal::noWrapAttrGetter, HTMLTableCellElementV8Internal::noWrapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rowSpan' (Type: 'attribute' ExtAttr: '')
    {"rowSpan", HTMLTableCellElementV8Internal::rowSpanAttrGetter, HTMLTableCellElementV8Internal::rowSpanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scope' (Type: 'attribute' ExtAttr: 'Reflect')
    {"scope", HTMLTableCellElementV8Internal::scopeAttrGetter, HTMLTableCellElementV8Internal::scopeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vAlign' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vAlign", HTMLTableCellElementV8Internal::vAlignAttrGetter, HTMLTableCellElementV8Internal::vAlignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLTableCellElementV8Internal::widthAttrGetter, HTMLTableCellElementV8Internal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLTableCellElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLTableCellElement", V8HTMLElement::GetTemplate(), V8HTMLTableCellElement::internalFieldCount,
        V8HTMLTableCellElementAttrs, WTF_ARRAY_LENGTH(V8HTMLTableCellElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLTableCellElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLTableCellElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLTableCellElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLTableCellElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLTableCellElement::createWrapper(PassRefPtr<HTMLTableCellElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLTableCellElement::derefObject(void* object)
{
    static_cast<HTMLTableCellElement*>(object)->deref();
}

} // namespace WebCore
