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
#include "V8Entry.h"

#if ENABLE(FILE_SYSTEM)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMFileSystem.h"
#include "V8DOMWrapper.h"
#include "V8DirectoryEntry.h"
#include "V8EntryCallback.h"
#include "V8ErrorCallback.h"
#include "V8MetadataCallback.h"
#include "V8VoidCallback.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8Entry::info = { V8Entry::GetTemplate, V8Entry::derefObject, 0, 0, V8Entry::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace EntryV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> isFileAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Entry* imp = V8Entry::toNative(info.Holder());
    return v8Boolean(imp->isFile(), info.GetIsolate());
}

static v8::Handle<v8::Value> isDirectoryAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Entry* imp = V8Entry::toNative(info.Holder());
    return v8Boolean(imp->isDirectory(), info.GetIsolate());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Entry* imp = V8Entry::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> fullPathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Entry* imp = V8Entry::toNative(info.Holder());
    return v8String(imp->fullPath(), info.GetIsolate());
}

static v8::Handle<v8::Value> filesystemAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Entry* imp = V8Entry::toNative(info.Holder());
    RefPtr<DOMFileSystem> result = imp->filesystem();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "filesystem", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> getMetadataCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Entry* imp = V8Entry::toNative(args.Holder());
    if (args.Length() <= 0 || !args[0]->IsFunction())
        return throwTypeError(0, args.GetIsolate());
    RefPtr<MetadataCallback> successCallback = V8MetadataCallback::create(args[0], getScriptExecutionContext());
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        errorCallback = V8ErrorCallback::create(args[1], getScriptExecutionContext());
    }
    imp->getMetadata(successCallback, errorCallback);
    return v8Undefined();
}

static v8::Handle<v8::Value> moveToCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Entry* imp = V8Entry::toNative(args.Holder());
    V8TRYCATCH(DirectoryEntry*, parent, V8DirectoryEntry::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8DirectoryEntry::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (args.Length() <= 1) {
        imp->moveTo(parent);
        return v8Undefined();
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithUndefinedOrNullCheck>, name, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    RefPtr<EntryCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        successCallback = V8EntryCallback::create(args[2], getScriptExecutionContext());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 3 && !args[3]->IsNull() && !args[3]->IsUndefined()) {
        if (!args[3]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        errorCallback = V8ErrorCallback::create(args[3], getScriptExecutionContext());
    }
    imp->moveTo(parent, name, successCallback, errorCallback);
    return v8Undefined();
}

static v8::Handle<v8::Value> copyToCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Entry* imp = V8Entry::toNative(args.Holder());
    V8TRYCATCH(DirectoryEntry*, parent, V8DirectoryEntry::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8DirectoryEntry::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (args.Length() <= 1) {
        imp->copyTo(parent);
        return v8Undefined();
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithUndefinedOrNullCheck>, name, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    RefPtr<EntryCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        successCallback = V8EntryCallback::create(args[2], getScriptExecutionContext());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 3 && !args[3]->IsNull() && !args[3]->IsUndefined()) {
        if (!args[3]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        errorCallback = V8ErrorCallback::create(args[3], getScriptExecutionContext());
    }
    imp->copyTo(parent, name, successCallback, errorCallback);
    return v8Undefined();
}

static v8::Handle<v8::Value> toURLCallback(const v8::Arguments& args)
{
    Entry* imp = V8Entry::toNative(args.Holder());
    return v8String(imp->toURL(), args.GetIsolate());
}

static v8::Handle<v8::Value> removeCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Entry* imp = V8Entry::toNative(args.Holder());
    if (args.Length() <= 0 || !args[0]->IsFunction())
        return throwTypeError(0, args.GetIsolate());
    RefPtr<VoidCallback> successCallback = V8VoidCallback::create(args[0], getScriptExecutionContext());
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        errorCallback = V8ErrorCallback::create(args[1], getScriptExecutionContext());
    }
    imp->remove(successCallback, errorCallback);
    return v8Undefined();
}

static v8::Handle<v8::Value> getParentCallback(const v8::Arguments& args)
{
    Entry* imp = V8Entry::toNative(args.Holder());
    RefPtr<EntryCallback> successCallback;
    if (args.Length() > 0 && !args[0]->IsNull() && !args[0]->IsUndefined()) {
        if (!args[0]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        successCallback = V8EntryCallback::create(args[0], getScriptExecutionContext());
    }
    RefPtr<ErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsFunction())
            return throwTypeError(0, args.GetIsolate());
        errorCallback = V8ErrorCallback::create(args[1], getScriptExecutionContext());
    }
    imp->getParent(successCallback, errorCallback);
    return v8Undefined();
}

} // namespace EntryV8Internal

static const V8DOMConfiguration::BatchedAttribute V8EntryAttrs[] = {
    // Attribute 'isFile' (Type: 'readonly attribute' ExtAttr: '')
    {"isFile", EntryV8Internal::isFileAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'isDirectory' (Type: 'readonly attribute' ExtAttr: '')
    {"isDirectory", EntryV8Internal::isDirectoryAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", EntryV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'fullPath' (Type: 'readonly attribute' ExtAttr: '')
    {"fullPath", EntryV8Internal::fullPathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'filesystem' (Type: 'readonly attribute' ExtAttr: '')
    {"filesystem", EntryV8Internal::filesystemAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8EntryCallbacks[] = {
    {"getMetadata", EntryV8Internal::getMetadataCallback},
    {"moveTo", EntryV8Internal::moveToCallback},
    {"copyTo", EntryV8Internal::copyToCallback},
    {"toURL", EntryV8Internal::toURLCallback},
    {"remove", EntryV8Internal::removeCallback},
    {"getParent", EntryV8Internal::getParentCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8EntryTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Entry", v8::Persistent<v8::FunctionTemplate>(), V8Entry::internalFieldCount,
        V8EntryAttrs, WTF_ARRAY_LENGTH(V8EntryAttrs),
        V8EntryCallbacks, WTF_ARRAY_LENGTH(V8EntryCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Entry::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Entry::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8EntryTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Entry::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Entry::createWrapper(PassRefPtr<Entry> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8Entry::derefObject(void* object)
{
    static_cast<Entry*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)
