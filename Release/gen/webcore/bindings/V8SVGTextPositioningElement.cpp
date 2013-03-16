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
#include "V8SVGTextPositioningElement.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedLengthList.h"
#include "V8SVGAnimatedNumberList.h"
#include "V8SVGTextContentElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGTextPositioningElement::info = { V8SVGTextPositioningElement::GetTemplate, V8SVGTextPositioningElement::derefObject, 0, 0, V8SVGTextPositioningElement::installPerContextPrototypeProperties, &V8SVGTextContentElement::info, WrapperTypeObjectPrototype };

namespace SVGTextPositioningElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTextPositioningElement* imp = V8SVGTextPositioningElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTextPositioningElement* imp = V8SVGTextPositioningElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> dxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTextPositioningElement* imp = V8SVGTextPositioningElement::toNative(info.Holder());
    return toV8Fast(imp->dxAnimated(), info, imp);
}

static v8::Handle<v8::Value> dyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTextPositioningElement* imp = V8SVGTextPositioningElement::toNative(info.Holder());
    return toV8Fast(imp->dyAnimated(), info, imp);
}

static v8::Handle<v8::Value> rotateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTextPositioningElement* imp = V8SVGTextPositioningElement::toNative(info.Holder());
    return toV8Fast(imp->rotateAnimated(), info, imp);
}

} // namespace SVGTextPositioningElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGTextPositioningElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGTextPositioningElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGTextPositioningElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dx' (Type: 'readonly attribute' ExtAttr: '')
    {"dx", SVGTextPositioningElementV8Internal::dxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dy' (Type: 'readonly attribute' ExtAttr: '')
    {"dy", SVGTextPositioningElementV8Internal::dyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rotate' (Type: 'readonly attribute' ExtAttr: '')
    {"rotate", SVGTextPositioningElementV8Internal::rotateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGTextPositioningElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGTextPositioningElement", V8SVGTextContentElement::GetTemplate(), V8SVGTextPositioningElement::internalFieldCount,
        V8SVGTextPositioningElementAttrs, WTF_ARRAY_LENGTH(V8SVGTextPositioningElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTextPositioningElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGTextPositioningElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGTextPositioningElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGTextPositioningElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGTextPositioningElement::createWrapper(PassRefPtr<SVGTextPositioningElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGTextPositioningElement::derefObject(void* object)
{
    static_cast<SVGTextPositioningElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)