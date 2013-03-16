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
#include "V8CSSRule.h"

#include "BindingState.h"
#include "CSSImportRule.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CSSStyleSheet.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8CSSRule::info = { V8CSSRule::GetTemplate, V8CSSRule::derefObject, 0, 0, V8CSSRule::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace CSSRuleV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    return v8Integer(imp->type(), info.GetIsolate());
}

static v8::Handle<v8::Value> cssTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    return v8StringOrNull(imp->cssText(), info.GetIsolate());
}

static void cssTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setCssText(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> parentStyleSheetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    RefPtr<CSSStyleSheet> result = imp->parentStyleSheet();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "parentStyleSheet", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> parentRuleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSRule* imp = V8CSSRule::toNative(info.Holder());
    RefPtr<CSSRule> result = imp->parentRule();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "parentRule", wrapper);
    }
    return wrapper;
}

} // namespace CSSRuleV8Internal

static const V8DOMConfiguration::BatchedAttribute V8CSSRuleAttrs[] = {
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: '')
    {"type", CSSRuleV8Internal::typeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssText' (Type: 'attribute' ExtAttr: 'TreatNullAs TreatReturnedNullStringAs')
    {"cssText", CSSRuleV8Internal::cssTextAttrGetter, CSSRuleV8Internal::cssTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'parentStyleSheet' (Type: 'readonly attribute' ExtAttr: '')
    {"parentStyleSheet", CSSRuleV8Internal::parentStyleSheetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'parentRule' (Type: 'readonly attribute' ExtAttr: '')
    {"parentRule", CSSRuleV8Internal::parentRuleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedConstant V8CSSRuleConsts[] = {
    {"UNKNOWN_RULE", static_cast<signed int>(0)},
    {"STYLE_RULE", static_cast<signed int>(1)},
    {"CHARSET_RULE", static_cast<signed int>(2)},
    {"IMPORT_RULE", static_cast<signed int>(3)},
    {"MEDIA_RULE", static_cast<signed int>(4)},
    {"FONT_FACE_RULE", static_cast<signed int>(5)},
    {"PAGE_RULE", static_cast<signed int>(6)},
    {"WEBKIT_KEYFRAMES_RULE", static_cast<signed int>(7)},
    {"WEBKIT_KEYFRAME_RULE", static_cast<signed int>(8)},
    {"WEBKIT_REGION_RULE", static_cast<signed int>(16)},
};


COMPILE_ASSERT(0 == CSSRule::UNKNOWN_RULE, CSSRuleEnumUNKNOWN_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == CSSRule::STYLE_RULE, CSSRuleEnumSTYLE_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == CSSRule::CHARSET_RULE, CSSRuleEnumCHARSET_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == CSSRule::IMPORT_RULE, CSSRuleEnumIMPORT_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == CSSRule::MEDIA_RULE, CSSRuleEnumMEDIA_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == CSSRule::FONT_FACE_RULE, CSSRuleEnumFONT_FACE_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == CSSRule::PAGE_RULE, CSSRuleEnumPAGE_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == CSSRule::WEBKIT_KEYFRAMES_RULE, CSSRuleEnumWEBKIT_KEYFRAMES_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == CSSRule::WEBKIT_KEYFRAME_RULE, CSSRuleEnumWEBKIT_KEYFRAME_RULEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(16 == CSSRule::WEBKIT_REGION_RULE, CSSRuleEnumWEBKIT_REGION_RULEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "CSSRule", v8::Persistent<v8::FunctionTemplate>(), V8CSSRule::internalFieldCount,
        V8CSSRuleAttrs, WTF_ARRAY_LENGTH(V8CSSRuleAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8CSSRuleConsts, WTF_ARRAY_LENGTH(V8CSSRuleConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSRule::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSRule::createWrapper(PassRefPtr<CSSRule> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8CSSRule::derefObject(void* object)
{
    static_cast<CSSRule*>(object)->deref();
}

} // namespace WebCore