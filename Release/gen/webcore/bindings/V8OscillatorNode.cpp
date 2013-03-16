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
#include "V8OscillatorNode.h"

#if ENABLE(WEB_AUDIO)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AudioParam.h"
#include "V8AudioSourceNode.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8WaveTable.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8OscillatorNode::info = { V8OscillatorNode::GetTemplate, V8OscillatorNode::derefObject, 0, 0, V8OscillatorNode::installPerContextPrototypeProperties, &V8AudioSourceNode::info, WrapperTypeObjectPrototype };

namespace OscillatorNodeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    OscillatorNode* imp = V8OscillatorNode::toNative(info.Holder());
    return v8String(imp->type(), info.GetIsolate());
}

static v8::Handle<v8::Value> playbackStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    OscillatorNode* imp = V8OscillatorNode::toNative(info.Holder());
    return v8Integer(imp->playbackState(), info.GetIsolate());
}

static v8::Handle<v8::Value> frequencyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    OscillatorNode* imp = V8OscillatorNode::toNative(info.Holder());
    RefPtr<AudioParam> result = imp->frequency();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "frequency", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> detuneAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    OscillatorNode* imp = V8OscillatorNode::toNative(info.Holder());
    RefPtr<AudioParam> result = imp->detune();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "detune", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> startCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    OscillatorNode* imp = V8OscillatorNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->start(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> stopCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    OscillatorNode* imp = V8OscillatorNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->stop(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> noteOnCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    OscillatorNode* imp = V8OscillatorNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->noteOn(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> noteOffCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    OscillatorNode* imp = V8OscillatorNode::toNative(args.Holder());
    V8TRYCATCH(double, when, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    imp->noteOff(when);
    return v8Undefined();
}

static v8::Handle<v8::Value> setWaveTableCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    OscillatorNode* imp = V8OscillatorNode::toNative(args.Holder());
    V8TRYCATCH(WaveTable*, waveTable, V8WaveTable::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8WaveTable::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->setWaveTable(waveTable);
    return v8Undefined();
}

} // namespace OscillatorNodeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8OscillatorNodeAttrs[] = {
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"type", OscillatorNodeV8Internal::typeAttrGetter, V8OscillatorNode::typeAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'playbackState' (Type: 'readonly attribute' ExtAttr: '')
    {"playbackState", OscillatorNodeV8Internal::playbackStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'frequency' (Type: 'readonly attribute' ExtAttr: '')
    {"frequency", OscillatorNodeV8Internal::frequencyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'detune' (Type: 'readonly attribute' ExtAttr: '')
    {"detune", OscillatorNodeV8Internal::detuneAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8OscillatorNodeCallbacks[] = {
    {"start", OscillatorNodeV8Internal::startCallback},
    {"stop", OscillatorNodeV8Internal::stopCallback},
    {"noteOn", OscillatorNodeV8Internal::noteOnCallback},
    {"noteOff", OscillatorNodeV8Internal::noteOffCallback},
};

static const V8DOMConfiguration::BatchedConstant V8OscillatorNodeConsts[] = {
    {"SINE", static_cast<signed int>(0)},
    {"SQUARE", static_cast<signed int>(1)},
    {"SAWTOOTH", static_cast<signed int>(2)},
    {"TRIANGLE", static_cast<signed int>(3)},
    {"CUSTOM", static_cast<signed int>(4)},
    {"UNSCHEDULED_STATE", static_cast<signed int>(0)},
    {"SCHEDULED_STATE", static_cast<signed int>(1)},
    {"PLAYING_STATE", static_cast<signed int>(2)},
    {"FINISHED_STATE", static_cast<signed int>(3)},
};


COMPILE_ASSERT(0 == OscillatorNode::SINE, OscillatorNodeEnumSINEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == OscillatorNode::SQUARE, OscillatorNodeEnumSQUAREIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == OscillatorNode::SAWTOOTH, OscillatorNodeEnumSAWTOOTHIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == OscillatorNode::TRIANGLE, OscillatorNodeEnumTRIANGLEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == OscillatorNode::CUSTOM, OscillatorNodeEnumCUSTOMIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0 == OscillatorNode::UNSCHEDULED_STATE, OscillatorNodeEnumUNSCHEDULED_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == OscillatorNode::SCHEDULED_STATE, OscillatorNodeEnumSCHEDULED_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == OscillatorNode::PLAYING_STATE, OscillatorNodeEnumPLAYING_STATEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == OscillatorNode::FINISHED_STATE, OscillatorNodeEnumFINISHED_STATEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8OscillatorNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "OscillatorNode", V8AudioSourceNode::GetTemplate(), V8OscillatorNode::internalFieldCount,
        V8OscillatorNodeAttrs, WTF_ARRAY_LENGTH(V8OscillatorNodeAttrs),
        V8OscillatorNodeCallbacks, WTF_ARRAY_LENGTH(V8OscillatorNodeCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'setWaveTable'
    const int setWaveTableArgc = 1;
    v8::Handle<v8::FunctionTemplate> setWaveTableArgv[setWaveTableArgc] = { V8WaveTable::GetRawTemplate() };
    v8::Handle<v8::Signature> setWaveTableSignature = v8::Signature::New(desc, setWaveTableArgc, setWaveTableArgv);
    proto->Set(v8::String::NewSymbol("setWaveTable"), v8::FunctionTemplate::New(OscillatorNodeV8Internal::setWaveTableCallback, v8Undefined(), setWaveTableSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8OscillatorNodeConsts, WTF_ARRAY_LENGTH(V8OscillatorNodeConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8OscillatorNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8OscillatorNode::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8OscillatorNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8OscillatorNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8OscillatorNode::createWrapper(PassRefPtr<OscillatorNode> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8OscillatorNode::derefObject(void* object)
{
    static_cast<OscillatorNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)
