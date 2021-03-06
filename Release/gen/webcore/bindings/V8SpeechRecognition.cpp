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
#include "V8SpeechRecognition.h"

#if ENABLE(SCRIPTED_SPEECH)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8SpeechGrammarList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SpeechRecognition::info = { V8SpeechRecognition::GetTemplate, V8SpeechRecognition::derefObject, V8SpeechRecognition::toActiveDOMObject, 0, V8SpeechRecognition::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SpeechRecognitionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> grammarsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return toV8Fast(imp->grammars(), info, imp);
}

static void grammarsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    SpeechGrammarList* v = V8SpeechGrammarList::HasInstance(value) ? V8SpeechGrammarList::toNative(v8::Handle<v8::Object>::Cast(value)) : 0;
    imp->setGrammars(WTF::getPtr(v));
    return;
}

static v8::Handle<v8::Value> langAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return v8String(imp->lang(), info.GetIsolate());
}

static void langAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setLang(v);
    return;
}

static v8::Handle<v8::Value> continuousAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return v8Boolean(imp->continuous(), info.GetIsolate());
}

static void continuousAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setContinuous(v);
    return;
}

static v8::Handle<v8::Value> interimResultsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return v8Boolean(imp->interimResults(), info.GetIsolate());
}

static void interimResultsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setInterimResults(v);
    return;
}

static v8::Handle<v8::Value> maxAlternativesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return v8UnsignedInteger(imp->maxAlternatives(), info.GetIsolate());
}

static void maxAlternativesAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    unsigned v = toUInt32(value);
    imp->setMaxAlternatives(v);
    return;
}

