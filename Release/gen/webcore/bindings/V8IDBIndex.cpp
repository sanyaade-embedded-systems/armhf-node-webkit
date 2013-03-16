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
#include "V8IDBIndex.h"

#if ENABLE(INDEXED_DATABASE)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "IDBBindingUtilities.h"
#include "IDBKey.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8IDBAny.h"
#include "V8IDBKeyRange.h"
#include "V8IDBObjectStore.h"
#include "V8IDBRequest.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8IDBIndex::info = { V8IDBIndex::GetTemplate, V8IDBIndex::derefObject, 0, 0, V8IDBIndex::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace IDBIndexV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> objectStoreAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    RefPtr<IDBObjectStore> result = imp->objectStore();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "objectStore", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> keyPathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    RefPtr<IDBAny> result = imp->keyPathAny();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "keyPath", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> uniqueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8Boolean(imp->unique(), info.GetIsolate());
}

static v8::Handle<v8::Value> multiEntryAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBIndex* imp = V8IDBIndex::toNative(info.Holder());
    return v8Boolean(imp->multiEntry(), info.GetIsolate());
}

static v8::Handle<v8::Value> openCursor1Callback(const v8::Arguments& args)
{
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() <= 0) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openCursor(scriptContext, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(IDBKeyRange*, range, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openCursor(scriptContext, range, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, direction, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->openCursor(scriptContext, range, direction, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> openCursor2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, key, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openCursor(scriptContext, key.get(), ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, direction, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->openCursor(scriptContext, key.get(), direction, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> openCursorCallback(const v8::Arguments& args)
{
    if (args.Length() == 0 || (args.Length() == 1 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))) || (args.Length() == 2 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))))
        return openCursor1Callback(args);
    if (args.Length() == 1 || args.Length() == 2)
        return openCursor2Callback(args);
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> openKeyCursor1Callback(const v8::Arguments& args)
{
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() <= 0) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openKeyCursor(scriptContext, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(IDBKeyRange*, range, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openKeyCursor(scriptContext, range, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, direction, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->openKeyCursor(scriptContext, range, direction, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> openKeyCursor2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, key, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->openKeyCursor(scriptContext, key.get(), ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, direction, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->openKeyCursor(scriptContext, key.get(), direction, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> openKeyCursorCallback(const v8::Arguments& args)
{
    if (args.Length() == 0 || (args.Length() == 1 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))) || (args.Length() == 2 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))))
        return openKeyCursor1Callback(args);
    if (args.Length() == 1 || args.Length() == 2)
        return openKeyCursor2Callback(args);
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> get1Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(IDBKeyRange*, key, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->get(scriptContext, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> get2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, key, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->get(scriptContext, key.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getCallback(const v8::Arguments& args)
{
    if ((args.Length() == 1 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))))
        return get1Callback(args);
    if (args.Length() == 1)
        return get2Callback(args);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> getKey1Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(IDBKeyRange*, key, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->getKey(scriptContext, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getKey2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, key, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->getKey(scriptContext, key.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getKeyCallback(const v8::Arguments& args)
{
    if ((args.Length() == 1 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))))
        return getKey1Callback(args);
    if (args.Length() == 1)
        return getKey2Callback(args);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> count1Callback(const v8::Arguments& args)
{
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() <= 0) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        RefPtr<IDBRequest> result = imp->count(scriptContext, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(IDBKeyRange*, range, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->count(scriptContext, range, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> count2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBIndex* imp = V8IDBIndex::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, key, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBRequest> result = imp->count(scriptContext, key.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> countCallback(const v8::Arguments& args)
{
    if (args.Length() == 0 || (args.Length() == 1 && (args[0]->IsNull() || V8IDBKeyRange::HasInstance(args[0]))))
        return count1Callback(args);
    if (args.Length() == 1)
        return count2Callback(args);
    return throwTypeError(0, args.GetIsolate());
}

} // namespace IDBIndexV8Internal

static const V8DOMConfiguration::BatchedAttribute V8IDBIndexAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", IDBIndexV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'objectStore' (Type: 'readonly attribute' ExtAttr: '')
    {"objectStore", IDBIndexV8Internal::objectStoreAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'keyPath' (Type: 'readonly attribute' ExtAttr: 'ImplementedAs')
    {"keyPath", IDBIndexV8Internal::keyPathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'unique' (Type: 'readonly attribute' ExtAttr: '')
    {"unique", IDBIndexV8Internal::uniqueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'multiEntry' (Type: 'readonly attribute' ExtAttr: '')
    {"multiEntry", IDBIndexV8Internal::multiEntryAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8IDBIndexCallbacks[] = {
    {"openCursor", IDBIndexV8Internal::openCursorCallback},
    {"openKeyCursor", IDBIndexV8Internal::openKeyCursorCallback},
    {"get", IDBIndexV8Internal::getCallback},
    {"getKey", IDBIndexV8Internal::getKeyCallback},
    {"count", IDBIndexV8Internal::countCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBIndexTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "IDBIndex", v8::Persistent<v8::FunctionTemplate>(), V8IDBIndex::internalFieldCount,
        V8IDBIndexAttrs, WTF_ARRAY_LENGTH(V8IDBIndexAttrs),
        V8IDBIndexCallbacks, WTF_ARRAY_LENGTH(V8IDBIndexCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBIndex::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBIndex::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBIndexTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBIndex::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBIndex::createWrapper(PassRefPtr<IDBIndex> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8IDBIndex::derefObject(void* object)
{
    static_cast<IDBIndex*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
