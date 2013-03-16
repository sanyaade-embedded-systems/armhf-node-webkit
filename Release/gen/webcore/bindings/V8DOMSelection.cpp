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
#include "V8DOMSelection.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Node.h"
#include "V8Range.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DOMSelection::info = { V8DOMSelection::GetTemplate, V8DOMSelection::derefObject, 0, 0, V8DOMSelection::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace DOMSelectionV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> anchorNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return toV8Fast(imp->anchorNode(), info, imp);
}

static v8::Handle<v8::Value> anchorOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Integer(imp->anchorOffset(), info.GetIsolate());
}

static v8::Handle<v8::Value> focusNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return toV8Fast(imp->focusNode(), info, imp);
}

static v8::Handle<v8::Value> focusOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Integer(imp->focusOffset(), info.GetIsolate());
}

static v8::Handle<v8::Value> isCollapsedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Boolean(imp->isCollapsed(), info.GetIsolate());
}

static v8::Handle<v8::Value> rangeCountAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Integer(imp->rangeCount(), info.GetIsolate());
}

static v8::Handle<v8::Value> baseNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return toV8Fast(imp->baseNode(), info, imp);
}

static v8::Handle<v8::Value> baseOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Integer(imp->baseOffset(), info.GetIsolate());
}

static v8::Handle<v8::Value> extentNodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return toV8Fast(imp->extentNode(), info, imp);
}

static v8::Handle<v8::Value> extentOffsetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8Integer(imp->extentOffset(), info.GetIsolate());
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    DOMSelection* imp = V8DOMSelection::toNative(info.Holder());
    return v8String(imp->type(), info.GetIsolate());
}

