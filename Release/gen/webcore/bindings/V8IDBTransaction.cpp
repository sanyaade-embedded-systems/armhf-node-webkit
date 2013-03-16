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
#include "V8IDBTransaction.h"

#if ENABLE(INDEXED_DATABASE)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMError.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IDBDatabase.h"
#include "V8IDBObjectStore.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8IDBTransaction::info = { V8IDBTransaction::GetTemplate, V8IDBTransaction::derefObject, V8IDBTransaction::toActiveDOMObject, 0, V8IDBTransaction::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace IDBTransactionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> modeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return v8String(imp->mode(), info.GetIsolate());
}

static v8::Handle<v8::Value> dbAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    RefPtr<IDBDatabase> result = imp->db();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "db", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> errorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    RefPtr<DOMError> result = imp->error();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "error", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> webkitErrorMessageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return v8StringOrUndefined(imp->webkitErrorMessage(), info.GetIsolate());
}

static v8::Handle<v8::Value> onabortAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->onabort() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onabort())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onabortAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onabort(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOnabort(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> oncompleteAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->oncomplete() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->oncomplete())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void oncompleteAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->oncomplete(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOncomplete(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8IDBTransaction::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> objectStoreCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    RefPtr<IDBObjectStore> result = imp->objectStore(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->abort(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8IDBTransaction::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8IDBTransaction::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8IDBTransaction::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8IDBTransaction::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    IDBTransaction* imp = V8IDBTransaction::toNative(args.Holder());
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

} // namespace IDBTransactionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8IDBTransactionAttrs[] = {
    // Attribute 'mode' (Type: 'readonly attribute' ExtAttr: '')
    {"mode", IDBTransactionV8Internal::modeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'db' (Type: 'readonly attribute' ExtAttr: '')
    {"db", IDBTransactionV8Internal::dbAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'error' (Type: 'readonly attribute' ExtAttr: '')
    {"error", IDBTransactionV8Internal::errorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'webkitErrorMessage' (Type: 'readonly attribute' ExtAttr: 'TreatReturnedNullStringAs')
    {"webkitErrorMessage", IDBTransactionV8Internal::webkitErrorMessageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onabort' (Type: 'attribute' ExtAttr: '')
    {"onabort", IDBTransactionV8Internal::onabortAttrGetter, IDBTransactionV8Internal::onabortAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'oncomplete' (Type: 'attribute' ExtAttr: '')
    {"oncomplete", IDBTransactionV8Internal::oncompleteAttrGetter, IDBTransactionV8Internal::oncompleteAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", IDBTransactionV8Internal::onerrorAttrGetter, IDBTransactionV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8IDBTransactionCallbacks[] = {
    {"objectStore", IDBTransactionV8Internal::objectStoreCallback},
    {"abort", IDBTransactionV8Internal::abortCallback},
    {"addEventListener", IDBTransactionV8Internal::addEventListenerCallback},
    {"removeEventListener", IDBTransactionV8Internal::removeEventListenerCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBTransactionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "IDBTransaction", v8::Persistent<v8::FunctionTemplate>(), V8IDBTransaction::internalFieldCount,
        V8IDBTransactionAttrs, WTF_ARRAY_LENGTH(V8IDBTransactionAttrs),
        V8IDBTransactionCallbacks, WTF_ARRAY_LENGTH(V8IDBTransactionCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(IDBTransactionV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBTransaction::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBTransaction::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBTransactionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBTransaction::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8IDBTransaction::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8IDBTransaction::createWrapper(PassRefPtr<IDBTransaction> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8IDBTransaction::derefObject(void* object)
{
    static_cast<IDBTransaction*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)