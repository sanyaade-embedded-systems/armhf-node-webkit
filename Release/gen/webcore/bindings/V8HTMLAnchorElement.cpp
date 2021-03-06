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
#include "V8HTMLAnchorElement.h"

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

WrapperTypeInfo V8HTMLAnchorElement::info = { V8HTMLAnchorElement::GetTemplate, V8HTMLAnchorElement::derefObject, 0, 0, V8HTMLAnchorElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLAnchorElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> charsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::charsetAttr), info.GetIsolate());
}

static void charsetAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::charsetAttr, stringResource);
}

static v8::Handle<v8::Value> coordsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::coordsAttr), info.GetIsolate());
}

static void coordsAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::coordsAttr, stringResource);
}

#if ENABLE(DOWNLOAD_ATTRIBUTE)

static v8::Handle<v8::Value> downloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::downloadAttr), info.GetIsolate());
}

#endif // ENABLE(DOWNLOAD_ATTRIBUTE)

#if ENABLE(DOWNLOAD_ATTRIBUTE)

static void downloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::downloadAttr, stringResource);
}

#endif // ENABLE(DOWNLOAD_ATTRIBUTE)

static v8::Handle<v8::Value> hrefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::hrefAttr), info.GetIsolate());
}

static void hrefAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::hrefAttr, stringResource);
}

static v8::Handle<v8::Value> hreflangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::hreflangAttr), info.GetIsolate());
}

static void hreflangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::hreflangAttr, stringResource);
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->getNameAttribute(), info.GetIsolate());
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::nameAttr, stringResource);
}

static v8::Handle<v8::Value> pingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::pingAttr), info.GetIsolate());
}

static void pingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::pingAttr, stringResource);
}

static v8::Handle<v8::Value> relAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::relAttr), info.GetIsolate());
}

static void relAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::relAttr, stringResource);
}

static v8::Handle<v8::Value> revAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::revAttr), info.GetIsolate());
}

static void revAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::revAttr, stringResource);
}

static v8::Handle<v8::Value> shapeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::shapeAttr), info.GetIsolate());
}

static void shapeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::shapeAttr, stringResource);
}

static v8::Handle<v8::Value> targetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::targetAttr), info.GetIsolate());
}

static void targetAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::targetAttr, stringResource);
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::typeAttr), info.GetIsolate());
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::typeAttr, stringResource);
}

static v8::Handle<v8::Value> hashAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->hash(), info.GetIsolate());
}

static void hashAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setHash(v);
    return;
}

static v8::Handle<v8::Value> hostAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->host(), info.GetIsolate());
}

static void hostAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setHost(v);
    return;
}

static v8::Handle<v8::Value> hostnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->hostname(), info.GetIsolate());
}

static void hostnameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setHostname(v);
    return;
}

static v8::Handle<v8::Value> pathnameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->pathname(), info.GetIsolate());
}

static void pathnameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setPathname(v);
    return;
}

static v8::Handle<v8::Value> portAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->port(), info.GetIsolate());
}

static void portAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setPort(v);
    return;
}

static v8::Handle<v8::Value> protocolAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->protocol(), info.GetIsolate());
}

static void protocolAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setProtocol(v);
    return;
}

static v8::Handle<v8::Value> searchAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->search(), info.GetIsolate());
}

static void searchAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    imp->setSearch(v);
    return;
}

static v8::Handle<v8::Value> originAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->origin(), info.GetIsolate());
}

