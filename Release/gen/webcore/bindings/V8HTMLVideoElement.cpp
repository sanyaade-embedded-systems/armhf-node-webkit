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
#include "V8HTMLVideoElement.h"

#if ENABLE(VIDEO)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLMediaElement.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLVideoElement::info = { V8HTMLVideoElement::GetTemplate, V8HTMLVideoElement::derefObject, 0, 0, V8HTMLVideoElement::installPerContextPrototypeProperties, &V8HTMLMediaElement::info, WrapperTypeObjectPrototype };

namespace HTMLVideoElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::widthAttr)), info.GetIsolate());
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    unsigned v = toUInt32(value);
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::widthAttr, v);
    return;
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(std::max(0, imp->getIntegralAttribute(WebCore::HTMLNames::heightAttr)), info.GetIsolate());
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    unsigned v = toUInt32(value);
    imp->setUnsignedIntegralAttribute(WebCore::HTMLNames::heightAttr, v);
    return;
}

static v8::Handle<v8::Value> videoWidthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(imp->videoWidth(), info.GetIsolate());
}

static v8::Handle<v8::Value> videoHeightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(imp->videoHeight(), info.GetIsolate());
}

static v8::Handle<v8::Value> posterAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::posterAttr), info.GetIsolate());
}

static void posterAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::posterAttr, stringResource);
}

static v8::Handle<v8::Value> webkitSupportsFullscreenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8Boolean(imp->webkitSupportsFullscreen(), info.GetIsolate());
}

static v8::Handle<v8::Value> webkitDisplayingFullscreenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8Boolean(imp->webkitDisplayingFullscreen(), info.GetIsolate());
}

#if ENABLE(MEDIA_STATISTICS)

static v8::Handle<v8::Value> webkitDecodedFrameCountAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(imp->webkitDecodedFrameCount(), info.GetIsolate());
}

#endif // ENABLE(MEDIA_STATISTICS)

#if ENABLE(MEDIA_STATISTICS)

static v8::Handle<v8::Value> webkitDroppedFrameCountAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(info.Holder());
    return v8UnsignedInteger(imp->webkitDroppedFrameCount(), info.GetIsolate());
}

#endif // ENABLE(MEDIA_STATISTICS)

static v8::Handle<v8::Value> webkitEnterFullscreenCallback(const v8::Arguments& args)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->webkitEnterFullscreen(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> webkitExitFullscreenCallback(const v8::Arguments& args)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(args.Holder());
    imp->webkitExitFullscreen();
    return v8Undefined();
}

static v8::Handle<v8::Value> webkitEnterFullScreenCallback(const v8::Arguments& args)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->webkitEnterFullScreen(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> webkitExitFullScreenCallback(const v8::Arguments& args)
{
    HTMLVideoElement* imp = V8HTMLVideoElement::toNative(args.Holder());
    imp->webkitExitFullScreen();
    return v8Undefined();
}

} // namespace HTMLVideoElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLVideoElementAttrs[] = {
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLVideoElementV8Internal::widthAttrGetter, HTMLVideoElementV8Internal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: 'Reflect')
    {"height", HTMLVideoElementV8Internal::heightAttrGetter, HTMLVideoElementV8Internal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'videoWidth' (Type: 'readonly attribute' ExtAttr: '')
    {"videoWidth", HTMLVideoElementV8Internal::videoWidthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'videoHeight' (Type: 'readonly attribute' ExtAttr: '')
    {"videoHeight", HTMLVideoElementV8Internal::videoHeightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'poster' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"poster", HTMLVideoElementV8Internal::posterAttrGetter, HTMLVideoElementV8Internal::posterAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'webkitSupportsFullscreen' (Type: 'readonly attribute' ExtAttr: '')
    {"webkitSupportsFullscreen", HTMLVideoElementV8Internal::webkitSupportsFullscreenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'webkitDisplayingFullscreen' (Type: 'readonly attribute' ExtAttr: '')
    {"webkitDisplayingFullscreen", HTMLVideoElementV8Internal::webkitDisplayingFullscreenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(MEDIA_STATISTICS)
    // Attribute 'webkitDecodedFrameCount' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"webkitDecodedFrameCount", HTMLVideoElementV8Internal::webkitDecodedFrameCountAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MEDIA_STATISTICS)
#if ENABLE(MEDIA_STATISTICS)
    // Attribute 'webkitDroppedFrameCount' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"webkitDroppedFrameCount", HTMLVideoElementV8Internal::webkitDroppedFrameCountAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MEDIA_STATISTICS)
};

static const V8DOMConfiguration::BatchedCallback V8HTMLVideoElementCallbacks[] = {
    {"webkitEnterFullscreen", HTMLVideoElementV8Internal::webkitEnterFullscreenCallback},
    {"webkitExitFullscreen", HTMLVideoElementV8Internal::webkitExitFullscreenCallback},
    {"webkitEnterFullScreen", HTMLVideoElementV8Internal::webkitEnterFullScreenCallback},
    {"webkitExitFullScreen", HTMLVideoElementV8Internal::webkitExitFullScreenCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLVideoElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLVideoElement", V8HTMLMediaElement::GetTemplate(), V8HTMLVideoElement::internalFieldCount,
        V8HTMLVideoElementAttrs, WTF_ARRAY_LENGTH(V8HTMLVideoElementAttrs),
        V8HTMLVideoElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLVideoElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLVideoElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLVideoElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLVideoElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLVideoElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLVideoElement::createWrapper(PassRefPtr<HTMLVideoElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLVideoElement::derefObject(void* object)
{
    static_cast<HTMLVideoElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO)
