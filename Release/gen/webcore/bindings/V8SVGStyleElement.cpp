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
#include "V8SVGStyleElement.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGElement.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGStyleElement::info = { V8SVGStyleElement::GetTemplate, V8SVGStyleElement::derefObject, 0, 0, V8SVGStyleElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGStyleElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> disabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8Boolean(imp->disabled(), info.GetIsolate());
}

static void disabledAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setDisabled(v);
    return;
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8String(imp->type(), info.GetIsolate());
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setType(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> mediaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8String(imp->media(), info.GetIsolate());
}

static void mediaAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setMedia(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> titleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8String(imp->title(), info.GetIsolate());
}

static void titleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setTitle(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8String(imp->xmllang(), info.GetIsolate());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    return v8String(imp->xmlspace(), info.GetIsolate());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGStyleElement* imp = V8SVGStyleElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    imp->setXmlspace(v);
    return;
}

} // namespace SVGStyleElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGStyleElementAttrs[] = {
    // Attribute 'disabled' (Type: 'attribute' ExtAttr: '')
    {"disabled", SVGStyleElementV8Internal::disabledAttrGetter, SVGStyleElementV8Internal::disabledAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: '')
    {"type", SVGStyleElementV8Internal::typeAttrGetter, SVGStyleElementV8Internal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'media' (Type: 'attribute' ExtAttr: '')
    {"media", SVGStyleElementV8Internal::mediaAttrGetter, SVGStyleElementV8Internal::mediaAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'title' (Type: 'attribute' ExtAttr: '')
    {"title", SVGStyleElementV8Internal::titleAttrGetter, SVGStyleElementV8Internal::titleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGStyleElementV8Internal::xmllangAttrGetter, SVGStyleElementV8Internal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGStyleElementV8Internal::xmlspaceAttrGetter, SVGStyleElementV8Internal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGStyleElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGStyleElement", V8SVGElement::GetTemplate(), V8SVGStyleElement::internalFieldCount,
        V8SVGStyleElementAttrs, WTF_ARRAY_LENGTH(V8SVGStyleElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGStyleElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGStyleElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGStyleElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGStyleElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGStyleElement::createWrapper(PassRefPtr<SVGStyleElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Node*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8SVGStyleElement::derefObject(void* object)
{
    static_cast<SVGStyleElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
