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
#include "V8SVGSVGElement.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPropertyTearOff.h"
#include "SVGStaticPropertyTearOff.h"
#include "StylePropertySet.h"
#include "V8Binding.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8Element.h"
#include "V8NodeList.h"
#include "V8SVGAngle.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedPreserveAspectRatio.h"
#include "V8SVGAnimatedRect.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include "V8SVGLength.h"
#include "V8SVGMatrix.h"
#include "V8SVGNumber.h"
#include "V8SVGPoint.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include "V8SVGTransform.h"
#include "V8SVGViewSpec.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGSVGElement::info = { V8SVGSVGElement::GetTemplate, V8SVGSVGElement::derefObject, 0, 0, V8SVGSVGElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGSVGElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->widthAnimated(), info, imp);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->heightAnimated(), info, imp);
}

static v8::Handle<v8::Value> contentScriptTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8String(imp->contentScriptType(), info.GetIsolate());
}

static void contentScriptTypeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setContentScriptType(v);
    return;
}

static v8::Handle<v8::Value> contentStyleTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8String(imp->contentStyleType(), info.GetIsolate());
}

static void contentStyleTypeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setContentStyleType(v);
    return;
}

static v8::Handle<v8::Value> viewportAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->viewport())), info, imp);
}

static v8::Handle<v8::Value> pixelUnitToMillimeterXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8::Number::New(imp->pixelUnitToMillimeterX());
}

static v8::Handle<v8::Value> pixelUnitToMillimeterYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8::Number::New(imp->pixelUnitToMillimeterY());
}

static v8::Handle<v8::Value> screenPixelToMillimeterXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8::Number::New(imp->screenPixelToMillimeterX());
}

static v8::Handle<v8::Value> screenPixelToMillimeterYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8::Number::New(imp->screenPixelToMillimeterY());
}

static v8::Handle<v8::Value> useCurrentViewAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8Boolean(imp->useCurrentView(), info.GetIsolate());
}

static v8::Handle<v8::Value> currentViewAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->currentView(), info, imp);
}

static v8::Handle<v8::Value> currentScaleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8::Number::New(imp->currentScale());
}

static void currentScaleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setCurrentScale(v);
    return;
}

static v8::Handle<v8::Value> currentTranslateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticPropertyTearOff<SVGSVGElement, FloatPoint>::create(imp, imp->currentTranslate(), &SVGSVGElement::updateCurrentTranslate)), info, imp);
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())), info, imp);
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())), info, imp);
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())), info, imp);
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8String(imp->xmllang(), info.GetIsolate());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8String(imp->xmlspace(), info.GetIsolate());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->externalResourcesRequiredAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->nearestViewportElement(), info, imp);
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->farthestViewportElement(), info, imp);
}

static v8::Handle<v8::Value> viewBoxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->viewBoxAnimated(), info, imp);
}

static v8::Handle<v8::Value> preserveAspectRatioAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return toV8Fast(imp->preserveAspectRatioAnimated(), info, imp);
}

static v8::Handle<v8::Value> zoomAndPanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    return v8Integer(imp->zoomAndPan(), info.GetIsolate());
}

static void zoomAndPanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(info.Holder());
    int v = toUInt32(value);
    imp->setZoomAndPan(v);
    return;
}

static v8::Handle<v8::Value> suspendRedrawCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(unsigned, maxWaitMilliseconds, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    return v8UnsignedInteger(imp->suspendRedraw(maxWaitMilliseconds), args.GetIsolate());
}

static v8::Handle<v8::Value> unsuspendRedrawCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(unsigned, suspendHandleId, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    imp->unsuspendRedraw(suspendHandleId);
    return v8Undefined();
}

static v8::Handle<v8::Value> unsuspendRedrawAllCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    imp->unsuspendRedrawAll();
    return v8Undefined();
}

static v8::Handle<v8::Value> forceRedrawCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    imp->forceRedraw();
    return v8Undefined();
}

static v8::Handle<v8::Value> pauseAnimationsCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    imp->pauseAnimations();
    return v8Undefined();
}

static v8::Handle<v8::Value> unpauseAnimationsCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    imp->unpauseAnimations();
    return v8Undefined();
}

static v8::Handle<v8::Value> animationsPausedCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return v8Boolean(imp->animationsPaused(), args.GetIsolate());
}

