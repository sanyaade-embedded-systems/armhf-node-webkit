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
#include "V8HTMLMarqueeElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLMarqueeElement::info = { V8HTMLMarqueeElement::GetTemplate, V8HTMLMarqueeElement::derefObject, 0, 0, V8HTMLMarqueeElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLMarqueeElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> behaviorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::behaviorAttr), info.GetIsolate());
}

static void behaviorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::behaviorAttr, stringResource);
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::bgcolorAttr), info.GetIsolate());
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::bgcolorAttr, stringResource);
}

static v8::Handle<v8::Value> directionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::directionAttr), info.GetIsolate());
}

static void directionAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::directionAttr, stringResource);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::heightAttr), info.GetIsolate());
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::heightAttr, stringResource);
}

static v8::Handle<v8::Value> hspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8UnsignedInteger(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr)), info.GetIsolate());
}

static void hspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    unsigned v = toUInt32(value);
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::hspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> loopAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8Integer(imp->loop(), info.GetIsolate());
}

static void loopAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    int v = toInt32(value);
    ExceptionCode ec = 0;
    imp->setLoop(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> scrollAmountAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8Integer(imp->scrollAmount(), info.GetIsolate());
}

static void scrollAmountAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    int v = toInt32(value);
    ExceptionCode ec = 0;
    imp->setScrollAmount(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> scrollDelayAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8Integer(imp->scrollDelay(), info.GetIsolate());
}

static void scrollDelayAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    int v = toInt32(value);
    ExceptionCode ec = 0;
    imp->setScrollDelay(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> trueSpeedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::truespeedAttr), info.GetIsolate());
}

static void trueSpeedAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::truespeedAttr, v);
    return;
}

static v8::Handle<v8::Value> vspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    return v8UnsignedInteger(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr)), info.GetIsolate());
}

static void vspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(info.Holder());
    unsigned v = toUInt32(value);
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::vspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::widthAttr), info.GetIsolate());
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::widthAttr, stringResource);
}

static v8::Handle<v8::Value> startCallback(const v8::Arguments& args)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(args.Holder());
    imp->start();
    return v8Undefined();
}

static v8::Handle<v8::Value> stopCallback(const v8::Arguments& args)
{
    HTMLMarqueeElement* imp = V8HTMLMarqueeElement::toNative(args.Holder());
    imp->stop();
    return v8Undefined();
}

} // namespace HTMLMarqueeElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLMarqueeElementAttrs[] = {
    // Attribute 'behavior' (Type: 'attribute' ExtAttr: 'Reflect')
    {"behavior", HTMLMarqueeElementV8Internal::behaviorAttrGetter, HTMLMarqueeElementV8Internal::behaviorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'Reflect')
    {"bgColor", HTMLMarqueeElementV8Internal::bgColorAttrGetter, HTMLMarqueeElementV8Internal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'direction' (Type: 'attribute' ExtAttr: 'Reflect')
    {"direction", HTMLMarqueeElementV8Internal::directionAttrGetter, HTMLMarqueeElementV8Internal::directionAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: 'Reflect')
    {"height", HTMLMarqueeElementV8Internal::heightAttrGetter, HTMLMarqueeElementV8Internal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hspace", HTMLMarqueeElementV8Internal::hspaceAttrGetter, HTMLMarqueeElementV8Internal::hspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'loop' (Type: 'attribute' ExtAttr: '')
    {"loop", HTMLMarqueeElementV8Internal::loopAttrGetter, HTMLMarqueeElementV8Internal::loopAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scrollAmount' (Type: 'attribute' ExtAttr: '')
    {"scrollAmount", HTMLMarqueeElementV8Internal::scrollAmountAttrGetter, HTMLMarqueeElementV8Internal::scrollAmountAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scrollDelay' (Type: 'attribute' ExtAttr: '')
    {"scrollDelay", HTMLMarqueeElementV8Internal::scrollDelayAttrGetter, HTMLMarqueeElementV8Internal::scrollDelayAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'trueSpeed' (Type: 'attribute' ExtAttr: 'Reflect')
    {"trueSpeed", HTMLMarqueeElementV8Internal::trueSpeedAttrGetter, HTMLMarqueeElementV8Internal::trueSpeedAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vspace", HTMLMarqueeElementV8Internal::vspaceAttrGetter, HTMLMarqueeElementV8Internal::vspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLMarqueeElementV8Internal::widthAttrGetter, HTMLMarqueeElementV8Internal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8HTMLMarqueeElementCallbacks[] = {
    {"start", HTMLMarqueeElementV8Internal::startCallback},
    {"stop", HTMLMarqueeElementV8Internal::stopCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLMarqueeElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLMarqueeElement", V8HTMLElement::GetTemplate(), V8HTMLMarqueeElement::internalFieldCount,
        V8HTMLMarqueeElementAttrs, WTF_ARRAY_LENGTH(V8HTMLMarqueeElementAttrs),
        V8HTMLMarqueeElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLMarqueeElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLMarqueeElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLMarqueeElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLMarqueeElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLMarqueeElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLMarqueeElement::createWrapper(PassRefPtr<HTMLMarqueeElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLMarqueeElement::derefObject(void* object)
{
    static_cast<HTMLMarqueeElement*>(object)->deref();
}

} // namespace WebCore
