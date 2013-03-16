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
#include "V8CSSImportRule.h"

#include "BindingState.h"
#include "CSSImportRule.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CSSRule.h"
#include "V8CSSStyleSheet.h"
#include "V8DOMWrapper.h"
#include "V8MediaList.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8CSSImportRule::info = { V8CSSImportRule::GetTemplate, V8CSSImportRule::derefObject, 0, 0, V8CSSImportRule::installPerContextPrototypeProperties, &V8CSSRule::info, WrapperTypeObjectPrototype };

namespace CSSImportRuleV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    return v8StringOrNull(imp->href(), info.GetIsolate());
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    RefPtr<MediaList> result = imp->media();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "media", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> styleSheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSImportRule* imp = V8CSSImportRule::toNative(info.Holder());
    RefPtr<CSSStyleSheet> result = imp->styleSheet();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "styleSheet", wrapper);
    }
    return wrapper;
}

} // namespace CSSImportRuleV8Internal

static const V8DOMConfiguration::BatchedAttribute V8CSSImportRuleAttrs[] = {
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: 'TreatReturnedNullStringAs')
    {"href", CSSImportRuleV8Internal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'readonly attribute' ExtAttr: '')
    {"media", CSSImportRuleV8Internal::mediaAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'styleSheet' (Type: 'readonly attribute' ExtAttr: '')
    {"styleSheet", CSSImportRuleV8Internal::styleSheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSImportRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "CSSImportRule", V8CSSRule::GetTemplate(), V8CSSImportRule::internalFieldCount,
        V8CSSImportRuleAttrs, WTF_ARRAY_LENGTH(V8CSSImportRuleAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSImportRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSImportRule::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSImportRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSImportRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSImportRule::createWrapper(PassRefPtr<CSSImportRule> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8CSSImportRule::derefObject(void* object)
{
    static_cast<CSSImportRule*>(object)->deref();
}

} // namespace WebCore
