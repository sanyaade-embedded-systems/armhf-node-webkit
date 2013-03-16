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
#include "V8SVGFEDropShadowElement.h"

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "StylePropertySet.h"
#include "V8Binding.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEDropShadowElement::info = { V8SVGFEDropShadowElement::GetTemplate, V8SVGFEDropShadowElement::derefObject, 0, 0, V8SVGFEDropShadowElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGFEDropShadowElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> in1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->in1Animated(), info, imp);
}

static v8::Handle<v8::Value> dxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->dxAnimated(), info, imp);
}

static v8::Handle<v8::Value> dyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->dyAnimated(), info, imp);
}

static v8::Handle<v8::Value> stdDeviationXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->stdDeviationXAnimated(), info, imp);
}

static v8::Handle<v8::Value> stdDeviationYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->stdDeviationYAnimated(), info, imp);
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->widthAnimated(), info, imp);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->heightAnimated(), info, imp);
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->resultAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> setStdDeviationCallback(const v8::Arguments& args)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(args.Holder());
    V8TRYCATCH(float, stdDeviationX, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(float, stdDeviationY, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    imp->setStdDeviation(stdDeviationX, stdDeviationY);
    return v8Undefined();
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGFEDropShadowElement* imp = V8SVGFEDropShadowElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

} // namespace SVGFEDropShadowElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGFEDropShadowElementAttrs[] = {
    // Attribute 'in1' (Type: 'readonly attribute' ExtAttr: '')
    {"in1", SVGFEDropShadowElementV8Internal::in1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dx' (Type: 'readonly attribute' ExtAttr: '')
    {"dx", SVGFEDropShadowElementV8Internal::dxAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dy' (Type: 'readonly attribute' ExtAttr: '')
    {"dy", SVGFEDropShadowElementV8Internal::dyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'stdDeviationX' (Type: 'readonly attribute' ExtAttr: '')
    {"stdDeviationX", SVGFEDropShadowElementV8Internal::stdDeviationXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'stdDeviationY' (Type: 'readonly attribute' ExtAttr: '')
    {"stdDeviationY", SVGFEDropShadowElementV8Internal::stdDeviationYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEDropShadowElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEDropShadowElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFEDropShadowElementV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFEDropShadowElementV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFEDropShadowElementV8Internal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFEDropShadowElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFEDropShadowElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGFEDropShadowElementCallbacks[] = {
    {"setStdDeviation", SVGFEDropShadowElementV8Internal::setStdDeviationCallback},
    {"getPresentationAttribute", SVGFEDropShadowElementV8Internal::getPresentationAttributeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEDropShadowElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGFEDropShadowElement", V8SVGElement::GetTemplate(), V8SVGFEDropShadowElement::internalFieldCount,
        V8SVGFEDropShadowElementAttrs, WTF_ARRAY_LENGTH(V8SVGFEDropShadowElementAttrs),
        V8SVGFEDropShadowElementCallbacks, WTF_ARRAY_LENGTH(V8SVGFEDropShadowElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEDropShadowElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFEDropShadowElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFEDropShadowElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFEDropShadowElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEDropShadowElement::createWrapper(PassRefPtr<SVGFEDropShadowElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGFEDropShadowElement::derefObject(void* object)
{
    static_cast<SVGFEDropShadowElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)
