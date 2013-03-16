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
#include "V8HTMLPreElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLPreElement::info = { V8HTMLPreElement::GetTemplate, V8HTMLPreElement::derefObject, 0, 0, V8HTMLPreElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLPreElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    return v8Integer(imp->getIntegralAttribute(WebCore::HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::widthAttr, v);
    return;
}

static v8::Handle<v8::Value> wrapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::wrapAttr), info.GetIsolate());
}

static void wrapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLPreElement* imp = V8HTMLPreElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::wrapAttr, v);
    return;
}

} // namespace HTMLPreElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLPreElementAttrs[] = {
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLPreElementV8Internal::widthAttrGetter, HTMLPreElementV8Internal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'wrap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"wrap", HTMLPreElementV8Internal::wrapAttrGetter, HTMLPreElementV8Internal::wrapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLPreElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLPreElement", V8HTMLElement::GetTemplate(), V8HTMLPreElement::internalFieldCount,
        V8HTMLPreElementAttrs, WTF_ARRAY_LENGTH(V8HTMLPreElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLPreElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLPreElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLPreElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLPreElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLPreElement::createWrapper(PassRefPtr<HTMLPreElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLPreElement::derefObject(void* object)
{
    static_cast<HTMLPreElement*>(object)->deref();
}

} // namespace WebCore
