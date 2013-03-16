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
#include "V8JavaScriptCallFrame.h"

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8JavaScriptCallFrame::info = { V8JavaScriptCallFrame::GetTemplate, V8JavaScriptCallFrame::derefObject, 0, 0, V8JavaScriptCallFrame::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace JavaScriptCallFrameV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> callerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    JavaScriptCallFrame* imp = V8JavaScriptCallFrame::toNative(info.Holder());
    RefPtr<JavaScriptCallFrame> result = imp->caller();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "caller", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> sourceIDAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    JavaScriptCallFrame* imp = V8JavaScriptCallFrame::toNative(info.Holder());
    return v8Integer(imp->sourceID(), info.GetIsolate());
}

static v8::Handle<v8::Value> lineAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    JavaScriptCallFrame* imp = V8JavaScriptCallFrame::toNative(info.Holder());
    return v8Integer(imp->line(), info.GetIsolate());
}

static v8::Handle<v8::Value> columnAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    JavaScriptCallFrame* imp = V8JavaScriptCallFrame::toNative(info.Holder());
    return v8Integer(imp->column(), info.GetIsolate());
}

static v8::Handle<v8::Value> functionNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    JavaScriptCallFrame* imp = V8JavaScriptCallFrame::toNative(info.Holder());
    return v8String(imp->functionName(), info.GetIsolate());
}

} // namespace JavaScriptCallFrameV8Internal

static const V8DOMConfiguration::BatchedAttribute V8JavaScriptCallFrameAttrs[] = {
    // Attribute 'caller' (Type: 'readonly attribute' ExtAttr: '')
    {"caller", JavaScriptCallFrameV8Internal::callerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sourceID' (Type: 'readonly attribute' ExtAttr: '')
    {"sourceID", JavaScriptCallFrameV8Internal::sourceIDAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'line' (Type: 'readonly attribute' ExtAttr: '')
    {"line", JavaScriptCallFrameV8Internal::lineAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'column' (Type: 'readonly attribute' ExtAttr: '')
    {"column", JavaScriptCallFrameV8Internal::columnAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scopeChain' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"scopeChain", V8JavaScriptCallFrame::scopeChainAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'thisObject' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"thisObject", V8JavaScriptCallFrame::thisObjectAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'functionName' (Type: 'readonly attribute' ExtAttr: '')
    {"functionName", JavaScriptCallFrameV8Internal::functionNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"type", V8JavaScriptCallFrame::typeAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8JavaScriptCallFrameCallbacks[] = {
    {"evaluate", V8JavaScriptCallFrame::evaluateCallback},
    {"restart", V8JavaScriptCallFrame::restartCallback},
    {"scopeType", V8JavaScriptCallFrame::scopeTypeCallback},
};

static const V8DOMConfiguration::BatchedConstant V8JavaScriptCallFrameConsts[] = {
    {"GLOBAL_SCOPE", static_cast<signed int>(0)},
    {"LOCAL_SCOPE", static_cast<signed int>(1)},
    {"WITH_SCOPE", static_cast<signed int>(2)},
    {"CLOSURE_SCOPE", static_cast<signed int>(3)},
    {"CATCH_SCOPE", static_cast<signed int>(4)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8JavaScriptCallFrameTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "JavaScriptCallFrame", v8::Persistent<v8::FunctionTemplate>(), V8JavaScriptCallFrame::internalFieldCount,
        V8JavaScriptCallFrameAttrs, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameAttrs),
        V8JavaScriptCallFrameCallbacks, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8JavaScriptCallFrameConsts, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8JavaScriptCallFrame::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8JavaScriptCallFrame::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8JavaScriptCallFrameTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8JavaScriptCallFrame::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8JavaScriptCallFrame::createWrapper(PassRefPtr<JavaScriptCallFrame> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8JavaScriptCallFrame::derefObject(void* object)
{
    static_cast<JavaScriptCallFrame*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