static v8::Handle<v8::Value> textAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(info.Holder());
    return v8String(imp->text(), info.GetIsolate());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    HTMLAnchorElement* imp = V8HTMLAnchorElement::toNative(args.Holder());
    return v8String(imp->toString(), args.GetIsolate());
}

} // namespace HTMLAnchorElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLAnchorElementAttrs[] = {
    // Attribute 'charset' (Type: 'attribute' ExtAttr: 'Reflect')
    {"charset", HTMLAnchorElementV8Internal::charsetAttrGetter, HTMLAnchorElementV8Internal::charsetAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'coords' (Type: 'attribute' ExtAttr: 'Reflect')
    {"coords", HTMLAnchorElementV8Internal::coordsAttrGetter, HTMLAnchorElementV8Internal::coordsAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(DOWNLOAD_ATTRIBUTE)
    // Attribute 'download' (Type: 'attribute' ExtAttr: 'Reflect Conditional')
    {"download", HTMLAnchorElementV8Internal::downloadAttrGetter, HTMLAnchorElementV8Internal::downloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(DOWNLOAD_ATTRIBUTE)
    // Attribute 'href' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"href", HTMLAnchorElementV8Internal::hrefAttrGetter, HTMLAnchorElementV8Internal::hrefAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hreflang' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hreflang", HTMLAnchorElementV8Internal::hreflangAttrGetter, HTMLAnchorElementV8Internal::hreflangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'Reflect')
    {"name", HTMLAnchorElementV8Internal::nameAttrGetter, HTMLAnchorElementV8Internal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ping' (Type: 'attribute' ExtAttr: 'Reflect')
    {"ping", HTMLAnchorElementV8Internal::pingAttrGetter, HTMLAnchorElementV8Internal::pingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rel' (Type: 'attribute' ExtAttr: 'Reflect')
    {"rel", HTMLAnchorElementV8Internal::relAttrGetter, HTMLAnchorElementV8Internal::relAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rev' (Type: 'attribute' ExtAttr: 'Reflect')
    {"rev", HTMLAnchorElementV8Internal::revAttrGetter, HTMLAnchorElementV8Internal::revAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shape' (Type: 'attribute' ExtAttr: 'Reflect')
    {"shape", HTMLAnchorElementV8Internal::shapeAttrGetter, HTMLAnchorElementV8Internal::shapeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'target' (Type: 'attribute' ExtAttr: 'Reflect')
    {"target", HTMLAnchorElementV8Internal::targetAttrGetter, HTMLAnchorElementV8Internal::targetAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLAnchorElementV8Internal::typeAttrGetter, HTMLAnchorElementV8Internal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hash' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"hash", HTMLAnchorElementV8Internal::hashAttrGetter, HTMLAnchorElementV8Internal::hashAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'host' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"host", HTMLAnchorElementV8Internal::hostAttrGetter, HTMLAnchorElementV8Internal::hostAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hostname' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"hostname", HTMLAnchorElementV8Internal::hostnameAttrGetter, HTMLAnchorElementV8Internal::hostnameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pathname' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"pathname", HTMLAnchorElementV8Internal::pathnameAttrGetter, HTMLAnchorElementV8Internal::pathnameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'port' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"port", HTMLAnchorElementV8Internal::portAttrGetter, HTMLAnchorElementV8Internal::portAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'protocol' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"protocol", HTMLAnchorElementV8Internal::protocolAttrGetter, HTMLAnchorElementV8Internal::protocolAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'search' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"search", HTMLAnchorElementV8Internal::searchAttrGetter, HTMLAnchorElementV8Internal::searchAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'origin' (Type: 'readonly attribute' ExtAttr: 'TreatNullAs')
    {"origin", HTMLAnchorElementV8Internal::originAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'text' (Type: 'readonly attribute' ExtAttr: '')
    {"text", HTMLAnchorElementV8Internal::textAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLAnchorElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLAnchorElement", V8HTMLElement::GetTemplate(), V8HTMLAnchorElement::internalFieldCount,
        V8HTMLAnchorElementAttrs, WTF_ARRAY_LENGTH(V8HTMLAnchorElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    proto->Set(v8::String::NewSymbol("toString"), v8::FunctionTemplate::New(HTMLAnchorElementV8Internal::toStringCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAnchorElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLAnchorElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLAnchorElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLAnchorElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLAnchorElement::createWrapper(PassRefPtr<HTMLAnchorElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLAnchorElement::derefObject(void* object)
{
    static_cast<HTMLAnchorElement*>(object)->deref();
}

} // namespace WebCore
