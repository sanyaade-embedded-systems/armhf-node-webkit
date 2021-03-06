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
#include "V8SVGFilterElement.h"

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "StylePropertySet.h"
#include "V8Binding.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedInteger.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGFilterElement::info = { V8SVGFilterElement::GetTemplate, V8SVGFilterElement::derefObject, 0, 0, V8SVGFilterElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGFilterElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> filterUnitsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(static_pointer_cast<SVGAnimatedEnumeration>(imp->filterUnitsAnimated()), info, imp);
}

static v8::Handle<v8::Value> primitiveUnitsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(static_pointer_cast<SVGAnimatedEnumeration>(imp->primitiveUnitsAnimated()), info, imp);
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->widthAnimated(), info, imp);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->heightAnimated(), info, imp);
}

static v8::Handle<v8::Value> filterResXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->filterResXAnimated(), info, imp);
}

static v8::Handle<v8::Value> filterResYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->filterResYAnimated(), info, imp);
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->hrefAnimated(), info, imp);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return v8String(imp->xmllang(), info.GetIsolate());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return v8String(imp->xmlspace(), info.GetIsolate());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->externalResourcesRequiredAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> setFilterResCallback(const v8::Arguments& args)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(args.Holder());
    V8TRYCATCH(unsigned, filterResX, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    V8TRYCATCH(unsigned, filterResY, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    imp->setFilterRes(filterResX, filterResY);
    return v8Undefined();
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGFilterElement* imp = V8SVGFilterElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

} // namespace SVGFilterElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGFilterElementAttrs[] = {
    // Attribute 'filterUnits' (Type: 'readonly attribute' ExtAttr: '')
    {"filterUnits", SVGFilterElementV8Internal::filterUnitsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'primitiveUnits' (Type: 'readonly attribute' ExtAttr: '')
    {"primitiveUnits", SVGFilterElementV8Internal::primitiveUnitsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFilterElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFilterElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFilterElementV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFilterElementV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'filterResX' (Type: 'readonly attribute' ExtAttr: '')
    {"filterResX", SVGFilterElementV8Internal::filterResXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'filterResY' (Type: 'readonly attribute' ExtAttr: '')
    {"filterResY", SVGFilterElementV8Internal::filterResYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: '')
    {"href", SVGFilterElementV8Internal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGFilterElementV8Internal::xmllangAttrGetter, SVGFilterElementV8Internal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGFilterElementV8Internal::xmlspaceAttrGetter, SVGFilterElementV8Internal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGFilterElementV8Internal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFilterElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFilterElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGFilterElementCallbacks[] = {
    {"setFilterRes", SVGFilterElementV8Internal::setFilterResCallback},
    {"getPresentationAttribute", SVGFilterElementV8Internal::getPresentationAttributeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFilterElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGFilterElement", V8SVGElement::GetTemplate(), V8SVGFilterElement::internalFieldCount,
        V8SVGFilterElementAttrs, WTF_ARRAY_LENGTH(V8SVGFilterElementAttrs),
        V8SVGFilterElementCallbacks, WTF_ARRAY_LENGTH(V8SVGFilterElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFilterElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFilterElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFilterElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFilterElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFilterElement::createWrapper(PassRefPtr<SVGFilterElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGFilterElement::derefObject(void* object)
{
    static_cast<SVGFilterElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)
