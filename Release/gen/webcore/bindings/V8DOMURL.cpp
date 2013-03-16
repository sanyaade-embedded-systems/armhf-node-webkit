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
#include "V8DOMURL.h"

#if ENABLE(BLOB)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Blob.h"
#include "V8DOMWrapper.h"
#include "V8MediaSource.h"
#include "V8MediaStream.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DOMURL::info = { V8DOMURL::GetTemplate, V8DOMURL::derefObject, 0, 0, V8DOMURL::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace DOMURLV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> createObjectURL1Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    V8TRYCATCH(MediaSource*, source, V8MediaSource::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8MediaSource::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    return v8StringOrNull(DOMURL::createObjectURL(scriptContext, source), args.GetIsolate());
}

static v8::Handle<v8::Value> createObjectURL2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    V8TRYCATCH(MediaStream*, stream, V8MediaStream::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8MediaStream::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    return v8StringOrNull(DOMURL::createObjectURL(scriptContext, stream), args.GetIsolate());
}

static v8::Handle<v8::Value> createObjectURL3Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    V8TRYCATCH(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    return v8StringOrNull(DOMURL::createObjectURL(scriptContext, blob), args.GetIsolate());
}

static v8::Handle<v8::Value> createObjectURLCallback(const v8::Arguments& args)
{
    if ((args.Length() == 1 && (args[0]->IsNull() || V8MediaSource::HasInstance(args[0]))))
        return createObjectURL1Callback(args);
    if ((args.Length() == 1 && (args[0]->IsNull() || V8MediaStream::HasInstance(args[0]))))
        return createObjectURL2Callback(args);
    if ((args.Length() == 1 && (args[0]->IsNull() || V8Blob::HasInstance(args[0]))))
        return createObjectURL3Callback(args);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> revokeObjectURLCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, url, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    DOMURL::revokeObjectURL(scriptContext, url);
    return v8Undefined();
}

} // namespace DOMURLV8Internal

v8::Handle<v8::Value> V8DOMURL::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    RefPtr<DOMURL> impl = DOMURL::create();
    v8::Handle<v8::Object> wrapper = args.Holder();

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMURLTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "URL", v8::Persistent<v8::FunctionTemplate>(), V8DOMURL::internalFieldCount,
        0, 0,
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8DOMURL::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    desc->Set(v8::String::NewSymbol("createObjectURL"), v8::FunctionTemplate::New(DOMURLV8Internal::createObjectURLCallback, v8Undefined(), v8::Local<v8::Signature>()));
    desc->Set(v8::String::NewSymbol("revokeObjectURL"), v8::FunctionTemplate::New(DOMURLV8Internal::revokeObjectURLCallback, v8Undefined(), v8::Local<v8::Signature>()));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMURL::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DOMURL::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DOMURLTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DOMURL::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMURL::createWrapper(PassRefPtr<DOMURL> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DOMURL::derefObject(void* object)
{
    static_cast<DOMURL*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(BLOB)