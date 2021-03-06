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
#include "V8Performance.h"

#if ENABLE(WEB_TIMING)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8MemoryInfo.h"
#include "V8PerformanceEntryList.h"
#include "V8PerformanceNavigation.h"
#include "V8PerformanceTiming.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8Performance::info = { V8Performance::GetTemplate, V8Performance::derefObject, 0, 0, V8Performance::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace PerformanceV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> navigationAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Performance* imp = V8Performance::toNative(info.Holder());
    RefPtr<PerformanceNavigation> result = imp->navigation();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "navigation", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> timingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Performance* imp = V8Performance::toNative(info.Holder());
    RefPtr<PerformanceTiming> result = imp->timing();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "timing", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> memoryAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Performance* imp = V8Performance::toNative(info.Holder());
    RefPtr<MemoryInfo> result = imp->memory();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "memory", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> onwebkitresourcetimingbufferfullAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Performance* imp = V8Performance::toNative(info.Holder());
    return imp->onwebkitresourcetimingbufferfull() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onwebkitresourcetimingbufferfull())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8Null(info.GetIsolate()));
}

static void onwebkitresourcetimingbufferfullAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Performance* imp = V8Performance::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onwebkitresourcetimingbufferfull(), value, V8Performance::eventListenerCacheIndex);
    imp->setOnwebkitresourcetimingbufferfull(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> webkitGetEntriesCallback(const v8::Arguments& args)
{
    Performance* imp = V8Performance::toNative(args.Holder());
    return toV8(imp->webkitGetEntries(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> webkitGetEntriesByTypeCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Performance* imp = V8Performance::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, entryType, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    return toV8(imp->webkitGetEntriesByType(entryType), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> webkitGetEntriesByNameCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Performance* imp = V8Performance::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, name, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, entryType, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsNullString));
    return toV8(imp->webkitGetEntriesByName(name, entryType), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> webkitClearResourceTimingsCallback(const v8::Arguments& args)
{
    Performance* imp = V8Performance::toNative(args.Holder());
    imp->webkitClearResourceTimings();
    return v8Undefined();
}

static v8::Handle<v8::Value> webkitSetResourceTimingBufferSizeCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Performance* imp = V8Performance::toNative(args.Holder());
    V8TRYCATCH(unsigned, maxSize, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    imp->webkitSetResourceTimingBufferSize(maxSize);
    return v8Undefined();
}

static v8::Handle<v8::Value> webkitMarkCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Performance* imp = V8Performance::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, markName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->webkitMark(markName, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> webkitClearMarksCallback(const v8::Arguments& args)
{
    Performance* imp = V8Performance::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, markName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsNullString));
    imp->webkitClearMarks(markName);
    return v8Undefined();
}

static v8::Handle<v8::Value> webkitMeasureCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    Performance* imp = V8Performance::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, measureName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, startMark, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsNullString));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, endMark, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsNullString));
    imp->webkitMeasure(measureName, startMark, endMark, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> webkitClearMeasuresCallback(const v8::Arguments& args)
{
    Performance* imp = V8Performance::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, measureName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsNullString));
    imp->webkitClearMeasures(measureName);
    return v8Undefined();
}

static v8::Handle<v8::Value> nowCallback(const v8::Arguments& args)
{
    Performance* imp = V8Performance::toNative(args.Holder());
    return v8::Number::New(imp->now());
}

} // namespace PerformanceV8Internal

static const V8DOMConfiguration::BatchedAttribute V8PerformanceAttrs[] = {
    // Attribute 'navigation' (Type: 'readonly attribute' ExtAttr: '')
    {"navigation", PerformanceV8Internal::navigationAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'timing' (Type: 'readonly attribute' ExtAttr: '')
    {"timing", PerformanceV8Internal::timingAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'memory' (Type: 'readonly attribute' ExtAttr: '')
    {"memory", PerformanceV8Internal::memoryAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onwebkitresourcetimingbufferfull' (Type: 'attribute' ExtAttr: '')
    {"onwebkitresourcetimingbufferfull", PerformanceV8Internal::onwebkitresourcetimingbufferfullAttrGetter, PerformanceV8Internal::onwebkitresourcetimingbufferfullAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8PerformanceCallbacks[] = {
    {"webkitGetEntries", PerformanceV8Internal::webkitGetEntriesCallback},
    {"webkitGetEntriesByType", PerformanceV8Internal::webkitGetEntriesByTypeCallback},
    {"webkitGetEntriesByName", PerformanceV8Internal::webkitGetEntriesByNameCallback},
    {"webkitClearResourceTimings", PerformanceV8Internal::webkitClearResourceTimingsCallback},
    {"webkitSetResourceTimingBufferSize", PerformanceV8Internal::webkitSetResourceTimingBufferSizeCallback},
    {"webkitMark", PerformanceV8Internal::webkitMarkCallback},
    {"webkitClearMarks", PerformanceV8Internal::webkitClearMarksCallback},
    {"webkitMeasure", PerformanceV8Internal::webkitMeasureCallback},
    {"webkitClearMeasures", PerformanceV8Internal::webkitClearMeasuresCallback},
    {"now", PerformanceV8Internal::nowCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8PerformanceTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Performance", v8::Persistent<v8::FunctionTemplate>(), V8Performance::internalFieldCount,
        V8PerformanceAttrs, WTF_ARRAY_LENGTH(V8PerformanceAttrs),
        V8PerformanceCallbacks, WTF_ARRAY_LENGTH(V8PerformanceCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Performance::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Performance::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8PerformanceTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Performance::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Performance::createWrapper(PassRefPtr<Performance> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8Performance::derefObject(void* object)
{
    static_cast<Performance*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_TIMING)
