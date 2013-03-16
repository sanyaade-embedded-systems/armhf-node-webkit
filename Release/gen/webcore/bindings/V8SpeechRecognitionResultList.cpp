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
#include "V8SpeechRecognitionResultList.h"

#if ENABLE(SCRIPTED_SPEECH)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8SpeechRecognitionResult.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SpeechRecognitionResultList::info = { V8SpeechRecognitionResultList::GetTemplate, V8SpeechRecognitionResultList::derefObject, 0, 0, V8SpeechRecognitionResultList::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SpeechRecognitionResultListV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechRecognitionResultList* imp = V8SpeechRecognitionResultList::toNative(info.Holder());
    return v8UnsignedInteger(imp->length(), info.GetIsolate());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    if (args.Length() < 1)
        return throwNotEnoughArgumentsError(args.GetIsolate());
    SpeechRecognitionResultList* imp = V8SpeechRecognitionResultList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(int, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (UNLIKELY(index < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    return toV8(imp->item(index), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace SpeechRecognitionResultListV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SpeechRecognitionResultListAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", SpeechRecognitionResultListV8Internal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8SpeechRecognitionResultListCallbacks[] = {
    {"item", SpeechRecognitionResultListV8Internal::itemCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SpeechRecognitionResultListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SpeechRecognitionResultList", v8::Persistent<v8::FunctionTemplate>(), V8SpeechRecognitionResultList::internalFieldCount,
        V8SpeechRecognitionResultListAttrs, WTF_ARRAY_LENGTH(V8SpeechRecognitionResultListAttrs),
        V8SpeechRecognitionResultListCallbacks, WTF_ARRAY_LENGTH(V8SpeechRecognitionResultListCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    setCollectionIndexedGetter<SpeechRecognitionResultList, SpeechRecognitionResult>(desc);

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SpeechRecognitionResultList::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SpeechRecognitionResultList::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SpeechRecognitionResultListTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SpeechRecognitionResultList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SpeechRecognitionResultList::createWrapper(PassRefPtr<SpeechRecognitionResultList> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SpeechRecognitionResultList::derefObject(void* object)
{
    static_cast<SpeechRecognitionResultList*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SCRIPTED_SPEECH)
