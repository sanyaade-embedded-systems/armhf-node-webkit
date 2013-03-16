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
#include "V8IDBDatabase.h"

#if ENABLE(INDEXED_DATABASE)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Dictionary.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMStringList.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IDBAny.h"
#include "V8IDBObjectStore.h"
#include "V8IDBTransaction.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8IDBDatabase::info = { V8IDBDatabase::GetTemplate, V8IDBDatabase::derefObject, V8IDBDatabase::toActiveDOMObject, 0, V8IDBDatabase::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace IDBDatabaseV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    return v8String(imp->name(), info.GetIsolate());
}

static v8::Handle<v8::Value> versionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    RefPtr<IDBAny> result = imp->version();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "version", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> objectStoreNamesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    RefPtr<DOMStringList> result = imp->objectStoreNames();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "objectStoreNames", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> onabortAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    return imp->onabort() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onabort())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onabortAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onabort(), value, V8IDBDatabase::eventListenerCacheIndex);
    imp->setOnabort(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8IDBDatabase::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onversionchangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    return imp->onversionchange() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onversionchange())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onversionchangeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onversionchange(), value, V8IDBDatabase::eventListenerCacheIndex);
    imp->setOnversionchange(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> createObjectStoreCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH(Dictionary, options, Dictionary(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined), args.GetIsolate()));
    if (!options.isUndefinedOrNull() && !options.isObject())
        return throwTypeError("Not an object.", args.GetIsolate());
    RefPtr<IDBObjectStore> result = imp->createObjectStore(name, options, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> deleteObjectStoreCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->deleteObjectStore(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> transaction1Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<DOMStringList>, storeNames, toDOMStringList(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined), args.GetIsolate()));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, mode, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsNullString));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBTransaction> result = imp->transaction(scriptContext, storeNames, mode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> transaction2Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Vector<String>, storeNames, toNativeArray<String>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, mode, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsNullString));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBTransaction> result = imp->transaction(scriptContext, storeNames, mode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> transaction3Callback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, storeName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, mode, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsNullString));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    RefPtr<IDBTransaction> result = imp->transaction(scriptContext, storeName, mode, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> transactionCallback(const v8::Arguments& args)
{
    if ((args.Length() == 1 && (V8DOMStringList::HasInstance(args[0]))) || (args.Length() == 2 && (V8DOMStringList::HasInstance(args[0]))))
        return transaction1Callback(args);
    if ((args.Length() == 1 && (args[0]->IsArray())) || (args.Length() == 2 && (args[0]->IsArray())))
        return transaction2Callback(args);
    if (args.Length() == 1 || args.Length() == 2)
        return transaction3Callback(args);
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    return throwTypeError(0, args.GetIsolate());
}

static v8::Handle<v8::Value> closeCallback(const v8::Arguments& args)
{
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    imp->close();
    return v8Undefined();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8IDBDatabase::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8IDBDatabase::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8IDBDatabase::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8IDBDatabase::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBDatabase* imp = V8IDBDatabase::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Event*, evt, V8Event::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result, args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace IDBDatabaseV8Internal

static const V8DOMConfiguration::BatchedAttribute V8IDBDatabaseAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", IDBDatabaseV8Internal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'version' (Type: 'readonly attribute' ExtAttr: '')
    {"version", IDBDatabaseV8Internal::versionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'objectStoreNames' (Type: 'readonly attribute' ExtAttr: '')
    {"objectStoreNames", IDBDatabaseV8Internal::objectStoreNamesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onabort' (Type: 'attribute' ExtAttr: '')
    {"onabort", IDBDatabaseV8Internal::onabortAttrGetter, IDBDatabaseV8Internal::onabortAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", IDBDatabaseV8Internal::onerrorAttrGetter, IDBDatabaseV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onversionchange' (Type: 'attribute' ExtAttr: '')
    {"onversionchange", IDBDatabaseV8Internal::onversionchangeAttrGetter, IDBDatabaseV8Internal::onversionchangeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8IDBDatabaseCallbacks[] = {
    {"createObjectStore", IDBDatabaseV8Internal::createObjectStoreCallback},
    {"deleteObjectStore", IDBDatabaseV8Internal::deleteObjectStoreCallback},
    {"transaction", IDBDatabaseV8Internal::transactionCallback},
    {"close", IDBDatabaseV8Internal::closeCallback},
    {"addEventListener", IDBDatabaseV8Internal::addEventListenerCallback},
    {"removeEventListener", IDBDatabaseV8Internal::removeEventListenerCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBDatabaseTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "IDBDatabase", v8::Persistent<v8::FunctionTemplate>(), V8IDBDatabase::internalFieldCount,
        V8IDBDatabaseAttrs, WTF_ARRAY_LENGTH(V8IDBDatabaseAttrs),
        V8IDBDatabaseCallbacks, WTF_ARRAY_LENGTH(V8IDBDatabaseCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(IDBDatabaseV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBDatabase::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBDatabase::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBDatabaseTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBDatabase::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8IDBDatabase::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8IDBDatabase::createWrapper(PassRefPtr<IDBDatabase> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8IDBDatabase::derefObject(void* object)
{
    static_cast<IDBDatabase*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
