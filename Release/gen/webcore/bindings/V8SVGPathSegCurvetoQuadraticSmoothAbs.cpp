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
#include "V8SVGPathSegCurvetoQuadraticSmoothAbs.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPathSegCurvetoQuadraticSmooth.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGPathSeg.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGPathSegCurvetoQuadraticSmoothAbs::info = { V8SVGPathSegCurvetoQuadraticSmoothAbs::GetTemplate, V8SVGPathSegCurvetoQuadraticSmoothAbs::derefObject, 0, 0, V8SVGPathSegCurvetoQuadraticSmoothAbs::installPerContextPrototypeProperties, &V8SVGPathSeg::info, WrapperTypeObjectPrototype };

namespace SVGPathSegCurvetoQuadraticSmoothAbsV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegCurvetoQuadraticSmoothAbs* imp = V8SVGPathSegCurvetoQuadraticSmoothAbs::toNative(info.Holder());
    return v8::Number::New(imp->x());
}

static void xAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegCurvetoQuadraticSmoothAbs* imp = V8SVGPathSegCurvetoQuadraticSmoothAbs::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setX(v);
    return;
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegCurvetoQuadraticSmoothAbs* imp = V8SVGPathSegCurvetoQuadraticSmoothAbs::toNative(info.Holder());
    return v8::Number::New(imp->y());
}

static void yAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegCurvetoQuadraticSmoothAbs* imp = V8SVGPathSegCurvetoQuadraticSmoothAbs::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setY(v);
    return;
}

} // namespace SVGPathSegCurvetoQuadraticSmoothAbsV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGPathSegCurvetoQuadraticSmoothAbsAttrs[] = {
    // Attribute 'x' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"x", SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttrGetter, SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::xAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"y", SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttrGetter, SVGPathSegCurvetoQuadraticSmoothAbsV8Internal::yAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPathSegCurvetoQuadraticSmoothAbsTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGPathSegCurvetoQuadraticSmoothAbs", V8SVGPathSeg::GetTemplate(), V8SVGPathSegCurvetoQuadraticSmoothAbs::internalFieldCount,
        V8SVGPathSegCurvetoQuadraticSmoothAbsAttrs, WTF_ARRAY_LENGTH(V8SVGPathSegCurvetoQuadraticSmoothAbsAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegCurvetoQuadraticSmoothAbs::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegCurvetoQuadraticSmoothAbs::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPathSegCurvetoQuadraticSmoothAbsTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPathSegCurvetoQuadraticSmoothAbs::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPathSegCurvetoQuadraticSmoothAbs::createWrapper(PassRefPtr<SVGPathSegCurvetoQuadraticSmoothAbs> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<SVGPathSeg*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8SVGPathSegCurvetoQuadraticSmoothAbs::derefObject(void* object)
{
    static_cast<SVGPathSegCurvetoQuadraticSmoothAbs*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
