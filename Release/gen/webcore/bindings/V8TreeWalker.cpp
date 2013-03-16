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
#include "V8TreeWalker.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Node.h"
#include "V8NodeFilter.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TreeWalker::info = { V8TreeWalker::GetTemplate, V8TreeWalker::derefObject, 0, 0, V8TreeWalker::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace TreeWalkerV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> rootAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    return toV8Fast(imp->root(), info, imp);
}

static v8::Handle<v8::Value> whatToShowAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    return v8UnsignedInteger(imp->whatToShow(), info.GetIsolate());
}

static v8::Handle<v8::Value> filterAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    return toV8Fast(imp->filter(), info, imp);
}

static v8::Handle<v8::Value> expandEntityReferencesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    return v8Boolean(imp->expandEntityReferences(), info.GetIsolate());
}

static v8::Handle<v8::Value> currentNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    return toV8Fast(imp->currentNode(), info, imp);
}

static void currentNodeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    TreeWalker* imp = V8TreeWalker::toNative(info.Holder());
    Node* v = V8Node::HasInstance(value) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(value)) : 0;
    ExceptionCode ec = 0;
    imp->setCurrentNode(WTF::getPtr(v), ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> parentNodeCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->parentNode(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> firstChildCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->firstChild(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> lastChildCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->lastChild(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> previousSiblingCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->previousSibling(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> nextSiblingCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->nextSibling(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> previousNodeCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->previousNode(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> nextNodeCallback(const v8::Arguments& args)
{
    TreeWalker* imp = V8TreeWalker::toNative(args.Holder());
    ScriptState* currentState = ScriptState::current();
    if (!currentState)
        return v8Undefined();
    ScriptState& state = *currentState;
    RefPtr<Node> result = imp->nextNode(&state);
    if (state.hadException()) {
        v8::Local<v8::Value> exception = state.exception();
        state.clearException();
        return throwError(exception, args.GetIsolate());
    }
    return toV8(result.release(), args.Holder(), args.GetIsolate());
}

} // namespace TreeWalkerV8Internal

static const V8DOMConfiguration::BatchedAttribute V8TreeWalkerAttrs[] = {
    // Attribute 'root' (Type: 'readonly attribute' ExtAttr: '')
    {"root", TreeWalkerV8Internal::rootAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'whatToShow' (Type: 'readonly attribute' ExtAttr: '')
    {"whatToShow", TreeWalkerV8Internal::whatToShowAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'filter' (Type: 'readonly attribute' ExtAttr: '')
    {"filter", TreeWalkerV8Internal::filterAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'expandEntityReferences' (Type: 'readonly attribute' ExtAttr: '')
    {"expandEntityReferences", TreeWalkerV8Internal::expandEntityReferencesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'currentNode' (Type: 'attribute' ExtAttr: '')
    {"currentNode", TreeWalkerV8Internal::currentNodeAttrGetter, TreeWalkerV8Internal::currentNodeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8TreeWalkerCallbacks[] = {
    {"parentNode", TreeWalkerV8Internal::parentNodeCallback},
    {"firstChild", TreeWalkerV8Internal::firstChildCallback},
    {"lastChild", TreeWalkerV8Internal::lastChildCallback},
    {"previousSibling", TreeWalkerV8Internal::previousSiblingCallback},
    {"nextSibling", TreeWalkerV8Internal::nextSiblingCallback},
    {"previousNode", TreeWalkerV8Internal::previousNodeCallback},
    {"nextNode", TreeWalkerV8Internal::nextNodeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TreeWalkerTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "TreeWalker", v8::Persistent<v8::FunctionTemplate>(), V8TreeWalker::internalFieldCount,
        V8TreeWalkerAttrs, WTF_ARRAY_LENGTH(V8TreeWalkerAttrs),
        V8TreeWalkerCallbacks, WTF_ARRAY_LENGTH(V8TreeWalkerCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TreeWalker::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8TreeWalker::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TreeWalkerTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TreeWalker::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TreeWalker::createWrapper(PassRefPtr<TreeWalker> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8TreeWalker::derefObject(void* object)
{
    static_cast<TreeWalker*>(object)->deref();
}

} // namespace WebCore