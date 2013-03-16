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
#include "V8SVGPathSegArcRel.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPathSegArc.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGPathSeg.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGPathSegArcRel::info = { V8SVGPathSegArcRel::GetTemplate, V8SVGPathSegArcRel::derefObject, 0, 0, V8SVGPathSegArcRel::installPerContextPrototypeProperties, &V8SVGPathSeg::info, WrapperTypeObjectPrototype };

namespace SVGPathSegArcRelV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8::Number::New(imp->x());
}

static void xAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setX(v);
    return;
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8::Number::New(imp->y());
}

static void yAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setY(v);
    return;
}

static v8::Handle<v8::Value> r1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8::Number::New(imp->r1());
}

static void r1AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setR1(v);
    return;
}

static v8::Handle<v8::Value> r2AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8::Number::New(imp->r2());
}

static void r2AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setR2(v);
    return;
}

static v8::Handle<v8::Value> angleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8::Number::New(imp->angle());
}

static void angleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setAngle(v);
    return;
}

static v8::Handle<v8::Value> largeArcFlagAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8Boolean(imp->largeArcFlag(), info.GetIsolate());
}

static void largeArcFlagAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setLargeArcFlag(v);
    return;
}

static v8::Handle<v8::Value> sweepFlagAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    return v8Boolean(imp->sweepFlag(), info.GetIsolate());
}

static void sweepFlagAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SVGPathSegArcRel* imp = V8SVGPathSegArcRel::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setSweepFlag(v);
    return;
}

} // namespace SVGPathSegArcRelV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGPathSegArcRelAttrs[] = {
    // Attribute 'x' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"x", SVGPathSegArcRelV8Internal::xAttrGetter, SVGPathSegArcRelV8Internal::xAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"y", SVGPathSegArcRelV8Internal::yAttrGetter, SVGPathSegArcRelV8Internal::yAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'r1' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"r1", SVGPathSegArcRelV8Internal::r1AttrGetter, SVGPathSegArcRelV8Internal::r1AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'r2' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"r2", SVGPathSegArcRelV8Internal::r2AttrGetter, SVGPathSegArcRelV8Internal::r2AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'angle' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"angle", SVGPathSegArcRelV8Internal::angleAttrGetter, SVGPathSegArcRelV8Internal::angleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'largeArcFlag' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"largeArcFlag", SVGPathSegArcRelV8Internal::largeArcFlagAttrGetter, SVGPathSegArcRelV8Internal::largeArcFlagAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sweepFlag' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"sweepFlag", SVGPathSegArcRelV8Internal::sweepFlagAttrGetter, SVGPathSegArcRelV8Internal::sweepFlagAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPathSegArcRelTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGPathSegArcRel", V8SVGPathSeg::GetTemplate(), V8SVGPathSegArcRel::internalFieldCount,
        V8SVGPathSegArcRelAttrs, WTF_ARRAY_LENGTH(V8SVGPathSegArcRelAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegArcRel::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegArcRel::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPathSegArcRelTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPathSegArcRel::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPathSegArcRel::createWrapper(PassRefPtr<SVGPathSegArcRel> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGPathSegArcRel::derefObject(void* object)
{
    static_cast<SVGPathSegArcRel*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)