static v8::Handle<v8::Value> getCurrentTimeCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return v8::Number::New(imp->getCurrentTime());
}

static v8::Handle<v8::Value> setCurrentTimeCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(float, seconds, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->setCurrentTime(seconds);
    return v8Undefined();
}

static v8::Handle<v8::Value> getIntersectionListCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<FloatRect> >, rect, V8SVGRect::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGRect::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(SVGElement*, referenceElement, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined))) : 0);
    if (!rect)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    return toV8Fast(imp->getIntersectionList(rect->propertyReference(), referenceElement), args, imp);
}

static v8::Handle<v8::Value> getEnclosureListCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<FloatRect> >, rect, V8SVGRect::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGRect::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(SVGElement*, referenceElement, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined))) : 0);
    if (!rect)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    return toV8Fast(imp->getEnclosureList(rect->propertyReference(), referenceElement), args, imp);
}

static v8::Handle<v8::Value> checkIntersectionCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(SVGElement*, element, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<FloatRect> >, rect, V8SVGRect::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)) ? V8SVGRect::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined))) : 0);
    if (!rect)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    return v8Boolean(imp->checkIntersection(element, rect->propertyReference()), args.GetIsolate());
}

static v8::Handle<v8::Value> checkEnclosureCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(SVGElement*, element, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<FloatRect> >, rect, V8SVGRect::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)) ? V8SVGRect::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined))) : 0);
    if (!rect)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    return v8Boolean(imp->checkEnclosure(element, rect->propertyReference()), args.GetIsolate());
}

static v8::Handle<v8::Value> deselectAllCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    imp->deselectAll();
    return v8Undefined();
}

static v8::Handle<v8::Value> createSVGNumberCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<float>::create(imp->createSVGNumber())), args, imp);
}

static v8::Handle<v8::Value> createSVGLengthCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGLength>::create(imp->createSVGLength())), args, imp);
}

static v8::Handle<v8::Value> createSVGAngleCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGAngle>::create(imp->createSVGAngle())), args, imp);
}

static v8::Handle<v8::Value> createSVGPointCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->createSVGPoint())), args, imp);
}

static v8::Handle<v8::Value> createSVGMatrixCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->createSVGMatrix())), args, imp);
}

static v8::Handle<v8::Value> createSVGRectCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->createSVGRect())), args, imp);
}

static v8::Handle<v8::Value> createSVGTransformCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGTransform>::create(imp->createSVGTransform())), args, imp);
}

static v8::Handle<v8::Value> createSVGTransformFromMatrixCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGMatrix> >, matrix, V8SVGMatrix::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGMatrix::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (!matrix)
        return setDOMException(WebCore::TYPE_MISMATCH_ERR, args.GetIsolate());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGTransform>::create(imp->createSVGTransformFromMatrix(matrix->propertyReference()))), args, imp);
}

