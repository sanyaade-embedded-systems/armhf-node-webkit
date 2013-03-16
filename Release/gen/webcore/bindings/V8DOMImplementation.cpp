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
#include "V8DOMImplementation.h"

#include "BindingState.h"
#include "CSSImportRule.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CSSStyleSheet.h"
#include "V8DOMWrapper.h"
#include "V8Document.h"
#include "V8DocumentType.h"
#include "V8GCController.h"
#include "V8HTMLDocument.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8DOMImplementation::info = { V8DOMImplementation::GetTemplate, V8DOMImplementation::derefObject, 0, V8DOMImplementation::opaqueRootForGC, V8DOMImplementation::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace DOMImplementationV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> hasFeatureCallback(const v8::Arguments& args)
{
    DOMImplementation* imp = V8DOMImplementation::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, feature, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, version, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    return v8Boolean(imp->hasFeature(feature, version), args.GetIsolate());
}

static v8::Handle<v8::Value> createDocumentTypeCallback(const v8::Arguments& args)
{
    DOMImplementation* imp = V8DOMImplementation::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithUndefinedOrNullCheck>, qualifiedName, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithUndefinedOrNullCheck>, publicId, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithUndefinedOrNullCheck>, systemId, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined));
    RefPtr<DocumentType> result = imp->createDocumentType(qualifiedName, publicId, systemId, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> createDocumentCallback(const v8::Arguments& args)
{
    DOMImplementation* imp = V8DOMImplementation::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, namespaceURI, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<WithNullCheck>, qualifiedName, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    V8TRYCATCH(DocumentType*, doctype, V8DocumentType::HasInstance(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)) ? V8DocumentType::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined))) : 0);
    RefPtr<Document> result = imp->createDocument(namespaceURI, qualifiedName, doctype, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> createCSSStyleSheetCallback(const v8::Arguments& args)
{
    DOMImplementation* imp = V8DOMImplementation::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, title, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, media, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    RefPtr<CSSStyleSheet> result = imp->createCSSStyleSheet(title, media, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> createHTMLDocumentCallback(const v8::Arguments& args)
{
    DOMImplementation* imp = V8DOMImplementation::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, title, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsNullString));
    return toV8(imp->createHTMLDocument(title), args.Holder(), args.GetIsolate());
}

} // namespace DOMImplementationV8Internal

void* V8DOMImplementation::opaqueRootForGC(void* object, v8::Persistent<v8::Object> wrapper)
{
    ASSERT(!wrapper.IsIndependent());
    DOMImplementation* impl = static_cast<DOMImplementation*>(object);
    if (Node* owner = impl->document())
        return V8GCController::opaqueRootForGC(owner);
    return object;
}

static const V8DOMConfiguration::BatchedCallback V8DOMImplementationCallbacks[] = {
    {"hasFeature", DOMImplementationV8Internal::hasFeatureCallback},
    {"createDocumentType", DOMImplementationV8Internal::createDocumentTypeCallback},
    {"createCSSStyleSheet", DOMImplementationV8Internal::createCSSStyleSheetCallback},
    {"createHTMLDocument", DOMImplementationV8Internal::createHTMLDocumentCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DOMImplementationTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "DOMImplementation", v8::Persistent<v8::FunctionTemplate>(), V8DOMImplementation::internalFieldCount,
        0, 0,
        V8DOMImplementationCallbacks, WTF_ARRAY_LENGTH(V8DOMImplementationCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'createDocument'
    const int createDocumentArgc = 3;
    v8::Handle<v8::FunctionTemplate> createDocumentArgv[createDocumentArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DocumentType::GetRawTemplate() };
    v8::Handle<v8::Signature> createDocumentSignature = v8::Signature::New(desc, createDocumentArgc, createDocumentArgv);
    proto->Set(v8::String::NewSymbol("createDocument"), v8::FunctionTemplate::New(DOMImplementationV8Internal::createDocumentCallback, v8Undefined(), createDocumentSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DOMImplementation::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DOMImplementation::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DOMImplementationTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DOMImplementation::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DOMImplementation::createWrapper(PassRefPtr<DOMImplementation> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8DOMImplementation::derefObject(void* object)
{
    static_cast<DOMImplementation*>(object)->deref();
}

} // namespace WebCore