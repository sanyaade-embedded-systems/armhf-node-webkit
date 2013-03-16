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
#include "V8SVGFESpotLightElement.h"

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGFESpotLightElement::info = { V8SVGFESpotLightElement::GetTemplate, V8SVGFESpotLightElement::derefObject, 0, 0, V8SVGFESpotLightElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGFESpotLightElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> zAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->zAnimated(), info, imp);
}

static v8::Handle<v8::Value> pointsAtXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->pointsAtXAnimated(), info, imp);
}

static v8::Handle<v8::Value> pointsAtYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->pointsAtYAnimated(), info, imp);
}

static v8::Handle<v8::Value> pointsAtZAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->pointsAtZAnimated(), info, imp);
}

static v8::Handle<v8::Value> specularExponentAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->specularExponentAnimated(), info, imp);
}

static v8::Handle<v8::Value> limitingConeAngleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGFESpotLightElement* imp = V8SVGFESpotLightElement::toNative(info.Holder());
    return toV8Fast(imp->limitingConeAngleAnimated(), info, imp);
}

} // namespace SVGFESpotLightElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGFESpotLightElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFESpotLightElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFESpotLightElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'z' (Type: 'readonly attribute' ExtAttr: '')
    {"z", SVGFESpotLightElementV8Internal::zAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pointsAtX' (Type: 'readonly attribute' ExtAttr: '')
    {"pointsAtX", SVGFESpotLightElementV8Internal::pointsAtXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pointsAtY' (Type: 'readonly attribute' ExtAttr: '')
    {"pointsAtY", SVGFESpotLightElementV8Internal::pointsAtYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pointsAtZ' (Type: 'readonly attribute' ExtAttr: '')
    {"pointsAtZ", SVGFESpotLightElementV8Internal::pointsAtZAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'specularExponent' (Type: 'readonly attribute' ExtAttr: '')
    {"specularExponent", SVGFESpotLightElementV8Internal::specularExponentAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'limitingConeAngle' (Type: 'readonly attribute' ExtAttr: '')
    {"limitingConeAngle", SVGFESpotLightElementV8Internal::limitingConeAngleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFESpotLightElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGFESpotLightElement", V8SVGElement::GetTemplate(), V8SVGFESpotLightElement::internalFieldCount,
        V8SVGFESpotLightElementAttrs, WTF_ARRAY_LENGTH(V8SVGFESpotLightElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFESpotLightElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFESpotLightElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFESpotLightElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFESpotLightElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFESpotLightElement::createWrapper(PassRefPtr<SVGFESpotLightElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGFESpotLightElement::derefObject(void* object)
{
    static_cast<SVGFESpotLightElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILTERS) && ENABLE(SVG)