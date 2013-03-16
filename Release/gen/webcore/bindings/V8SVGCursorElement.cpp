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
#include "V8SVGCursorElement.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPropertyTearOff.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGCursorElement::info = { V8SVGCursorElement::GetTemplate, V8SVGCursorElement::derefObject, 0, 0, V8SVGCursorElement::installPerContextPrototypeProperties, &V8SVGElement::info, WrapperTypeObjectPrototype };

namespace SVGCursorElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(imp->xAnimated(), info, imp);
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(imp->yAnimated(), info, imp);
}

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(imp->hrefAnimated(), info, imp);
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())), info, imp);
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())), info, imp);
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())), info, imp);
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(info.Holder());
    return toV8Fast(imp->externalResourcesRequiredAnimated(), info, imp);
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    SVGCursorElement* imp = V8SVGCursorElement::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, extension, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return v8Boolean(imp->hasExtension(extension), args.GetIsolate());
}

} // namespace SVGCursorElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGCursorElementAttrs[] = {
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGCursorElementV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGCursorElementV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'href' (Type: 'readonly attribute' ExtAttr: '')
    {"href", SVGCursorElementV8Internal::hrefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGCursorElementV8Internal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGCursorElementV8Internal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGCursorElementV8Internal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGCursorElementV8Internal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGCursorElementCallbacks[] = {
    {"hasExtension", SVGCursorElementV8Internal::hasExtensionCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGCursorElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGCursorElement", V8SVGElement::GetTemplate(), V8SVGCursorElement::internalFieldCount,
        V8SVGCursorElementAttrs, WTF_ARRAY_LENGTH(V8SVGCursorElementAttrs),
        V8SVGCursorElementCallbacks, WTF_ARRAY_LENGTH(V8SVGCursorElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGCursorElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGCursorElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGCursorElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGCursorElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGCursorElement::createWrapper(PassRefPtr<SVGCursorElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGCursorElement::derefObject(void* object)
{
    static_cast<SVGCursorElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
