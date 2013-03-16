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
#include "V8SVGGlyphRefElement.h"

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGNames.h"
#include "StylePropertySet.h"
#include "V8Binding.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGGlyphRefElement::info = { V8SVGGlyphRefElement::GetTemplate, V8SVGGlyphRefElement::derefObject, 0, 0, V8SVGGlyphRefElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGGlyphRefElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> glyphRefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return v8String(imp->glyphRef(), info.GetIsolate());
}

static void glyphRefAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ExceptionCode ec = 0;
    imp->setGlyphRef(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> formatAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::SVGNames::formatAttr), info.GetIsolate());
}

static void formatAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(SVGNames::formatAttr, stringResource);
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return v8::Number::New(imp->x());
}

static void xAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setX(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return v8::Number::New(imp->y());
}

static void yAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setY(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> dxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return v8::Number::New(imp->dx());
}

static void dxAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setDx(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> dyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return v8::Number::New(imp->dy());
}

static void dyAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setDy(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return toV8Fast(imp->hrefAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGGlyphRefElement* imp = V8SVGGlyphRefElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

} // namespace SVGGlyphRefElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGGlyphRefElementAttrs[] = {
    // Attribute 'glyphRef' (Type: 'attribute' ExtAttr: '')
    {"glyphRef", SVGGlyphRefElementV8Internal::glyphRefAttrGetter, SVGGlyphRefElementV8Internal::glyphRefAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'format' (Type: 'attribute' ExtAttr: 'Reflect')
    {"format", SVGGlyphRefElementV8Internal::formatAttrGetter, SVGGlyphRefElementV8Internal::formatAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'attribute' ExtAttr: '')
    {"x", SVGGlyphRefElementV8Internal::xAttrGetter, SVGGlyphRefElementV8Internal::xAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'attribute' ExtAttr: '')
    {"y", SVGGlyphRefElementV8Internal::yAttrGetter, SVGGlyphRefElementV8Internal::yAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dx' (Type: 'attribute' ExtAttr: '')
    {"dx", SVGGlyphRefElementV8Internal::dxAttrGetter, SVGGlyphRefElementV8Internal::dxAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dy' (Type: 'attribute' ExtAttr: '')
    {"dy", SVGGlyphRefElementV8Internal::dyAttrGetter, SVGGlyphRefElementV8Internal::dyAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: '')
    {"href", SVGGlyphRefElementV8Internal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGGlyphRefElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGGlyphRefElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGGlyphRefElementCallbacks[] = {
    {"getPresentationAttribute", SVGGlyphRefElementV8Internal::getPresentationAttributeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGGlyphRefElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGGlyphRefElement", V8SVGElement::GetTemplate(), V8SVGGlyphRefElement::internalFieldCount,
        V8SVGGlyphRefElementAttrs, WTF_ARRAY_LENGTH(V8SVGGlyphRefElementAttrs),
        V8SVGGlyphRefElementCallbacks, WTF_ARRAY_LENGTH(V8SVGGlyphRefElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGGlyphRefElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGGlyphRefElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGGlyphRefElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGGlyphRefElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGGlyphRefElement::createWrapper(PassRefPtr<SVGGlyphRefElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGGlyphRefElement::derefObject(void* object)
{
    static_cast<SVGGlyphRefElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)