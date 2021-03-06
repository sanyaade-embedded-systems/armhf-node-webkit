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
#include "V8AudioBufferSourceNode.h"

#if ENABLE(WEB_AUDIO)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "FeatureObserver.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AudioBuffer.h"
#include "V8AudioGain.h"
#include "V8AudioParam.h"
#include "V8AudioSourceNode.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8AudioBufferSourceNode::info = { V8AudioBufferSourceNode::GetTemplate, V8AudioBufferSourceNode::derefObject, 0, 0, V8AudioBufferSourceNode::installPerContextPrototypeProperties, &V8AudioSourceNode::info, WrapperTypeObjectPrototype };

namespace AudioBufferSourceNodeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> bufferAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return toV8Fast(imp->buffer(), info, imp);
}

static v8::Handle<v8::Value> playbackStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8Integer(imp->playbackState(), info.GetIsolate());
}

static v8::Handle<v8::Value> gainAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    RefPtr<AudioGain> result = imp->gain();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "gain", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> playbackRateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    RefPtr<AudioParam> result = imp->playbackRate();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "playbackRate", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> loopAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8Boolean(imp->loop(), info.GetIsolate());
}

static void loopAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setLoop(v);
    return;
}

static v8::Handle<v8::Value> loopStartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8::Number::New(imp->loopStart());
}

static void loopStartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setLoopStart(v);
    return;
}

static v8::Handle<v8::Value> loopEndAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8::Number::New(imp->loopEnd());
}

static void loopEndAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setLoopEnd(v);
    return;
}

static v8::Handle<v8::Value> loopingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8Boolean(imp->looping(), info.GetIsolate());
}

static void loopingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setLooping(v);
    return;
}

static v8::Handle<v8::Value> start1Callback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::WebAudioStart);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->start(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> start2Callback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::WebAudioStart);
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, grainOffset, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    imp->startGrain(when, grainOffset);
    return v8Undefined();
}

static v8::Handle<v8::Value> start3Callback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::WebAudioStart);
    if (args.Length() < 3)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, grainOffset, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, grainDuration, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    imp->startGrain(when, grainOffset, grainDuration);
    return v8Undefined();
}

static v8::Handle<v8::Value> startCallback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::WebAudioStart);
    if (args.Length() == 1)
        return start1Callback(args);
    if (args.Length() == 2)
        return start2Callback(args);
    if (args.Length() == 3)
        return start3Callback(args);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> stopCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->stop(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> noteOnCallback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::LegacyWebAudio);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->noteOn(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> noteGrainOnCallback(const v8::Arguments& args)
{
    FeatureObserver::observe(activeDOMWindow(BindingState::instance()), FeatureObserver::LegacyWebAudio);
    if (args.Length() < 3)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, grainOffset, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, grainDuration, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    imp->noteGrainOn(when, grainOffset, grainDuration);
    return v8Undefined();
}

static v8::Handle<v8::Value> noteOffCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->noteOff(when);
    return v8Undefined();
}

} // namespace AudioBufferSourceNodeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8AudioBufferSourceNodeAttrs[] = {
    // Attribute 'buffer' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"buffer", AudioBufferSourceNodeV8Internal::bufferAttrGetter, V8AudioBufferSourceNode::bufferAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'playbackState' (Type: 'readonly attribute' ExtAttr: '')
    {"playbackState", AudioBufferSourceNodeV8Internal::playbackStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'gain' (Type: 'readonly attribute' ExtAttr: '')
    {"gain", AudioBufferSourceNodeV8Internal::gainAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'playbackRate' (Type: 'readonly attribute' ExtAttr: '')
    {"playbackRate", AudioBufferSourceNodeV8Internal::playbackRateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'loop' (Type: 'attribute' ExtAttr: '')
    {"loop", AudioBufferSourceNodeV8Internal::loopAttrGetter, AudioBufferSourceNodeV8Internal::loopAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'loopStart' (Type: 'attribute' ExtAttr: '')
    {"loopStart", AudioBufferSourceNodeV8Internal::loopStartAttrGetter, AudioBufferSourceNodeV8Internal::loopStartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'loopEnd' (Type: 'attribute' ExtAttr: '')
    {"loopEnd", AudioBufferSourceNodeV8Internal::loopEndAttrGetter, AudioBufferSourceNodeV8Internal::loopEndAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'looping' (Type: 'attribute' ExtAttr: '')
    {"looping", AudioBufferSourceNodeV8Internal::loopingAttrGetter, AudioBufferSourceNodeV8Internal::loopingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8AudioBufferSourceNodeCallbacks[] = {
    {"start", AudioBufferSourceNodeV8Internal::startCallback},
    {"stop", AudioBufferSourceNodeV8Internal::stopCallback},
    {"noteOn", AudioBufferSourceNodeV8Internal::noteOnCallback},
    {"noteGrainOn", AudioBufferSourceNodeV8Internal::noteGrainOnCallback},
    {"noteOff", AudioBufferSourceNodeV8Internal::noteOffCallback},
};

static const V8DOMConfiguration::BatchedConstant V8AudioBufferSourceNodeConsts[] = {
    {"UNSCHEDULED_STATE", static_cast<signed int>(0)},
    {"SCHEDULED_STATE", static_cast<signed int>(1)},
    {"PLAYING_STATE", static_cast<signed int>(2)},
    {"FINISHED_STATE", static_cast<signed int>(3)},
};


COMPILE_ASSERT(0 == AudioBufferSourceNode::UNSCHEDULED_STATE, AudioBufferSourceNodeEnumUNSCHEDULED_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == AudioBufferSourceNode::SCHEDULED_STATE, AudioBufferSourceNodeEnumSCHEDULED_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == AudioBufferSourceNode::PLAYING_STATE, AudioBufferSourceNodeEnumPLAYING_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == AudioBufferSourceNode::FINISHED_STATE, AudioBufferSourceNodeEnumFINISHED_STATEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8AudioBufferSourceNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "AudioBufferSourceNode", V8AudioSourceNode::GetTemplate(), V8AudioBufferSourceNode::internalFieldCount,
        V8AudioBufferSourceNodeAttrs, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeAttrs),
        V8AudioBufferSourceNodeCallbacks, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8AudioBufferSourceNodeConsts, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8AudioBufferSourceNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8AudioBufferSourceNode::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8AudioBufferSourceNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8AudioBufferSourceNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8AudioBufferSourceNode::createWrapper(PassRefPtr<AudioBufferSourceNode> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8AudioBufferSourceNode::derefObject(void* object)
{
    static_cast<AudioBufferSourceNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)
