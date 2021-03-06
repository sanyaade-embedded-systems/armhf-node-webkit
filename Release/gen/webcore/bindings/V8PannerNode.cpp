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
#include "V8PannerNode.h"

#if ENABLE(WEB_AUDIO)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AudioNode.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8PannerNode::info = { V8PannerNode::GetTemplate, V8PannerNode::derefObject, 0, 0, V8PannerNode::installPerContextPrototypeProperties, &V8AudioNode::info, WrapperTypeObjectPrototype };

namespace PannerNodeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> panningModelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8String(imp->panningModel(), info.GetIsolate());
}

static v8::Handle<v8::Value> distanceModelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8String(imp->distanceModel(), info.GetIsolate());
}

static v8::Handle<v8::Value> refDistanceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->refDistance());
}

static void refDistanceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setRefDistance(v);
    return;
}

static v8::Handle<v8::Value> maxDistanceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->maxDistance());
}

static void maxDistanceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setMaxDistance(v);
    return;
}

static v8::Handle<v8::Value> rolloffFactorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->rolloffFactor());
}

static void rolloffFactorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setRolloffFactor(v);
    return;
}

static v8::Handle<v8::Value> coneInnerAngleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->coneInnerAngle());
}

static void coneInnerAngleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setConeInnerAngle(v);
    return;
}

static v8::Handle<v8::Value> coneOuterAngleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->coneOuterAngle());
}

static void coneOuterAngleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setConeOuterAngle(v);
    return;
}

static v8::Handle<v8::Value> coneOuterGainAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    return v8::Number::New(imp->coneOuterGain());
}

static void coneOuterGainAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    PannerNode* imp = V8PannerNode::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setConeOuterGain(v);
    return;
}

static v8::Handle<v8::Value> setPositionCallback(const v8::Arguments& args)
{
    if (args.Length() < 3)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    PannerNode* imp = V8PannerNode::toNative(args.Holder());
    V8TRYCATCH(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, z, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    imp->setPosition(x, y, z);
    return v8Undefined();
}

static v8::Handle<v8::Value> setOrientationCallback(const v8::Arguments& args)
{
    if (args.Length() < 3)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    PannerNode* imp = V8PannerNode::toNative(args.Holder());
    V8TRYCATCH(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, z, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    imp->setOrientation(x, y, z);
    return v8Undefined();
}

static v8::Handle<v8::Value> setVelocityCallback(const v8::Arguments& args)
{
    if (args.Length() < 3)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    PannerNode* imp = V8PannerNode::toNative(args.Holder());
    V8TRYCATCH(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, z, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    imp->setVelocity(x, y, z);
    return v8Undefined();
}

} // namespace PannerNodeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8PannerNodeAttrs[] = {
    // Attribute 'panningModel' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"panningModel", PannerNodeV8Internal::panningModelAttrGetter, V8PannerNode::panningModelAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'distanceModel' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"distanceModel", PannerNodeV8Internal::distanceModelAttrGetter, V8PannerNode::distanceModelAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'refDistance' (Type: 'attribute' ExtAttr: '')
    {"refDistance", PannerNodeV8Internal::refDistanceAttrGetter, PannerNodeV8Internal::refDistanceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'maxDistance' (Type: 'attribute' ExtAttr: '')
    {"maxDistance", PannerNodeV8Internal::maxDistanceAttrGetter, PannerNodeV8Internal::maxDistanceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rolloffFactor' (Type: 'attribute' ExtAttr: '')
    {"rolloffFactor", PannerNodeV8Internal::rolloffFactorAttrGetter, PannerNodeV8Internal::rolloffFactorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'coneInnerAngle' (Type: 'attribute' ExtAttr: '')
    {"coneInnerAngle", PannerNodeV8Internal::coneInnerAngleAttrGetter, PannerNodeV8Internal::coneInnerAngleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'coneOuterAngle' (Type: 'attribute' ExtAttr: '')
    {"coneOuterAngle", PannerNodeV8Internal::coneOuterAngleAttrGetter, PannerNodeV8Internal::coneOuterAngleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'coneOuterGain' (Type: 'attribute' ExtAttr: '')
    {"coneOuterGain", PannerNodeV8Internal::coneOuterGainAttrGetter, PannerNodeV8Internal::coneOuterGainAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8PannerNodeCallbacks[] = {
    {"setPosition", PannerNodeV8Internal::setPositionCallback},
    {"setOrientation", PannerNodeV8Internal::setOrientationCallback},
    {"setVelocity", PannerNodeV8Internal::setVelocityCallback},
};

static const V8DOMConfiguration::BatchedConstant V8PannerNodeConsts[] = {
    {"EQUALPOWER", static_cast<signed int>(0)},
    {"HRTF", static_cast<signed int>(1)},
    {"SOUNDFIELD", static_cast<signed int>(2)},
    {"LINEAR_DISTANCE", static_cast<signed int>(0)},
    {"INVERSE_DISTANCE", static_cast<signed int>(1)},
    {"EXPONENTIAL_DISTANCE", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == PannerNode::EQUALPOWER, PannerNodeEnumEQUALPOWERIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == PannerNode::HRTF, PannerNodeEnumHRTFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == PannerNode::SOUNDFIELD, PannerNodeEnumSOUNDFIELDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0 == PannerNode::LINEAR_DISTANCE, PannerNodeEnumLINEAR_DISTANCEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == PannerNode::INVERSE_DISTANCE, PannerNodeEnumINVERSE_DISTANCEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == PannerNode::EXPONENTIAL_DISTANCE, PannerNodeEnumEXPONENTIAL_DISTANCEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8PannerNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "PannerNode", V8AudioNode::GetTemplate(), V8PannerNode::internalFieldCount,
        V8PannerNodeAttrs, WTF_ARRAY_LENGTH(V8PannerNodeAttrs),
        V8PannerNodeCallbacks, WTF_ARRAY_LENGTH(V8PannerNodeCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8PannerNodeConsts, WTF_ARRAY_LENGTH(V8PannerNodeConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8PannerNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8PannerNode::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8PannerNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8PannerNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8PannerNode::createWrapper(PassRefPtr<PannerNode> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<AudioNode*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8PannerNode::derefObject(void* object)
{
    static_cast<PannerNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)
