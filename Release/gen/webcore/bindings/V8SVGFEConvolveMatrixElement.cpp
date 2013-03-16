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
#include "V8SVGFEConvolveMatrixElement.h"

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
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedInteger.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedNumberList.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEConvolveMatrixElement::info = { V8SVGFEConvolveMatrixElement::GetTemplate, V8SVGFEConvolveMatrixElement::derefObject, 0, 0, V8SVGFEConvolveMatrixElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGFEConvolveMatrixElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> in1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->in1Animated(), info, imp);
}

static v8::Handle<v8::Value> orderXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->orderXAnimated(), info, imp);
}

static v8::Handle<v8::Value> orderYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->orderYAnimated(), info, imp);
}

static v8::Handle<v8::Value> kernelMatrixAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->kernelMatrixAnimated(), info, imp);
}

static v8::Handle<v8::Value> divisorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->divisorAnimated(), info, imp);
}

static v8::Handle<v8::Value> biasAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->biasAnimated(), info, imp);
}

static v8::Handle<v8::Value> targetXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->targetXAnimated(), info, imp);
}

static v8::Handle<v8::Value> targetYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->targetYAnimated(), info, imp);
}

static v8::Handle<v8::Value> edgeModeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(static_pointer_cast<SVGAnimatedEnumeration>(imp->edgeModeAnimated()), info, imp);
}

static v8::Handle<v8::Value> kernelUnitLengthXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->kernelUnitLengthXAnimated(), info, imp);
}

static v8::Handle<v8::Value> kernelUnitLengthYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->kernelUnitLengthYAnimated(), info, imp);
}

static v8::Handle<v8::Value> preserveAlphaAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->preserveAlphaAnimated(), info, imp);
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->widthAnimated(), info, imp);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->heightAnimated(), info, imp);
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->resultAnimated(), info, imp);
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->classNameAnimated(), info, imp);
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(info.Holder());
    return toV8Fast(imp->style(), info, imp);
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    SVGFEConvolveMatrixElement* imp = V8SVGFEConvolveMatrixElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8Fast(imp->getPresentationAttribute(name), args, imp);
}

} // namespace SVGFEConvolveMatrixElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGFEConvolveMatrixElementAttrs[] = {
    // Attribute 'in1' (Type: 'readonly attribute' ExtAttr: '')
    {"in1", SVGFEConvolveMatrixElementV8Internal::in1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'orderX' (Type: 'readonly attribute' ExtAttr: '')
    {"orderX", SVGFEConvolveMatrixElementV8Internal::orderXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'orderY' (Type: 'readonly attribute' ExtAttr: '')
    {"orderY", SVGFEConvolveMatrixElementV8Internal::orderYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'kernelMatrix' (Type: 'readonly attribute' ExtAttr: '')
    {"kernelMatrix", SVGFEConvolveMatrixElementV8Internal::kernelMatrixAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'divisor' (Type: 'readonly attribute' ExtAttr: '')
    {"divisor", SVGFEConvolveMatrixElementV8Internal::divisorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bias' (Type: 'readonly attribute' ExtAttr: '')
    {"bias", SVGFEConvolveMatrixElementV8Internal::biasAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'targetX' (Type: 'readonly attribute' ExtAttr: '')
    {"targetX", SVGFEConvolveMatrixElementV8Internal::targetXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'targetY' (Type: 'readonly attribute' ExtAttr: '')
    {"targetY", SVGFEConvolveMatrixElementV8Internal::targetYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'edgeMode' (Type: 'readonly attribute' ExtAttr: '')
    {"edgeMode", SVGFEConvolveMatrixElementV8Internal::edgeModeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'kernelUnitLengthX' (Type: 'readonly attribute' ExtAttr: '')
    {"kernelUnitLengthX", SVGFEConvolveMatrixElementV8Internal::kernelUnitLengthXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'kernelUnitLengthY' (Type: 'readonly attribute' ExtAttr: '')
    {"kernelUnitLengthY", SVGFEConvolveMatrixElementV8Internal::kernelUnitLengthYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'preserveAlpha' (Type: 'readonly attribute' ExtAttr: '')
    {"preserveAlpha", SVGFEConvolveMatrixElementV8Internal::preserveAlphaAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEConvolveMatrixElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEConvolveMatrixElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFEConvolveMatrixElementV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFEConvolveMatrixElementV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFEConvolveMatrixElementV8Internal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFEConvolveMatrixElementV8Internal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFEConvolveMatrixElementV8Internal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGFEConvolveMatrixElementCallbacks[] = {
    {"getPresentationAttribute", SVGFEConvolveMatrixElementV8Internal::getPresentationAttributeCallback},
};

static const V8DOMConfiguration::BatchedConstant V8SVGFEConvolveMatrixElementConsts[] = {
    {"SVG_EDGEMODE_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_EDGEMODE_DUPLICATE", static_cast<signed int>(1)},
    {"SVG_EDGEMODE_WRAP", static_cast<signed int>(2)},
    {"SVG_EDGEMODE_NONE", static_cast<signed int>(3)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEConvolveMatrixElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGFEConvolveMatrixElement", V8SVGElement::GetTemplate(), V8SVGFEConvolveMatrixElement::internalFieldCount,
        V8SVGFEConvolveMatrixElementAttrs, WTF_ARRAY_LENGTH(V8SVGFEConvolveMatrixElementAttrs),
        V8SVGFEConvolveMatrixElementCallbacks, WTF_ARRAY_LENGTH(V8SVGFEConvolveMatrixElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8SVGFEConvolveMatrixElementConsts, WTF_ARRAY_LENGTH(V8SVGFEConvolveMatrixElementConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEConvolveMatrixElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFEConvolveMatrixElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFEConvolveMatrixElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFEConvolveMatrixElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEConvolveMatrixElement::createWrapper(PassRefPtr<SVGFEConvolveMatrixElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGFEConvolveMatrixElement::derefObject(void* object)
{
    static_cast<SVGFEConvolveMatrixElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)