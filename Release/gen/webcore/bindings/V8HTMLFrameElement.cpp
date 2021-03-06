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
#include "V8HTMLFrameElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8Document.h"
#include "V8HTMLElement.h"
#include "V8SVGDocument.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLFrameElement::info = { V8HTMLFrameElement::GetTemplate, V8HTMLFrameElement::derefObject, 0, 0, V8HTMLFrameElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLFrameElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> frameBorderAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::frameborderAttr), info.GetIsolate());
}

static void frameBorderAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::frameborderAttr, stringResource);
}

static v8::Handle<v8::Value> longDescAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::longdescAttr), info.GetIsolate());
}

static void longDescAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::longdescAttr, stringResource);
}

static v8::Handle<v8::Value> marginHeightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::marginheightAttr), info.GetIsolate());
}

static void marginHeightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::marginheightAttr, stringResource);
}

static v8::Handle<v8::Value> marginWidthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::marginwidthAttr), info.GetIsolate());
}

static void marginWidthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::marginwidthAttr, stringResource);
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

static v8::Handle<v8::Value> noResizeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::noresizeAttr), info.GetIsolate());
}

static void noResizeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::noresizeAttr, v);
    return;
}

static v8::Handle<v8::Value> scrollingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::scrollingAttr), info.GetIsolate());
}

static void scrollingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::scrollingAttr, stringResource);
}

static v8::Handle<v8::Value> srcAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::srcAttr), info.GetIsolate());
}

static void srcAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::srcAttr, stringResource);
}

static v8::Handle<v8::Value> contentDocumentAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    if (!BindingSecurity::shouldAllowAccessToNode(BindingState::instance(), imp->contentDocument()))
        return v8::Handle<v8::Value>(v8Null(info.GetIsolate()));

    return toV8Fast(imp->contentDocument(), info, imp);
}

static v8::Handle<v8::Value> contentWindowAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return toV8Fast(imp->contentWindow(), info, imp);
}

static v8::Handle<v8::Value> locationAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return v8String(imp->location(), info.GetIsolate());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return v8Integer(imp->width(), info.GetIsolate());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(info.Holder());
    return v8Integer(imp->height(), info.GetIsolate());
}

static v8::Handle<v8::Value> getSVGDocumentCallback(const v8::Arguments& args)
{
    HTMLFrameElement* imp = V8HTMLFrameElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (!BindingSecurity::shouldAllowAccessToNode(BindingState::instance(), imp->getSVGDocument(ec)))
        return v8::Handle<v8::Value>(v8Null(args.GetIsolate()));
    RefPtr<SVGDocument> result = imp->getSVGDocument(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(result.release(), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace HTMLFrameElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLFrameElementAttrs[] = {
    // Attribute 'frameBorder' (Type: 'attribute' ExtAttr: 'Reflect')
    {"frameBorder", HTMLFrameElementV8Internal::frameBorderAttrGetter, HTMLFrameElementV8Internal::frameBorderAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'longDesc' (Type: 'attribute' ExtAttr: 'Reflect')
    {"longDesc", HTMLFrameElementV8Internal::longDescAttrGetter, HTMLFrameElementV8Internal::longDescAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'marginHeight' (Type: 'attribute' ExtAttr: 'Reflect')
    {"marginHeight", HTMLFrameElementV8Internal::marginHeightAttrGetter, HTMLFrameElementV8Internal::marginHeightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'marginWidth' (Type: 'attribute' ExtAttr: 'Reflect')
    {"marginWidth", HTMLFrameElementV8Internal::marginWidthAttrGetter, HTMLFrameElementV8Internal::marginWidthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'Reflect')
    {"name", HTMLFrameElementV8Internal::nameAttrGetter, HTMLFrameElementV8Internal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'noResize' (Type: 'attribute' ExtAttr: 'Reflect')
    {"noResize", HTMLFrameElementV8Internal::noResizeAttrGetter, HTMLFrameElementV8Internal::noResizeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scrolling' (Type: 'attribute' ExtAttr: 'Reflect')
    {"scrolling", HTMLFrameElementV8Internal::scrollingAttrGetter, HTMLFrameElementV8Internal::scrollingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'src' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"src", HTMLFrameElementV8Internal::srcAttrGetter, HTMLFrameElementV8Internal::srcAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentDocument' (Type: 'readonly attribute' ExtAttr: 'CheckSecurityForNode')
    {"contentDocument", HTMLFrameElementV8Internal::contentDocumentAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentWindow' (Type: 'readonly attribute' ExtAttr: '')
    {"contentWindow", HTMLFrameElementV8Internal::contentWindowAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'location' (Type: 'attribute' ExtAttr: 'CustomSetter TreatNullAs')
    {"location", HTMLFrameElementV8Internal::locationAttrGetter, V8HTMLFrameElement::locationAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", HTMLFrameElementV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", HTMLFrameElementV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8HTMLFrameElementCallbacks[] = {
    {"getSVGDocument", HTMLFrameElementV8Internal::getSVGDocumentCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLFrameElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLFrameElement", V8HTMLElement::GetTemplate(), V8HTMLFrameElement::internalFieldCount,
        V8HTMLFrameElementAttrs, WTF_ARRAY_LENGTH(V8HTMLFrameElementAttrs),
        V8HTMLFrameElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLFrameElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLFrameElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLFrameElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLFrameElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLFrameElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLFrameElement::createWrapper(PassRefPtr<HTMLFrameElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLFrameElement::derefObject(void* object)
{
    static_cast<HTMLFrameElement*>(object)->deref();
}

} // namespace WebCore