static v8::Handle<v8::Value> collapseCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Node*, node, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, index, toInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    imp->collapse(node, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> collapseToEndCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->collapseToEnd(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> collapseToStartCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->collapseToStart(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> deleteFromDocumentCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    imp->deleteFromDocument();
    return v8Undefined();
}

static v8::Handle<v8::Value> containsNodeCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    V8TRYCATCH(Node*, node, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(bool, allowPartial, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->BooleanValue());
    return v8Boolean(imp->containsNode(node, allowPartial), args.GetIsolate());
}

static v8::Handle<v8::Value> selectAllChildrenCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Node*, node, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->selectAllChildren(node, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> extendCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Node*, node, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, offset, toInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    imp->extend(node, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getRangeAtCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(int, index, toInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<Range> result = imp->getRangeAt(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> removeAllRangesCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    imp->removeAllRanges();
    return v8Undefined();
}

static v8::Handle<v8::Value> addRangeCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    V8TRYCATCH(Range*, range, V8Range::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Range::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    imp->addRange(range);
    return v8Undefined();
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    return v8String(imp->toString(), args.GetIsolate());
}

static v8::Handle<v8::Value> modifyCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, alter, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, direction, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, granularity, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined));
    imp->modify(alter, direction, granularity);
    return v8Undefined();
}

static v8::Handle<v8::Value> setBaseAndExtentCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Node*, baseNode, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, baseOffset, toInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    V8TRYCATCH(Node*, extentNode, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, extentOffset, toInt32(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined)));
    imp->setBaseAndExtent(baseNode, baseOffset, extentNode, extentOffset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> setPositionCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(Node*, node, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, offset, toInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    imp->setPosition(node, offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> emptyCallback(const v8::Arguments& args)
{
    DOMSelection* imp = V8DOMSelection::toNative(args.Holder());
    imp->empty();
    return v8Undefined();
}

} // namespace DOMSelectionV8Internal

static const V8DOMConfiguration::BatchedAttribute V8DOMSelectionAttrs[] = {
    // Attribute 'anchorNode' (Type: 'readonly attribute' ExtAttr: '')
    {"anchorNode", DOMSelectionV8Internal::anchorNodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'anchorOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"anchorOffset", DOMSelectionV8Internal::anchorOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'focusNode' (Type: 'readonly attribute' ExtAttr: '')
    {"focusNode", DOMSelectionV8Internal::focusNodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'focusOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"focusOffset", DOMSelectionV8Internal::focusOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'isCollapsed' (Type: 'readonly attribute' ExtAttr: '')
    {"isCollapsed", DOMSelectionV8Internal::isCollapsedAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'rangeCount' (Type: 'readonly attribute' ExtAttr: '')
    {"rangeCount", DOMSelectionV8Internal::rangeCountAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'baseNode' (Type: 'readonly attribute' ExtAttr: '')
    {"baseNode", DOMSelectionV8Internal::baseNodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'baseOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"baseOffset", DOMSelectionV8Internal::baseOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'extentNode' (Type: 'readonly attribute' ExtAttr: '')
    {"extentNode", DOMSelectionV8Internal::extentNodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'extentOffset' (Type: 'readonly attribute' ExtAttr: '')
    {"extentOffset", DOMSelectionV8Internal::extentOffsetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: '')
    {"type", DOMSelectionV8Internal::typeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8DOMSelectionCallbacks[] = {
    {"collapseToEnd", DOMSelectionV8Internal::collapseToEndCallback},
    {"collapseToStart", DOMSelectionV8Internal::collapseToStartCallback},
    {"deleteFromDocument", DOMSelectionV8Internal::deleteFromDocumentCallback},
    {"getRangeAt", DOMSelectionV8Internal::getRangeAtCallback},
    {"removeAllRanges", DOMSelectionV8Internal::removeAllRangesCallback},
    {"modify", DOMSelectionV8Internal::modifyCallback},
    {"empty", DOMSelectionV8Internal::emptyCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMSelectionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Selection", v8::Persistent<v8::FunctionTemplate>(), V8DOMSelection::internalFieldCount,
        V8DOMSelectionAttrs, WTF_ARRAY_LENGTH(V8DOMSelectionAttrs),
        V8DOMSelectionCallbacks, WTF_ARRAY_LENGTH(V8DOMSelectionCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'collapse'
    const int collapseArgc = 2;
    v8::Handle<v8::FunctionTemplate> collapseArgv[collapseArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> collapseSignature = v8::Signature::New(desc, collapseArgc, collapseArgv);
    proto->Set(v8::String::NewSymbol("collapse"), v8::FunctionTemplate::New(DOMSelectionV8Internal::collapseCallback, v8Undefined(), collapseSignature));

    // Custom Signature 'containsNode'
    const int containsNodeArgc = 2;
    v8::Handle<v8::FunctionTemplate> containsNodeArgv[containsNodeArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> containsNodeSignature = v8::Signature::New(desc, containsNodeArgc, containsNodeArgv);
    proto->Set(v8::String::NewSymbol("containsNode"), v8::FunctionTemplate::New(DOMSelectionV8Internal::containsNodeCallback, v8Undefined(), containsNodeSignature));

    // Custom Signature 'selectAllChildren'
    const int selectAllChildrenArgc = 1;
    v8::Handle<v8::FunctionTemplate> selectAllChildrenArgv[selectAllChildrenArgc] = { V8Node::GetRawTemplate() };
    v8::Handle<v8::Signature> selectAllChildrenSignature = v8::Signature::New(desc, selectAllChildrenArgc, selectAllChildrenArgv);
    proto->Set(v8::String::NewSymbol("selectAllChildren"), v8::FunctionTemplate::New(DOMSelectionV8Internal::selectAllChildrenCallback, v8Undefined(), selectAllChildrenSignature));

    // Custom Signature 'extend'
    const int extendArgc = 2;
    v8::Handle<v8::FunctionTemplate> extendArgv[extendArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> extendSignature = v8::Signature::New(desc, extendArgc, extendArgv);
    proto->Set(v8::String::NewSymbol("extend"), v8::FunctionTemplate::New(DOMSelectionV8Internal::extendCallback, v8Undefined(), extendSignature));

    // Custom Signature 'addRange'
    const int addRangeArgc = 1;
    v8::Handle<v8::FunctionTemplate> addRangeArgv[addRangeArgc] = { V8Range::GetRawTemplate() };
    v8::Handle<v8::Signature> addRangeSignature = v8::Signature::New(desc, addRangeArgc, addRangeArgv);
    proto->Set(v8::String::NewSymbol("addRange"), v8::FunctionTemplate::New(DOMSelectionV8Internal::addRangeCallback, v8Undefined(), addRangeSignature));
    proto->Set(v8::String::NewSymbol("toString"), v8::FunctionTemplate::New(DOMSelectionV8Internal::toStringCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom Signature 'setBaseAndExtent'
    const int setBaseAndExtentArgc = 4;
    v8::Handle<v8::FunctionTemplate> setBaseAndExtentArgv[setBaseAndExtentArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> setBaseAndExtentSignature = v8::Signature::New(desc, setBaseAndExtentArgc, setBaseAndExtentArgv);
    proto->Set(v8::String::NewSymbol("setBaseAndExtent"), v8::FunctionTemplate::New(DOMSelectionV8Internal::setBaseAndExtentCallback, v8Undefined(), setBaseAndExtentSignature));

    // Custom Signature 'setPosition'
    const int setPositionArgc = 2;
    v8::Handle<v8::FunctionTemplate> setPositionArgv[setPositionArgc] = { V8Node::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> setPositionSignature = v8::Signature::New(desc, setPositionArgc, setPositionArgv);
    proto->Set(v8::String::NewSymbol("setPosition"), v8::FunctionTemplate::New(DOMSelectionV8Internal::setPositionCallback, v8Undefined(), setPositionSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMSelection::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DOMSelection::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DOMSelectionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DOMSelection::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMSelection::createWrapper(PassRefPtr<DOMSelection> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DOMSelection::derefObject(void* object)
{
    static_cast<DOMSelection*>(object)->deref();
}

} // namespace WebCore
