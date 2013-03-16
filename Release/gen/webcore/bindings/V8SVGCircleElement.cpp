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
#include "V8SVGCircleElement.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPropertyTearOff.h"
#include "StylePropertySet.h"
#include "V8Binding.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGAnimatedTransformList.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGCircleElement::info = { V8SVGCircleElement::GetTemplate, V8SVGCircleElement::derefObject, 0, 0, V8SVGCircleElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGCircleElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> cxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->cxAnimated(), info, imp);
}

static v8::Handle<v8::Value> cyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->cyAnimated(), info, imp);
}

static v8::Handle<v8::Value> rAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->rAnimated(), info, imp);
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())), info, imp);
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())), info, imp);
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())), info, imp);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return v8String(imp->xmllang(), info.GetIsolate());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return v8String(imp->xmlspace(), info.GetIsolate());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->externalResourcesRequiredAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> transformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->transformAnimated(), info, imp);
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->nearestViewportElement(), info, imp);
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(info.Holder());
    return toV8Fast(imp->farthestViewportElement(), info, imp);
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, extension, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return v8Boolean(imp->hasExtension(extension), args.GetIsolate());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())), args, imp);
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())), args, imp);
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())), args, imp);
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    SVGCircleElement* imp = V8SVGCircleElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(SVGElement*, element, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    SVGMatrix result = imp->getTransformToElement(element, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(result)), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace SVGCircleElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGCircleElementAttrs[] = {
    // Attribute 'cx' (Type: 'readonly attribute' ExtAttr: '')
    {"cx", SVGCircleElementV8Internal::cxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cy' (Type: 'readonly attribute' ExtAttr: '')
    {"cy", SVGCircleElementV8Internal::cyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'r' (Type: 'readonly attribute' ExtAttr: '')
    {"r", SVGCircleElementV8Internal::rAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGCircleElementV8Internal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGCircleElementV8Internal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGCircleElementV8Internal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGCircleElementV8Internal::xmllangAttrGetter, SVGCircleElementV8Internal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGCircleElementV8Internal::xmlspaceAttrGetter, SVGCircleElementV8Internal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGCircleElementV8Internal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGCircleElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGCircleElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'transform' (Type: 'readonly attribute' ExtAttr: '')
    {"transform", SVGCircleElementV8Internal::transformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGCircleElementV8Internal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGCircleElementV8Internal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGCircleElementCallbacks[] = {
    {"hasExtension", SVGCircleElementV8Internal::hasExtensionCallback},
    {"getPresentationAttribute", SVGCircleElementV8Internal::getPresentationAttributeCallback},
    {"getBBox", SVGCircleElementV8Internal::getBBoxCallback},
    {"getCTM", SVGCircleElementV8Internal::getCTMCallback},
    {"getScreenCTM", SVGCircleElementV8Internal::getScreenCTMCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGCircleElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGCircleElement", V8SVGElement::GetTemplate(), V8SVGCircleElement::internalFieldCount,
        V8SVGCircleElementAttrs, WTF_ARRAY_LENGTH(V8SVGCircleElementAttrs),
        V8SVGCircleElementCallbacks, WTF_ARRAY_LENGTH(V8SVGCircleElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::NewSymbol("getTransformToElement"), v8::FunctionTemplate::New(SVGCircleElementV8Internal::getTransformToElementCallback, v8Undefined(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGCircleElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGCircleElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGCircleElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGCircleElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGCircleElement::createWrapper(PassRefPtr<SVGCircleElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGCircleElement::derefObject(void* object)
{
    static_cast<SVGCircleElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
