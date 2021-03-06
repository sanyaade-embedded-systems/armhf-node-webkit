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
#include "V8WebKitCSSKeyframesRule.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CSSRule.h"
#include "V8CSSRuleList.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8WebKitCSSKeyframeRule.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8WebKitCSSKeyframesRule::info = { V8WebKitCSSKeyframesRule::GetTemplate, V8WebKitCSSKeyframesRule::derefObject, 0, 0, V8WebKitCSSKeyframesRule::installPerContextPrototypeProperties, &V8CSSRule::info, WrapperTypeObjectPrototype };

namespace WebKitCSSKeyframesRuleV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    return v8StringOrNull(imp->name(), info.GetIsolate());
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setName(v);
    return;
}

static v8::Handle<v8::Value> cssRulesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    RefPtr<CSSRuleList> result = imp->cssRules();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "cssRules", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> insertRuleCallback(const v8::Arguments& args)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, rule, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->insertRule(rule);
    return v8Undefined();
}

static v8::Handle<v8::Value> deleteRuleCallback(const v8::Arguments& args)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, key, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->deleteRule(key);
    return v8Undefined();
}

static v8::Handle<v8::Value> findRuleCallback(const v8::Arguments& args)
{
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, key, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8(imp->findRule(key), args.Holder(), args.GetIsolate());
}

} // namespace WebKitCSSKeyframesRuleV8Internal

static const V8DOMConfiguration::BatchedAttribute V8WebKitCSSKeyframesRuleAttrs[] = {
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'TreatNullAs TreatReturnedNullStringAs')
    {"name", WebKitCSSKeyframesRuleV8Internal::nameAttrGetter, WebKitCSSKeyframesRuleV8Internal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssRules' (Type: 'readonly attribute' ExtAttr: '')
    {"cssRules", WebKitCSSKeyframesRuleV8Internal::cssRulesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8WebKitCSSKeyframesRuleCallbacks[] = {
    {"insertRule", WebKitCSSKeyframesRuleV8Internal::insertRuleCallback},
    {"deleteRule", WebKitCSSKeyframesRuleV8Internal::deleteRuleCallback},
    {"findRule", WebKitCSSKeyframesRuleV8Internal::findRuleCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitCSSKeyframesRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "WebKitCSSKeyframesRule", V8CSSRule::GetTemplate(), V8WebKitCSSKeyframesRule::internalFieldCount,
        V8WebKitCSSKeyframesRuleAttrs, WTF_ARRAY_LENGTH(V8WebKitCSSKeyframesRuleAttrs),
        V8WebKitCSSKeyframesRuleCallbacks, WTF_ARRAY_LENGTH(V8WebKitCSSKeyframesRuleCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    setCollectionIndexedGetter<WebKitCSSKeyframesRule, WebKitCSSKeyframeRule>(desc);

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSKeyframesRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSKeyframesRule::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitCSSKeyframesRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitCSSKeyframesRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitCSSKeyframesRule::createWrapper(PassRefPtr<WebKitCSSKeyframesRule> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<CSSRule*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8WebKitCSSKeyframesRule::derefObject(void* object)
{
    static_cast<WebKitCSSKeyframesRule*>(object)->deref();
}

} // namespace WebCore
