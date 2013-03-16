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
#include "V8DOMApplicationCache.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DOMApplicationCache::info = { V8DOMApplicationCache::GetTemplate, V8DOMApplicationCache::derefObject, 0, 0, V8DOMApplicationCache::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace DOMApplicationCacheV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> statusAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return v8Integer(imp->status(), info.GetIsolate());
}

static v8::Handle<v8::Value> oncheckingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onchecking() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onchecking())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void oncheckingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onchecking(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnchecking(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onnoupdateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onnoupdate() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onnoupdate())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onnoupdateAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onnoupdate(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnnoupdate(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> ondownloadingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->ondownloading() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->ondownloading())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void ondownloadingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->ondownloading(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOndownloading(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onprogressAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onprogress() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onprogress())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onprogressAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onprogress(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnprogress(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onupdatereadyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onupdateready() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onupdateready())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onupdatereadyAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onupdateready(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnupdateready(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> oncachedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->oncached() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->oncached())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void oncachedAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->oncached(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOncached(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onobsoleteAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    return imp->onobsolete() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onobsolete())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onobsoleteAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onobsolete(), value, V8DOMApplicationCache::eventListenerCacheIndex);
    imp->setOnobsolete(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> updateCallback(const v8::Arguments& args)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->update(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> swapCacheCallback(const v8::Arguments& args)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->swapCache(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> abortCallback(const v8::Arguments& args)
{
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(args.Holder());
    imp->abort();
    return v8Undefined();
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8DOMApplicationCache::toNative(args.Holder())->addEventListener(stringResource, listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8DOMApplicationCache::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, stringResource, args[0]);
        V8DOMApplicationCache::toNative(args.Holder())->removeEventListener(stringResource, listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8DOMApplicationCache::eventListenerCacheIndex);
    }
    return v8Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    DOMApplicationCache* imp = V8DOMApplicationCache::toNative(args.Holder());
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

} // namespace DOMApplicationCacheV8Internal

static const V8DOMConfiguration::BatchedAttribute V8DOMApplicationCacheAttrs[] = {
    // Attribute 'status' (Type: 'readonly attribute' ExtAttr: '')
    {"status", DOMApplicationCacheV8Internal::statusAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onchecking' (Type: 'attribute' ExtAttr: '')
    {"onchecking", DOMApplicationCacheV8Internal::oncheckingAttrGetter, DOMApplicationCacheV8Internal::oncheckingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", DOMApplicationCacheV8Internal::onerrorAttrGetter, DOMApplicationCacheV8Internal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onnoupdate' (Type: 'attribute' ExtAttr: '')
    {"onnoupdate", DOMApplicationCacheV8Internal::onnoupdateAttrGetter, DOMApplicationCacheV8Internal::onnoupdateAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ondownloading' (Type: 'attribute' ExtAttr: '')
    {"ondownloading", DOMApplicationCacheV8Internal::ondownloadingAttrGetter, DOMApplicationCacheV8Internal::ondownloadingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onprogress' (Type: 'attribute' ExtAttr: '')
    {"onprogress", DOMApplicationCacheV8Internal::onprogressAttrGetter, DOMApplicationCacheV8Internal::onprogressAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onupdateready' (Type: 'attribute' ExtAttr: '')
    {"onupdateready", DOMApplicationCacheV8Internal::onupdatereadyAttrGetter, DOMApplicationCacheV8Internal::onupdatereadyAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'oncached' (Type: 'attribute' ExtAttr: '')
    {"oncached", DOMApplicationCacheV8Internal::oncachedAttrGetter, DOMApplicationCacheV8Internal::oncachedAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onobsolete' (Type: 'attribute' ExtAttr: '')
    {"onobsolete", DOMApplicationCacheV8Internal::onobsoleteAttrGetter, DOMApplicationCacheV8Internal::onobsoleteAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8DOMApplicationCacheCallbacks[] = {
    {"update", DOMApplicationCacheV8Internal::updateCallback},
    {"swapCache", DOMApplicationCacheV8Internal::swapCacheCallback},
    {"abort", DOMApplicationCacheV8Internal::abortCallback},
    {"addEventListener", DOMApplicationCacheV8Internal::addEventListenerCallback},
    {"removeEventListener", DOMApplicationCacheV8Internal::removeEventListenerCallback},
};

static const V8DOMConfiguration::BatchedConstant V8DOMApplicationCacheConsts[] = {
    {"UNCACHED", static_cast<signed int>(0)},
    {"IDLE", static_cast<signed int>(1)},
    {"CHECKING", static_cast<signed int>(2)},
    {"DOWNLOADING", static_cast<signed int>(3)},
    {"UPDATEREADY", static_cast<signed int>(4)},
    {"OBSOLETE", static_cast<signed int>(5)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMApplicationCacheTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "DOMApplicationCache", v8::Persistent<v8::FunctionTemplate>(), V8DOMApplicationCache::internalFieldCount,
        V8DOMApplicationCacheAttrs, WTF_ARRAY_LENGTH(V8DOMApplicationCacheAttrs),
        V8DOMApplicationCacheCallbacks, WTF_ARRAY_LENGTH(V8DOMApplicationCacheCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::NewSymbol("dispatchEvent"), v8::FunctionTemplate::New(DOMApplicationCacheV8Internal::dispatchEventCallback, v8Undefined(), dispatchEventSignature));
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8DOMApplicationCacheConsts, WTF_ARRAY_LENGTH(V8DOMApplicationCacheConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMApplicationCache::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DOMApplicationCache::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DOMApplicationCacheTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DOMApplicationCache::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMApplicationCache::createWrapper(PassRefPtr<DOMApplicationCache> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DOMApplicationCache::derefObject(void* object)
{
    static_cast<DOMApplicationCache*>(object)->deref();
}

} // namespace WebCore
