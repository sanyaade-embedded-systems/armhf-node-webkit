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
#include "V8IDBKeyRange.h"

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
#include "V8IDBKey.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8IDBKeyRange::info = { V8IDBKeyRange::GetTemplate, V8IDBKeyRange::derefObject, 0, 0, V8IDBKeyRange::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace IDBKeyRangeV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lowerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBKeyRange* imp = V8IDBKeyRange::toNative(info.Holder());
    return toV8Fast(imp->lower(), info, imp);
}

static v8::Handle<v8::Value> upperAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBKeyRange* imp = V8IDBKeyRange::toNative(info.Holder());
    return toV8Fast(imp->upper(), info, imp);
}

static v8::Handle<v8::Value> lowerOpenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBKeyRange* imp = V8IDBKeyRange::toNative(info.Holder());
    return v8Boolean(imp->lowerOpen(), info.GetIsolate());
}

static v8::Handle<v8::Value> upperOpenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    IDBKeyRange* imp = V8IDBKeyRange::toNative(info.Holder());
    return v8Boolean(imp->upperOpen(), info.GetIsolate());
}

static v8::Handle<v8::Value> onlyCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, value, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<IDBKeyRange> result = IDBKeyRange::only(value.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> lowerBoundCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, bound, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (args.Length() <= 1) {
        RefPtr<IDBKeyRange> result = IDBKeyRange::lowerBound(bound.get(), ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(bool, open, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->BooleanValue());
    RefPtr<IDBKeyRange> result = IDBKeyRange::lowerBound(bound.get(), open, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> upperBoundCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, bound, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (args.Length() <= 1) {
        RefPtr<IDBKeyRange> result = IDBKeyRange::upperBound(bound.get(), ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(bool, open, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->BooleanValue());
    RefPtr<IDBKeyRange> result = IDBKeyRange::upperBound(bound.get(), open, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> boundCallback(const v8::Arguments& args)
{
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(RefPtr<IDBKey>, lower, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    V8TRYCATCH(RefPtr<IDBKey>, upper, createIDBKeyFromValue(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    if (args.Length() <= 2) {
        RefPtr<IDBKeyRange> result = IDBKeyRange::bound(lower.get(), upper.get(), ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(bool, lowerOpen, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->BooleanValue());
    if (args.Length() <= 3) {
        RefPtr<IDBKeyRange> result = IDBKeyRange::bound(lower.get(), upper.get(), lowerOpen, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    V8TRYCATCH(bool, upperOpen, MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined)->BooleanValue());
    RefPtr<IDBKeyRange> result = IDBKeyRange::bound(lower.get(), upper.get(), lowerOpen, upperOpen, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace IDBKeyRangeV8Internal

static const V8DOMConfiguration::BatchedAttribute V8IDBKeyRangeAttrs[] = {
    // Attribute 'lower' (Type: 'readonly attribute' ExtAttr: '')
    {"lower", IDBKeyRangeV8Internal::lowerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'upper' (Type: 'readonly attribute' ExtAttr: '')
    {"upper", IDBKeyRangeV8Internal::upperAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lowerOpen' (Type: 'readonly attribute' ExtAttr: '')
    {"lowerOpen", IDBKeyRangeV8Internal::lowerOpenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'upperOpen' (Type: 'readonly attribute' ExtAttr: '')
    {"upperOpen", IDBKeyRangeV8Internal::upperOpenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBKeyRangeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "IDBKeyRange", v8::Persistent<v8::FunctionTemplate>(), V8IDBKeyRange::internalFieldCount,
        V8IDBKeyRangeAttrs, WTF_ARRAY_LENGTH(V8IDBKeyRangeAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    desc->Set(v8::String::NewSymbol("only"), v8::FunctionTemplate::New(IDBKeyRangeV8Internal::onlyCallback, v8Undefined(), v8::Local<v8::Signature>()));
    desc->Set(v8::String::NewSymbol("lowerBound"), v8::FunctionTemplate::New(IDBKeyRangeV8Internal::lowerBoundCallback, v8Undefined(), v8::Local<v8::Signature>()));
    desc->Set(v8::String::NewSymbol("upperBound"), v8::FunctionTemplate::New(IDBKeyRangeV8Internal::upperBoundCallback, v8Undefined(), v8::Local<v8::Signature>()));
    desc->Set(v8::String::NewSymbol("bound"), v8::FunctionTemplate::New(IDBKeyRangeV8Internal::boundCallback, v8Undefined(), v8::Local<v8::Signature>()));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBKeyRange::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBKeyRange::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBKeyRangeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBKeyRange::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBKeyRange::createWrapper(PassRefPtr<IDBKeyRange> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8IDBKeyRange::derefObject(void* object)
{
    static_cast<IDBKeyRange*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)