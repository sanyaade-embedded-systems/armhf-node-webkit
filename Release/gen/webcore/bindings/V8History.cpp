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
#include "V8History.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SerializedScriptValue.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8History::info = { V8History::GetTemplate, V8History::derefObject, 0, 0, V8History::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace HistoryV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    History* imp = V8History::toNative(info.Holder());
    return v8UnsignedInteger(imp->length(), info.GetIsolate());
}

static v8::Handle<v8::Value> backCallback(const v8::Arguments& args)
{
    History* imp = V8History::toNative(args.Holder());
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    imp->back(scriptContext);
    return v8Undefined();
}

static v8::Handle<v8::Value> backAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    static v8::Persistent<v8::FunctionTemplate> privateTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::backCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
    v8::Handle<v8::Object> holder = info.This()->FindInstanceInPrototypeChain(V8History::GetTemplate());
    if (holder.IsEmpty()) {
        // can only reach here by 'object.__proto__.func', and it should passed
        // domain security check already
        return privateTemplate->GetFunction();
    }
    History* imp = V8History::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(BindingState::instance(), imp->frame(), DoNotReportSecurityError)) {
        static v8::Persistent<v8::FunctionTemplate> sharedTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::backCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
        return sharedTemplate->GetFunction();
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(name);
    if (!hiddenValue.IsEmpty())
        return hiddenValue;

    return privateTemplate->GetFunction();
}

static v8::Handle<v8::Value> forwardCallback(const v8::Arguments& args)
{
    History* imp = V8History::toNative(args.Holder());
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    imp->forward(scriptContext);
    return v8Undefined();
}

static v8::Handle<v8::Value> forwardAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    static v8::Persistent<v8::FunctionTemplate> privateTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::forwardCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
    v8::Handle<v8::Object> holder = info.This()->FindInstanceInPrototypeChain(V8History::GetTemplate());
    if (holder.IsEmpty()) {
        // can only reach here by 'object.__proto__.func', and it should passed
        // domain security check already
        return privateTemplate->GetFunction();
    }
    History* imp = V8History::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(BindingState::instance(), imp->frame(), DoNotReportSecurityError)) {
        static v8::Persistent<v8::FunctionTemplate> sharedTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::forwardCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
        return sharedTemplate->GetFunction();
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(name);
    if (!hiddenValue.IsEmpty())
        return hiddenValue;

    return privateTemplate->GetFunction();
}

static v8::Handle<v8::Value> goCallback(const v8::Arguments& args)
{
    History* imp = V8History::toNative(args.Holder());
    V8TRYCATCH(int, distance, toInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    imp->go(scriptContext, distance);
    return v8Undefined();
}

static v8::Handle<v8::Value> goAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    static v8::Persistent<v8::FunctionTemplate> privateTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::goCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
    v8::Handle<v8::Object> holder = info.This()->FindInstanceInPrototypeChain(V8History::GetTemplate());
    if (holder.IsEmpty()) {
        // can only reach here by 'object.__proto__.func', and it should passed
        // domain security check already
        return privateTemplate->GetFunction();
    }
    History* imp = V8History::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(BindingState::instance(), imp->frame(), DoNotReportSecurityError)) {
        static v8::Persistent<v8::FunctionTemplate> sharedTemplate = v8::Persistent<v8::FunctionTemplate>::New(v8::FunctionTemplate::New(HistoryV8Internal::goCallback, v8Undefined(), v8::Signature::New(V8History::GetRawTemplate())));
        return sharedTemplate->GetFunction();
    }

    v8::Local<v8::Value> hiddenValue = info.This()->GetHiddenValue(name);
    if (!hiddenValue.IsEmpty())
        return hiddenValue;

    return privateTemplate->GetFunction();
}

static void HistoryDomainSafeFunctionSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    v8::Handle<v8::Object> holder = info.This()->FindInstanceInPrototypeChain(V8History::GetTemplate());
    if (holder.IsEmpty())
        return;
    History* imp = V8History::toNative(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(BindingState::instance(), imp->frame()))
        return;

    info.This()->SetHiddenValue(name, value);
}

} // namespace HistoryV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HistoryAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", HistoryV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'state' (Type: 'readonly attribute' ExtAttr: 'Custom CachedAttribute')
    {"state", V8History::stateAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HistoryTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "History", v8::Persistent<v8::FunctionTemplate>(), V8History::internalFieldCount,
        V8HistoryAttrs, WTF_ARRAY_LENGTH(V8HistoryAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    instance->SetAccessCheckCallbacks(V8History::namedSecurityCheck, V8History::indexedSecurityCheck, v8::External::New(&V8History::info));

    // Function 'back' (ExtAttr: 'DoNotCheckSecurity CallWith')
    proto->SetAccessor(v8::String::NewSymbol("back"), HistoryV8Internal::backAttrGetter, HistoryV8Internal::HistoryDomainSafeFunctionSetter, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));

    // Function 'forward' (ExtAttr: 'DoNotCheckSecurity CallWith')
    proto->SetAccessor(v8::String::NewSymbol("forward"), HistoryV8Internal::forwardAttrGetter, HistoryV8Internal::HistoryDomainSafeFunctionSetter, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));

    // Function 'go' (ExtAttr: 'DoNotCheckSecurity CallWith')
    proto->SetAccessor(v8::String::NewSymbol("go"), HistoryV8Internal::goAttrGetter, HistoryV8Internal::HistoryDomainSafeFunctionSetter, v8Undefined(), v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8History::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8History::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HistoryTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8History::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

void V8History::installPerContextPrototypeProperties(v8::Handle<v8::Object> proto)
{
    UNUSED_PARAM(proto);
    v8::Local<v8::Signature> defaultSignature = v8::Signature::New(GetTemplate());
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.

    ScriptExecutionContext* context = toScriptExecutionContext(proto->CreationContext());
    if (context && context->isDocument() && ContextFeatures::pushStateEnabled(static_cast<Document*>(context))) {
        proto->Set(v8::String::NewSymbol("pushState"), v8::FunctionTemplate::New(V8History::pushStateCallback, v8Undefined(), defaultSignature)->GetFunction());
    }
    if (context && context->isDocument() && ContextFeatures::pushStateEnabled(static_cast<Document*>(context))) {
        proto->Set(v8::String::NewSymbol("replaceState"), v8::FunctionTemplate::New(V8History::replaceStateCallback, v8Undefined(), defaultSignature)->GetFunction());
    }
}

v8::Handle<v8::Object> V8History::createWrapper(PassRefPtr<History> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8History::derefObject(void* object)
{
    static_cast<History*>(object)->deref();
}

} // namespace WebCore
