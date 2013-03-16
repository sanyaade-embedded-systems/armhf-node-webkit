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
#include "V8XPathResult.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8Node.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8XPathResult::info = { V8XPathResult::GetTemplate, V8XPathResult::derefObject, 0, 0, V8XPathResult::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace XPathResultV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> resultTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    return v8Integer(imp->resultType(), info.GetIsolate());
}

static v8::Handle<v8::Value> numberValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    ExceptionCode ec = 0;
    double v = imp->numberValue(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8::Number::New(v);
}

static v8::Handle<v8::Value> stringValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    ExceptionCode ec = 0;
    String v = imp->stringValue(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8String(v, info.GetIsolate());
}

static v8::Handle<v8::Value> booleanValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    ExceptionCode ec = 0;
    bool v = imp->booleanValue(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8Boolean(v, info.GetIsolate());
}

static v8::Handle<v8::Value> singleNodeValueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    ExceptionCode ec = 0;
    RefPtr<Node> v = imp->singleNodeValue(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return toV8Fast(v.release(), info, imp);
}

static v8::Handle<v8::Value> invalidIteratorStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    return v8Boolean(imp->invalidIteratorState(), info.GetIsolate());
}

static v8::Handle<v8::Value> snapshotLengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    XPathResult* imp = V8XPathResult::toNative(info.Holder());
    ExceptionCode ec = 0;
    unsigned v = imp->snapshotLength(ec);
    if (UNLIKELY(ec))
        return setDOMException(ec, info.GetIsolate());
    return v8UnsignedInteger(v, info.GetIsolate());
}

static v8::Handle<v8::Value> iterateNextCallback(const v8::Arguments& args)
{
    XPathResult* imp = V8XPathResult::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<Node> result = imp->iterateNext(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> snapshotItemCallback(const v8::Arguments& args)
{
    XPathResult* imp = V8XPathResult::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<Node> result = imp->snapshotItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace XPathResultV8Internal

static const V8DOMConfiguration::BatchedAttribute V8XPathResultAttrs[] = {
    // Attribute 'resultType' (Type: 'readonly attribute' ExtAttr: '')
    {"resultType", XPathResultV8Internal::resultTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'numberValue' (Type: 'readonly attribute' ExtAttr: '')
    {"numberValue", XPathResultV8Internal::numberValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'stringValue' (Type: 'readonly attribute' ExtAttr: '')
    {"stringValue", XPathResultV8Internal::stringValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'booleanValue' (Type: 'readonly attribute' ExtAttr: '')
    {"booleanValue", XPathResultV8Internal::booleanValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'singleNodeValue' (Type: 'readonly attribute' ExtAttr: '')
    {"singleNodeValue", XPathResultV8Internal::singleNodeValueAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'invalidIteratorState' (Type: 'readonly attribute' ExtAttr: '')
    {"invalidIteratorState", XPathResultV8Internal::invalidIteratorStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'snapshotLength' (Type: 'readonly attribute' ExtAttr: '')
    {"snapshotLength", XPathResultV8Internal::snapshotLengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8XPathResultCallbacks[] = {
    {"iterateNext", XPathResultV8Internal::iterateNextCallback},
    {"snapshotItem", XPathResultV8Internal::snapshotItemCallback},
};

static const V8DOMConfiguration::BatchedConstant V8XPathResultConsts[] = {
    {"ANY_TYPE", static_cast<signed int>(0)},
    {"NUMBER_TYPE", static_cast<signed int>(1)},
    {"STRING_TYPE", static_cast<signed int>(2)},
    {"BOOLEAN_TYPE", static_cast<signed int>(3)},
    {"UNORDERED_NODE_ITERATOR_TYPE", static_cast<signed int>(4)},
    {"ORDERED_NODE_ITERATOR_TYPE", static_cast<signed int>(5)},
    {"UNORDERED_NODE_SNAPSHOT_TYPE", static_cast<signed int>(6)},
    {"ORDERED_NODE_SNAPSHOT_TYPE", static_cast<signed int>(7)},
    {"ANY_UNORDERED_NODE_TYPE", static_cast<signed int>(8)},
    {"FIRST_ORDERED_NODE_TYPE", static_cast<signed int>(9)},
};


COMPILE_ASSERT(0 == XPathResult::ANY_TYPE, XPathResultEnumANY_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == XPathResult::NUMBER_TYPE, XPathResultEnumNUMBER_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == XPathResult::STRING_TYPE, XPathResultEnumSTRING_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == XPathResult::BOOLEAN_TYPE, XPathResultEnumBOOLEAN_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == XPathResult::UNORDERED_NODE_ITERATOR_TYPE, XPathResultEnumUNORDERED_NODE_ITERATOR_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == XPathResult::ORDERED_NODE_ITERATOR_TYPE, XPathResultEnumORDERED_NODE_ITERATOR_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == XPathResult::UNORDERED_NODE_SNAPSHOT_TYPE, XPathResultEnumUNORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == XPathResult::ORDERED_NODE_SNAPSHOT_TYPE, XPathResultEnumORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == XPathResult::ANY_UNORDERED_NODE_TYPE, XPathResultEnumANY_UNORDERED_NODE_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(9 == XPathResult::FIRST_ORDERED_NODE_TYPE, XPathResultEnumFIRST_ORDERED_NODE_TYPEIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8XPathResultTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "XPathResult", v8::Persistent<v8::FunctionTemplate>(), V8XPathResult::internalFieldCount,
        V8XPathResultAttrs, WTF_ARRAY_LENGTH(V8XPathResultAttrs),
        V8XPathResultCallbacks, WTF_ARRAY_LENGTH(V8XPathResultCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8XPathResultConsts, WTF_ARRAY_LENGTH(V8XPathResultConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8XPathResult::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8XPathResult::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8XPathResultTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8XPathResult::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8XPathResult::createWrapper(PassRefPtr<XPathResult> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8XPathResult::derefObject(void* object)
{
    static_cast<XPathResult*>(object)->deref();
}

} // namespace WebCore
