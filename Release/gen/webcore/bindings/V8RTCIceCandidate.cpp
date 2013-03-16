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
#include "V8RTCIceCandidate.h"

#if ENABLE(MEDIA_STREAM)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Dictionary.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8RTCIceCandidate::info = { V8RTCIceCandidate::GetTemplate, V8RTCIceCandidate::derefObject, 0, 0, V8RTCIceCandidate::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace RTCIceCandidateV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> candidateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RTCIceCandidate* imp = V8RTCIceCandidate::toNative(info.Holder());
    return v8String(imp->candidate(), info.GetIsolate());
}

static v8::Handle<v8::Value> sdpMidAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RTCIceCandidate* imp = V8RTCIceCandidate::toNative(info.Holder());
    return v8String(imp->sdpMid(), info.GetIsolate());
}

static v8::Handle<v8::Value> sdpMLineIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    RTCIceCandidate* imp = V8RTCIceCandidate::toNative(info.Holder());
    return v8Integer(imp->sdpMLineIndex(), info.GetIsolate());
}

} // namespace RTCIceCandidateV8Internal

static const V8DOMConfiguration::BatchedAttribute V8RTCIceCandidateAttrs[] = {
    // Attribute 'candidate' (Type: 'readonly attribute' ExtAttr: '')
    {"candidate", RTCIceCandidateV8Internal::candidateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sdpMid' (Type: 'readonly attribute' ExtAttr: '')
    {"sdpMid", RTCIceCandidateV8Internal::sdpMidAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sdpMLineIndex' (Type: 'readonly attribute' ExtAttr: '')
    {"sdpMLineIndex", RTCIceCandidateV8Internal::sdpMLineIndexAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

v8::Handle<v8::Value> V8RTCIceCandidate::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());

    ExceptionCode ec = 0;
    V8TRYCATCH(Dictionary, dictionary, Dictionary(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined), args.GetIsolate()));
    if (!dictionary.isUndefinedOrNull() && !dictionary.isObject())
        return throwTypeError("Not an object.", args.GetIsolate());

    RefPtr<RTCIceCandidate> impl = RTCIceCandidate::create(dictionary, ec);
    v8::Handle<v8::Object> wrapper = args.Holder();
    if (ec)
        goto fail;

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
  fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8RTCIceCandidateTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "RTCIceCandidate", v8::Persistent<v8::FunctionTemplate>(), V8RTCIceCandidate::internalFieldCount,
        V8RTCIceCandidateAttrs, WTF_ARRAY_LENGTH(V8RTCIceCandidateAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8RTCIceCandidate::constructorCallback);
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8RTCIceCandidate::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8RTCIceCandidate::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8RTCIceCandidateTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8RTCIceCandidate::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8RTCIceCandidate::createWrapper(PassRefPtr<RTCIceCandidate> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8RTCIceCandidate::derefObject(void* object)
{
    static_cast<RTCIceCandidate*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)