static v8::Handle<v8::Value> onaudiostartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onaudiostart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onaudiostart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onaudiostartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onaudiostart(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnaudiostart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onsoundstartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onsoundstart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onsoundstart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onsoundstartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onsoundstart(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnsoundstart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onspeechstartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onspeechstart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onspeechstart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onspeechstartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onspeechstart(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnspeechstart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onspeechendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onspeechend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onspeechend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onspeechendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onspeechend(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnspeechend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onsoundendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onsoundend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onsoundend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onsoundendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onsoundend(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnsoundend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onaudioendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onaudioend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onaudioend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onaudioendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onaudioend(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnaudioend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onresultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onresult() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onresult())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onresultAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onresult(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnresult(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onnomatchAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onnomatch() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onnomatch())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onnomatchAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onnomatch(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnnomatch(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onstartAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onstart() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onstart())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onstartAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onstart(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnstart(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onendAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    return imp->onend() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onend())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onendAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onend(), value, V8SpeechRecognition::eventListenerCacheIndex);
    imp->setOnend(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> startCallback(const v8::Arguments& args)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->start(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> stopCallback(const v8::Arguments& args)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(args.Holder());
    imp->stopFunction();
    return v8Undefined();
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    SpeechRecognition* imp = V8SpeechRecognition::toNative(args.Holder());
    imp->abort();
    return v8Undefined();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8SpeechRecognition::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8SpeechRecognition::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8SpeechRecognition::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8SpeechRecognition::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    SpeechRecognition* imp = V8SpeechRecognition::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Event*, evt, V8Event::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace SpeechRecognitionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SpeechRecognitionAttrs[] = {
    // Attribute 'grammars' (Type: 'attribute' ExtAttr: '')
    {"grammars", SpeechRecognitionV8Internal::grammarsAttrGetter, SpeechRecognitionV8Internal::grammarsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lang' (Type: 'attribute' ExtAttr: '')
    {"lang", SpeechRecognitionV8Internal::langAttrGetter, SpeechRecognitionV8Internal::langAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'continuous' (Type: 'attribute' ExtAttr: '')
    {"continuous", SpeechRecognitionV8Internal::continuousAttrGetter, SpeechRecognitionV8Internal::continuousAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'interimResults' (Type: 'attribute' ExtAttr: '')
    {"interimResults", SpeechRecognitionV8Internal::interimResultsAttrGetter, SpeechRecognitionV8Internal::interimResultsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'maxAlternatives' (Type: 'attribute' ExtAttr: '')
    {"maxAlternatives", SpeechRecognitionV8Internal::maxAlternativesAttrGetter, SpeechRecognitionV8Internal::maxAlternativesAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onaudiostart' (Type: 'attribute' ExtAttr: '')
    {"onaudiostart", SpeechRecognitionV8Internal::onaudiostartAttrGetter, SpeechRecognitionV8Internal::onaudiostartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onsoundstart' (Type: 'attribute' ExtAttr: '')
    {"onsoundstart", SpeechRecognitionV8Internal::onsoundstartAttrGetter, SpeechRecognitionV8Internal::onsoundstartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onspeechstart' (Type: 'attribute' ExtAttr: '')
    {"onspeechstart", SpeechRecognitionV8Internal::onspeechstartAttrGetter, SpeechRecognitionV8Internal::onspeechstartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onspeechend' (Type: 'attribute' ExtAttr: '')
    {"onspeechend", SpeechRecognitionV8Internal::onspeechendAttrGetter, SpeechRecognitionV8Internal::onspeechendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onsoundend' (Type: 'attribute' ExtAttr: '')
    {"onsoundend", SpeechRecognitionV8Internal::onsoundendAttrGetter, SpeechRecognitionV8Internal::onsoundendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onaudioend' (Type: 'attribute' ExtAttr: '')
    {"onaudioend", SpeechRecognitionV8Internal::onaudioendAttrGetter, SpeechRecognitionV8Internal::onaudioendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onresult' (Type: 'attribute' ExtAttr: '')
    {"onresult", SpeechRecognitionV8Internal::onresultAttrGetter, SpeechRecognitionV8Internal::onresultAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onnomatch' (Type: 'attribute' ExtAttr: '')
    {"onnomatch", SpeechRecognitionV8Internal::onnomatchAttrGetter, SpeechRecognitionV8Internal::onnomatchAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", SpeechRecognitionV8Internal::onerrorAttrGetter, SpeechRecognitionV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onstart' (Type: 'attribute' ExtAttr: '')
    {"onstart", SpeechRecognitionV8Internal::onstartAttrGetter, SpeechRecognitionV8Internal::onstartAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onend' (Type: 'attribute' ExtAttr: '')
    {"onend", SpeechRecognitionV8Internal::onendAttrGetter, SpeechRecognitionV8Internal::onendAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SpeechRecognitionCallbacks[] = {
    {"start", SpeechRecognitionV8Internal::startCallback},
    {"stop", SpeechRecognitionV8Internal::stopCallback},
    {"abort", SpeechRecognitionV8Internal::abortCallback},
    {"addEventListener", SpeechRecognitionV8Internal::addEventListenerCallback},
    {"removeEventListener", SpeechRecognitionV8Internal::removeEventListenerCallback},
};

v8::Handle<v8::Value> V8SpeechRecognition::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    ScriptExecutionContext* context = getScriptExecutionContext();

    RefPtr<SpeechRecognition> impl = SpeechRecognition::create(context);
    v8::Handle<v8::Object> wrapper = args.Holder();

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SpeechRecognitionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SpeechRecognition", v8::Persistent<v8::FunctionTemplate>(), V8SpeechRecognition::internalFieldCount,
        V8SpeechRecognitionAttrs, WTF_ARRAY_LENGTH(V8SpeechRecognitionAttrs),
        V8SpeechRecognitionCallbacks, WTF_ARRAY_LENGTH(V8SpeechRecognitionCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8SpeechRecognition::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(SpeechRecognitionV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SpeechRecognition::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SpeechRecognition::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SpeechRecognitionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SpeechRecognition::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8SpeechRecognition::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8SpeechRecognition::createWrapper(PassRefPtr<SpeechRecognition> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8SpeechRecognition::derefObject(void* object)
{
    static_cast<SpeechRecognition*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SCRIPTED_SPEECH)