static v8::Handle<v8::Value> getElementByIdCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, elementId, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getElementById(elementId), args, imp);
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, extension, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return v8Boolean(imp->hasExtension(extension), args.GetIsolate());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())), args, imp);
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())), args, imp);
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
    return toV8Fast(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())), args, imp);
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    SVGSVGElement* imp = V8SVGSVGElement::toNative(args.Holder());
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

} // namespace SVGSVGElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGSVGElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGSVGElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGSVGElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGSVGElementV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGSVGElementV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentScriptType' (Type: 'attribute' ExtAttr: '')
    {"contentScriptType", SVGSVGElementV8Internal::contentScriptTypeAttrGetter, SVGSVGElementV8Internal::contentScriptTypeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentStyleType' (Type: 'attribute' ExtAttr: '')
    {"contentStyleType", SVGSVGElementV8Internal::contentStyleTypeAttrGetter, SVGSVGElementV8Internal::contentStyleTypeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'viewport' (Type: 'readonly attribute' ExtAttr: '')
    {"viewport", SVGSVGElementV8Internal::viewportAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pixelUnitToMillimeterX' (Type: 'readonly attribute' ExtAttr: '')
    {"pixelUnitToMillimeterX", SVGSVGElementV8Internal::pixelUnitToMillimeterXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pixelUnitToMillimeterY' (Type: 'readonly attribute' ExtAttr: '')
    {"pixelUnitToMillimeterY", SVGSVGElementV8Internal::pixelUnitToMillimeterYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'screenPixelToMillimeterX' (Type: 'readonly attribute' ExtAttr: '')
    {"screenPixelToMillimeterX", SVGSVGElementV8Internal::screenPixelToMillimeterXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'screenPixelToMillimeterY' (Type: 'readonly attribute' ExtAttr: '')
    {"screenPixelToMillimeterY", SVGSVGElementV8Internal::screenPixelToMillimeterYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'useCurrentView' (Type: 'readonly attribute' ExtAttr: '')
    {"useCurrentView", SVGSVGElementV8Internal::useCurrentViewAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'currentView' (Type: 'readonly attribute' ExtAttr: '')
    {"currentView", SVGSVGElementV8Internal::currentViewAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'currentScale' (Type: 'attribute' ExtAttr: '')
    {"currentScale", SVGSVGElementV8Internal::currentScaleAttrGetter, SVGSVGElementV8Internal::currentScaleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'currentTranslate' (Type: 'readonly attribute' ExtAttr: '')
    {"currentTranslate", SVGSVGElementV8Internal::currentTranslateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGSVGElementV8Internal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGSVGElementV8Internal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGSVGElementV8Internal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGSVGElementV8Internal::xmllangAttrGetter, SVGSVGElementV8Internal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGSVGElementV8Internal::xmlspaceAttrGetter, SVGSVGElementV8Internal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGSVGElementV8Internal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGSVGElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGSVGElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGSVGElementV8Internal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGSVGElementV8Internal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'viewBox' (Type: 'readonly attribute' ExtAttr: '')
    {"viewBox", SVGSVGElementV8Internal::viewBoxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'preserveAspectRatio' (Type: 'readonly attribute' ExtAttr: '')
    {"preserveAspectRatio", SVGSVGElementV8Internal::preserveAspectRatioAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'zoomAndPan' (Type: 'attribute' ExtAttr: '')
    {"zoomAndPan", SVGSVGElementV8Internal::zoomAndPanAttrGetter, SVGSVGElementV8Internal::zoomAndPanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGSVGElementCallbacks[] = {
    {"suspendRedraw", SVGSVGElementV8Internal::suspendRedrawCallback},
    {"unsuspendRedraw", SVGSVGElementV8Internal::unsuspendRedrawCallback},
    {"unsuspendRedrawAll", SVGSVGElementV8Internal::unsuspendRedrawAllCallback},
    {"forceRedraw", SVGSVGElementV8Internal::forceRedrawCallback},
    {"pauseAnimations", SVGSVGElementV8Internal::pauseAnimationsCallback},
    {"unpauseAnimations", SVGSVGElementV8Internal::unpauseAnimationsCallback},
    {"animationsPaused", SVGSVGElementV8Internal::animationsPausedCallback},
    {"getCurrentTime", SVGSVGElementV8Internal::getCurrentTimeCallback},
    {"setCurrentTime", SVGSVGElementV8Internal::setCurrentTimeCallback},
    {"deselectAll", SVGSVGElementV8Internal::deselectAllCallback},
    {"createSVGNumber", SVGSVGElementV8Internal::createSVGNumberCallback},
    {"createSVGLength", SVGSVGElementV8Internal::createSVGLengthCallback},
    {"createSVGAngle", SVGSVGElementV8Internal::createSVGAngleCallback},
    {"createSVGPoint", SVGSVGElementV8Internal::createSVGPointCallback},
    {"createSVGMatrix", SVGSVGElementV8Internal::createSVGMatrixCallback},
    {"createSVGRect", SVGSVGElementV8Internal::createSVGRectCallback},
    {"createSVGTransform", SVGSVGElementV8Internal::createSVGTransformCallback},
    {"getElementById", SVGSVGElementV8Internal::getElementByIdCallback},
    {"hasExtension", SVGSVGElementV8Internal::hasExtensionCallback},
    {"getPresentationAttribute", SVGSVGElementV8Internal::getPresentationAttributeCallback},
    {"getBBox", SVGSVGElementV8Internal::getBBoxCallback},
    {"getCTM", SVGSVGElementV8Internal::getCTMCallback},
    {"getScreenCTM", SVGSVGElementV8Internal::getScreenCTMCallback},
};

static const V8DOMConfiguration::BatchedConstant V8SVGSVGElementConsts[] = {
    {"SVG_ZOOMANDPAN_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_ZOOMANDPAN_DISABLE", static_cast<signed int>(1)},
    {"SVG_ZOOMANDPAN_MAGNIFY", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == SVGSVGElement::SVG_ZOOMANDPAN_UNKNOWN, SVGSVGElementEnumSVG_ZOOMANDPAN_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGSVGElement::SVG_ZOOMANDPAN_DISABLE, SVGSVGElementEnumSVG_ZOOMANDPAN_DISABLEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGSVGElement::SVG_ZOOMANDPAN_MAGNIFY, SVGSVGElementEnumSVG_ZOOMANDPAN_MAGNIFYIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGSVGElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGSVGElement", V8SVGElement::GetTemplate(), V8SVGSVGElement::internalFieldCount,
        V8SVGSVGElementAttrs, WTF_ARRAY_LENGTH(V8SVGSVGElementAttrs),
        V8SVGSVGElementCallbacks, WTF_ARRAY_LENGTH(V8SVGSVGElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'getIntersectionList'
    const int getIntersectionListArgc = 2;
    v8::Handle<v8::FunctionTemplate> getIntersectionListArgv[getIntersectionListArgc] = { V8SVGRect::GetRawTemplate(), V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getIntersectionListSignature = v8::Signature::New(desc, getIntersectionListArgc, getIntersectionListArgv);
    proto->Set(v8::String::NewSymbol("getIntersectionList"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::getIntersectionListCallback, v8Undefined(), getIntersectionListSignature));

    // Custom Signature 'getEnclosureList'
    const int getEnclosureListArgc = 2;
    v8::Handle<v8::FunctionTemplate> getEnclosureListArgv[getEnclosureListArgc] = { V8SVGRect::GetRawTemplate(), V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getEnclosureListSignature = v8::Signature::New(desc, getEnclosureListArgc, getEnclosureListArgv);
    proto->Set(v8::String::NewSymbol("getEnclosureList"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::getEnclosureListCallback, v8Undefined(), getEnclosureListSignature));

    // Custom Signature 'checkIntersection'
    const int checkIntersectionArgc = 2;
    v8::Handle<v8::FunctionTemplate> checkIntersectionArgv[checkIntersectionArgc] = { V8SVGElement::GetRawTemplate(), V8SVGRect::GetRawTemplate() };
    v8::Handle<v8::Signature> checkIntersectionSignature = v8::Signature::New(desc, checkIntersectionArgc, checkIntersectionArgv);
    proto->Set(v8::String::NewSymbol("checkIntersection"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::checkIntersectionCallback, v8Undefined(), checkIntersectionSignature));

    // Custom Signature 'checkEnclosure'
    const int checkEnclosureArgc = 2;
    v8::Handle<v8::FunctionTemplate> checkEnclosureArgv[checkEnclosureArgc] = { V8SVGElement::GetRawTemplate(), V8SVGRect::GetRawTemplate() };
    v8::Handle<v8::Signature> checkEnclosureSignature = v8::Signature::New(desc, checkEnclosureArgc, checkEnclosureArgv);
    proto->Set(v8::String::NewSymbol("checkEnclosure"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::checkEnclosureCallback, v8Undefined(), checkEnclosureSignature));

    // Custom Signature 'createSVGTransformFromMatrix'
    const int createSVGTransformFromMatrixArgc = 1;
    v8::Handle<v8::FunctionTemplate> createSVGTransformFromMatrixArgv[createSVGTransformFromMatrixArgc] = { V8SVGMatrix::GetRawTemplate() };
    v8::Handle<v8::Signature> createSVGTransformFromMatrixSignature = v8::Signature::New(desc, createSVGTransformFromMatrixArgc, createSVGTransformFromMatrixArgv);
    proto->Set(v8::String::NewSymbol("createSVGTransformFromMatrix"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::createSVGTransformFromMatrixCallback, v8Undefined(), createSVGTransformFromMatrixSignature));

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::NewSymbol("getTransformToElement"), v8::FunctionTemplate::New(SVGSVGElementV8Internal::getTransformToElementCallback, v8Undefined(), getTransformToElementSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8SVGSVGElementConsts, WTF_ARRAY_LENGTH(V8SVGSVGElementConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGSVGElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGSVGElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGSVGElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGSVGElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGSVGElement::createWrapper(PassRefPtr<SVGSVGElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGSVGElement::derefObject(void* object)
{
    static_cast<SVGSVGElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
