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
#include "V8SVGTransformList.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8SVGMatrix.h"
#include "V8SVGTransform.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGTransformList::info = { V8SVGTransformList::GetTemplate, V8SVGTransformList::derefObject, 0, 0, V8SVGTransformList::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SVGTransformListV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> numberOfItemsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SVGTransformListPropertyTearOff* imp = V8SVGTransformList::toNative(info.Holder());
    return v8UnsignedInteger(imp->numberOfItems(), info.GetIsolate());
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->clear(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> initializeCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGTransform::HasInstance(args[0]))
        return throwTypeError(0, args.GetIsolate());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGTransform> >, item, V8SVGTransform::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGTransform::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->initialize(item, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->getItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> insertItemBeforeCallback(const v8::Arguments& args)
{
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGTransform::HasInstance(args[0]))
        return throwTypeError(0, args.GetIsolate());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGTransform> >, item, V8SVGTransform::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGTransform::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->insertItemBefore(item, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> replaceItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 2)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGTransform::HasInstance(args[0]))
        return throwTypeError(0, args.GetIsolate());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGTransform> >, item, V8SVGTransform::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGTransform::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)));
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->replaceItem(item, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->removeItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> appendItemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGTransform::HasInstance(args[0]))
        return throwTypeError(0, args.GetIsolate());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGTransform> >, item, V8SVGTransform::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGTransform::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->appendItem(item, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> createSVGTransformFromMatrixCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGMatrix::HasInstance(args[0]))
        return throwTypeError(0, args.GetIsolate());
    V8TRYCATCH(RefPtr<SVGPropertyTearOff<SVGMatrix> >, matrix, V8SVGMatrix::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8SVGMatrix::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->createSVGTransformFromMatrix(matrix.get(), ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> consolidateCallback(const v8::Arguments& args)
{
    RefPtr<SVGTransformListPropertyTearOff > imp = V8SVGTransformList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<SVGPropertyTearOff<SVGTransform> > result = imp->consolidate(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace SVGTransformListV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SVGTransformListAttrs[] = {
    // Attribute 'numberOfItems' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfItems", SVGTransformListV8Internal::numberOfItemsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SVGTransformListCallbacks[] = {
    {"clear", SVGTransformListV8Internal::clearCallback},
    {"initialize", SVGTransformListV8Internal::initializeCallback},
    {"getItem", SVGTransformListV8Internal::getItemCallback},
    {"insertItemBefore", SVGTransformListV8Internal::insertItemBeforeCallback},
    {"replaceItem", SVGTransformListV8Internal::replaceItemCallback},
    {"removeItem", SVGTransformListV8Internal::removeItemCallback},
    {"appendItem", SVGTransformListV8Internal::appendItemCallback},
    {"createSVGTransformFromMatrix", SVGTransformListV8Internal::createSVGTransformFromMatrixCallback},
    {"consolidate", SVGTransformListV8Internal::consolidateCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGTransformListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGTransformList", v8::Persistent<v8::FunctionTemplate>(), V8SVGTransformList::internalFieldCount,
        V8SVGTransformListAttrs, WTF_ARRAY_LENGTH(V8SVGTransformListAttrs),
        V8SVGTransformListCallbacks, WTF_ARRAY_LENGTH(V8SVGTransformListCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTransformList::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGTransformList::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGTransformListTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGTransformList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGTransformList::createWrapper(PassRefPtr<SVGTransformListPropertyTearOff> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SVGTransformList::derefObject(void* object)
{
    static_cast<SVGTransformListPropertyTearOff*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
