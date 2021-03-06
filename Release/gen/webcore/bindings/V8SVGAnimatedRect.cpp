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
#include "V8SVGAnimatedRect.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGRect.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGAnimatedRect::info = { V8SVGAnimatedRect::GetTemplate, V8SVGAnimatedRect::derefObject, 0, 0, V8SVGAnimatedRect::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SVGAnimatedRectV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    return toV8Fast(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->baseVal()), info, imp);
}

static v8::Handle<v8::Value> animValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    return toV8Fast(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->animVal()), info, imp);
}

} // namespace SVGAnimatedRectV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGAnimatedRectAttrs[] = {
    // Attribute 'baseVal' (Type: 'readonly attribute' ExtAttr: '')
    {"baseVal", SVGAnimatedRectV8Internal::baseValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animVal' (Type: 'readonly attribute' ExtAttr: '')
    {"animVal", SVGAnimatedRectV8Internal::animValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGAnimatedRectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGAnimatedRect", v8::Persistent<v8::FunctionTemplate>(), V8SVGAnimatedRect::internalFieldCount,
        V8SVGAnimatedRectAttrs, WTF_ARRAY_LENGTH(V8SVGAnimatedRectAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGAnimatedRectTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGAnimatedRect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGAnimatedRect::createWrapper(PassRefPtr<SVGAnimatedRect> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGAnimatedRect::derefObject(void* object)
{
    static_cast<SVGAnimatedRect*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
