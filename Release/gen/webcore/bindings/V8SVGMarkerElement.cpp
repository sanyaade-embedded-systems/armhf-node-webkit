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
#include "V8SVGMarkerElement.h"

#if ENABLE(SVG)

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
#include "V8SVGAngle.h"
#include "V8SVGAnimatedAngle.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedPreserveAspectRatio.h"
#include "V8SVGAnimatedRect.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGMarkerElement::info = { V8SVGMarkerElement::GetTemplate, V8SVGMarkerElement::derefObject, 0, 0, V8SVGMarkerElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGMarkerElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> refXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->refXAnimated(), info, imp);
}

static v8::Handle<v8::Value> refYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->refYAnimated(), info, imp);
}

static v8::Handle<v8::Value> markerUnitsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(static_pointer_cast<SVGAnimatedEnumeration>(imp->markerUnitsAnimated()), info, imp);
}

static v8::Handle<v8::Value> markerWidthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->markerWidthAnimated(), info, imp);
}

static v8::Handle<v8::Value> markerHeightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->markerHeightAnimated(), info, imp);
}

static v8::Handle<v8::Value> orientTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(static_pointer_cast<SVGAnimatedEnumeration>(imp->orientTypeAnimated()), info, imp);
}

static v8::Handle<v8::Value> orientAngleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->orientAngleAnimated(), info, imp);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return v8String(imp->xmllang(), info.GetIsolate());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return v8String(imp->xmlspace(), info.GetIsolate());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->externalResourcesRequiredAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> viewBoxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->viewBoxAnimated(), info, imp);
}

static v8::Handle<v8::Value> preserveAspectRatioAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(info.Holder());
    return toV8Fast(imp->preserveAspectRatioAnimated(), info, imp);
}

static v8::Handle<v8::Value> setOrientToAutoCallback(const v8::Arguments& args)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(args.Holder());
    imp->setOrientToAuto();
    return v8Undefined();
}

static v8::Handle<v8::Value> setOrientToAngleCallback(const v8::Arguments& args)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(args.Holder());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGAngle> >, angle, V8SVGAngle::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGAngle::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (!angle)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    imp->setOrientToAngle(angle->propertyReference());
    return v8Undefined();
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGMarkerElement* imp = V8SVGMarkerElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

} // namespace SVGMarkerElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGMarkerElementAttrs[] = {
    // Attribute 'refX' (Type: 'readonly attribute' ExtAttr: '')
    {"refX", SVGMarkerElementV8Internal::refXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'refY' (Type: 'readonly attribute' ExtAttr: '')
    {"refY", SVGMarkerElementV8Internal::refYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'markerUnits' (Type: 'readonly attribute' ExtAttr: '')
    {"markerUnits", SVGMarkerElementV8Internal::markerUnitsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'markerWidth' (Type: 'readonly attribute' ExtAttr: '')
    {"markerWidth", SVGMarkerElementV8Internal::markerWidthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'markerHeight' (Type: 'readonly attribute' ExtAttr: '')
    {"markerHeight", SVGMarkerElementV8Internal::markerHeightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'orientType' (Type: 'readonly attribute' ExtAttr: '')
    {"orientType", SVGMarkerElementV8Internal::orientTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'orientAngle' (Type: 'readonly attribute' ExtAttr: '')
    {"orientAngle", SVGMarkerElementV8Internal::orientAngleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGMarkerElementV8Internal::xmllangAttrGetter, SVGMarkerElementV8Internal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGMarkerElementV8Internal::xmlspaceAttrGetter, SVGMarkerElementV8Internal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGMarkerElementV8Internal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGMarkerElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGMarkerElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'viewBox' (Type: 'readonly attribute' ExtAttr: '')
    {"viewBox", SVGMarkerElementV8Internal::viewBoxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'preserveAspectRatio' (Type: 'readonly attribute' ExtAttr: '')
    {"preserveAspectRatio", SVGMarkerElementV8Internal::preserveAspectRatioAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGMarkerElementCallbacks[] = {
    {"setOrientToAuto", SVGMarkerElementV8Internal::setOrientToAutoCallback},
    {"getPresentationAttribute", SVGMarkerElementV8Internal::getPresentationAttributeCallback},
};

static const V8DOMConfiguration::BatchedConstant V8SVGMarkerElementConsts[] = {
    {"SVG_MARKERUNITS_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_MARKERUNITS_USERSPACEONUSE", static_cast<signed int>(1)},
    {"SVG_MARKERUNITS_STROKEWIDTH", static_cast<signed int>(2)},
    {"SVG_MARKER_ORIENT_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_MARKER_ORIENT_AUTO", static_cast<signed int>(1)},
    {"SVG_MARKER_ORIENT_ANGLE", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == SVGMarkerElement::SVG_MARKERUNITS_UNKNOWN, SVGMarkerElementEnumSVG_MARKERUNITS_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGMarkerElement::SVG_MARKERUNITS_USERSPACEONUSE, SVGMarkerElementEnumSVG_MARKERUNITS_USERSPACEONUSEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGMarkerElement::SVG_MARKERUNITS_STROKEWIDTH, SVGMarkerElementEnumSVG_MARKERUNITS_STROKEWIDTHIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0 == SVGMarkerElement::SVG_MARKER_ORIENT_UNKNOWN, SVGMarkerElementEnumSVG_MARKER_ORIENT_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGMarkerElement::SVG_MARKER_ORIENT_AUTO, SVGMarkerElementEnumSVG_MARKER_ORIENT_AUTOIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGMarkerElement::SVG_MARKER_ORIENT_ANGLE, SVGMarkerElementEnumSVG_MARKER_ORIENT_ANGLEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGMarkerElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGMarkerElement", V8SVGElement::GetTemplate(), V8SVGMarkerElement::internalFieldCount,
        V8SVGMarkerElementAttrs, WTF_ARRAY_LENGTH(V8SVGMarkerElementAttrs),
        V8SVGMarkerElementCallbacks, WTF_ARRAY_LENGTH(V8SVGMarkerElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'setOrientToAngle'
    const int setOrientToAngleArgc = 1;
    v8::Handle<v8::FunctionTemplate> setOrientToAngleArgv[setOrientToAngleArgc] = { V8SVGAngle::GetRawTemplate() };
    v8::Handle<v8::Signature> setOrientToAngleSignature = v8::Signature::New(desc, setOrientToAngleArgc, setOrientToAngleArgv);
    proto->Set(v8::String::NewSymbol("setOrientToAngle"), v8::FunctionTemplate::New(SVGMarkerElementV8Internal::setOrientToAngleCallback, v8Undefined(), setOrientToAngleSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8SVGMarkerElementConsts, WTF_ARRAY_LENGTH(V8SVGMarkerElementConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGMarkerElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGMarkerElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGMarkerElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGMarkerElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGMarkerElement::createWrapper(PassRefPtr<SVGMarkerElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGMarkerElement::derefObject(void* object)
{
    static_cast<SVGMarkerElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
