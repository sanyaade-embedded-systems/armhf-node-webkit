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
#include "V8ScriptProfileNode.h"

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "RuntimeEnabledFeatures.h"
#include "ScriptProfileNode.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8ScriptProfileNode::info = { V8ScriptProfileNode::GetTemplate, V8ScriptProfileNode::derefObject, 0, 0, V8ScriptProfileNode::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace ScriptProfileNodeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> functionNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8String(imp->functionName(), info.GetIsolate());
}

static v8::Handle<v8::Value> urlAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8String(imp->url(), info.GetIsolate());
}

static v8::Handle<v8::Value> lineNumberAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8UnsignedInteger(imp->lineNumber(), info.GetIsolate());
}

static v8::Handle<v8::Value> totalTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Number::New(imp->totalTime());
}

static v8::Handle<v8::Value> selfTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Number::New(imp->selfTime());
}

static v8::Handle<v8::Value> numberOfCallsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8UnsignedInteger(imp->numberOfCalls(), info.GetIsolate());
}

static v8::Handle<v8::Value> visibleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8Boolean(imp->visible(), info.GetIsolate());
}

static v8::Handle<v8::Value> callUIDAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8UnsignedInteger(imp->callUID(), info.GetIsolate());
}

static v8::Handle<v8::Value> childrenCallback(const v8::Arguments& args)
{
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(args.Holder());
    return v8Array(imp->children(), args.GetIsolate());
}

} // namespace ScriptProfileNodeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8ScriptProfileNodeAttrs[] = {
    // Attribute 'functionName' (Type: 'readonly attribute' ExtAttr: '')
    {"functionName", ScriptProfileNodeV8Internal::functionNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'url' (Type: 'readonly attribute' ExtAttr: '')
    {"url", ScriptProfileNodeV8Internal::urlAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lineNumber' (Type: 'readonly attribute' ExtAttr: '')
    {"lineNumber", ScriptProfileNodeV8Internal::lineNumberAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'totalTime' (Type: 'readonly attribute' ExtAttr: '')
    {"totalTime", ScriptProfileNodeV8Internal::totalTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'selfTime' (Type: 'readonly attribute' ExtAttr: '')
    {"selfTime", ScriptProfileNodeV8Internal::selfTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'numberOfCalls' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfCalls", ScriptProfileNodeV8Internal::numberOfCallsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'visible' (Type: 'readonly attribute' ExtAttr: '')
    {"visible", ScriptProfileNodeV8Internal::visibleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'callUID' (Type: 'readonly attribute' ExtAttr: '')
    {"callUID", ScriptProfileNodeV8Internal::callUIDAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8ScriptProfileNodeCallbacks[] = {
    {"children", ScriptProfileNodeV8Internal::childrenCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8ScriptProfileNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "ScriptProfileNode", v8::Persistent<v8::FunctionTemplate>(), V8ScriptProfileNode::internalFieldCount,
        V8ScriptProfileNodeAttrs, WTF_ARRAY_LENGTH(V8ScriptProfileNodeAttrs),
        V8ScriptProfileNodeCallbacks, WTF_ARRAY_LENGTH(V8ScriptProfileNodeCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ScriptProfileNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8ScriptProfileNode::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8ScriptProfileNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8ScriptProfileNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


void V8ScriptProfileNode::derefObject(void* object)
{
    static_cast<ScriptProfileNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
