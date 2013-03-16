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
#include "V8CSSValue.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8CSSValue::info = { V8CSSValue::GetTemplate, V8CSSValue::derefObject, 0, 0, V8CSSValue::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace CSSValueV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> cssTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSValue* imp = V8CSSValue::toNative(info.Holder());
    return v8StringOrNull(imp->cssText(), info.GetIsolate());
}

static void cssTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    CSSValue* imp = V8CSSValue::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setCssText(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> cssValueTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    CSSValue* imp = V8CSSValue::toNative(info.Holder());
    return v8Integer(imp->cssValueType(), info.GetIsolate());
}

} // namespace CSSValueV8Internal

static const V8DOMConfiguration::BatchedAttribute V8CSSValueAttrs[] = {
    // Attribute 'cssText' (Type: 'attribute' ExtAttr: 'TreatNullAs TreatReturnedNullStringAs')
    {"cssText", CSSValueV8Internal::cssTextAttrGetter, CSSValueV8Internal::cssTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssValueType' (Type: 'readonly attribute' ExtAttr: '')
    {"cssValueType", CSSValueV8Internal::cssValueTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedConstant V8CSSValueConsts[] = {
    {"CSS_INHERIT", static_cast<signed int>(0)},
    {"CSS_PRIMITIVE_VALUE", static_cast<signed int>(1)},
    {"CSS_VALUE_LIST", static_cast<signed int>(2)},
    {"CSS_CUSTOM", static_cast<signed int>(3)},
};


COMPILE_ASSERT(0 == CSSValue::CSS_INHERIT, CSSValueEnumCSS_INHERITIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == CSSValue::CSS_PRIMITIVE_VALUE, CSSValueEnumCSS_PRIMITIVE_VALUEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == CSSValue::CSS_VALUE_LIST, CSSValueEnumCSS_VALUE_LISTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == CSSValue::CSS_CUSTOM, CSSValueEnumCSS_CUSTOMIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSValueTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "CSSValue", v8::Persistent<v8::FunctionTemplate>(), V8CSSValue::internalFieldCount,
        V8CSSValueAttrs, WTF_ARRAY_LENGTH(V8CSSValueAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8CSSValueConsts, WTF_ARRAY_LENGTH(V8CSSValueConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSValue::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSValue::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSValueTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSValue::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSValue::createWrapper(PassRefPtr<CSSValue> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8CSSValue::derefObject(void* object)
{
    static_cast<CSSValue*>(object)->deref();
}

} // namespace WebCore