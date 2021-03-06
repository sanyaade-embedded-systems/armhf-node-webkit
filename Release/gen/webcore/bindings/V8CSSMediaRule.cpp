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
#include "V8CSSMediaRule.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CSSRule.h"
#include "V8CSSRuleList.h"
#include "V8DOMWrapper.h"
#include "V8MediaList.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8CSSMediaRule::info = { V8CSSMediaRule::GetTemplate, V8CSSMediaRule::derefObject, 0, 0, V8CSSMediaRule::installPerContextPrototypeProperties, &V8CSSRule::info, WrapperTypeObjectPrototype };

namespace CSSMediaRuleV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSMediaRule* imp = V8CSSMediaRule::toNative(info.Holder());
    RefPtr<MediaList> result = imp->media();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "media", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> cssRulesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSMediaRule* imp = V8CSSMediaRule::toNative(info.Holder());
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
    CSSMediaRule* imp = V8CSSMediaRule::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, rule, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    unsigned result = imp->insertRule(rule, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8UnsignedInteger(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> deleteRuleCallback(const v8::Arguments& args)
{
    CSSMediaRule* imp = V8CSSMediaRule::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    imp->deleteRule(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace CSSMediaRuleV8Internal

static const V8DOMConfiguration::BatchedAttribute V8CSSMediaRuleAttrs[] = {
    // Attribute 'media' (Type: 'readonly attribute' ExtAttr: '')
    {"media", CSSMediaRuleV8Internal::mediaAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssRules' (Type: 'readonly attribute' ExtAttr: '')
    {"cssRules", CSSMediaRuleV8Internal::cssRulesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8CSSMediaRuleCallbacks[] = {
    {"insertRule", CSSMediaRuleV8Internal::insertRuleCallback},
    {"deleteRule", CSSMediaRuleV8Internal::deleteRuleCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSMediaRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "CSSMediaRule", V8CSSRule::GetTemplate(), V8CSSMediaRule::internalFieldCount,
        V8CSSMediaRuleAttrs, WTF_ARRAY_LENGTH(V8CSSMediaRuleAttrs),
        V8CSSMediaRuleCallbacks, WTF_ARRAY_LENGTH(V8CSSMediaRuleCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSMediaRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSMediaRule::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSMediaRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSMediaRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSMediaRule::createWrapper(PassRefPtr<CSSMediaRule> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8CSSMediaRule::derefObject(void* object)
{
    static_cast<CSSMediaRule*>(object)->deref();
}

} // namespace WebCore
