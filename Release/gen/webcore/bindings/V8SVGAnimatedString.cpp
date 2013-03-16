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
#include "V8SVGAnimatedString.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGAnimatedString::info = { V8SVGAnimatedString::GetTemplate, V8SVGAnimatedString::derefObject, 0, 0, V8SVGAnimatedString::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SVGAnimatedStringV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGAnimatedString* imp = V8SVGAnimatedString::toNative(info.Holder());
    return v8String(imp->baseVal(), info.GetIsolate());
}

static void baseValAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGAnimatedString* imp = V8SVGAnimatedString::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setBaseVal(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> animValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGAnimatedString* imp = V8SVGAnimatedString::toNative(info.Holder());
    return v8String(imp->animVal(), info.GetIsolate());
}

} // namespace SVGAnimatedStringV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGAnimatedStringAttrs[] = {
    // Attribute 'baseVal' (Type: 'attribute' ExtAttr: '')
    {"baseVal", SVGAnimatedStringV8Internal::baseValAttrGetter, SVGAnimatedStringV8Internal::baseValAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animVal' (Type: 'readonly attribute' ExtAttr: '')
    {"animVal", SVGAnimatedStringV8Internal::animValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGAnimatedStringTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGAnimatedString", v8::Persistent<v8::FunctionTemplate>(), V8SVGAnimatedString::internalFieldCount,
        V8SVGAnimatedStringAttrs, WTF_ARRAY_LENGTH(V8SVGAnimatedStringAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedString::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedString::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGAnimatedStringTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGAnimatedString::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGAnimatedString::createWrapper(PassRefPtr<SVGAnimatedString> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGAnimatedString::derefObject(void* object)
{
    static_cast<SVGAnimatedString*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)