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
#include "V8Text.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8CharacterData.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8Text::info = { V8Text::GetTemplate, V8Text::derefObject, 0, 0, V8Text::installPerContextPrototypeProperties, &V8CharacterData::info, WrapperTypeObjectPrototype };

namespace TextV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> wholeTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Text* imp = V8Text::toNative(info.Holder());
    return v8String(imp->wholeText(), info.GetIsolate());
}

static v8::Handle<v8::Value> splitTextCallback(const v8::Arguments& args)
{
    Text* imp = V8Text::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    RefPtr<Text> result = imp->splitText(offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(result.release(), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> replaceWholeTextCallback(const v8::Arguments& args)
{
    Text* imp = V8Text::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, content, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    RefPtr<Text> result = imp->replaceWholeText(content, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(result.release(), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

} // namespace TextV8Internal

static const V8DOMConfiguration::BatchedAttribute V8TextAttrs[] = {
    // Attribute 'wholeText' (Type: 'readonly attribute' ExtAttr: '')
    {"wholeText", TextV8Internal::wholeTextAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8TextCallbacks[] = {
    {"splitText", TextV8Internal::splitTextCallback},
    {"replaceWholeText", TextV8Internal::replaceWholeTextCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TextTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "Text", V8CharacterData::GetTemplate(), V8Text::internalFieldCount,
        V8TextAttrs, WTF_ARRAY_LENGTH(V8TextAttrs),
        V8TextCallbacks, WTF_ARRAY_LENGTH(V8TextCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Text::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Text::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TextTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Text::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Text::createWrapper(PassRefPtr<Text> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Node*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8Text::derefObject(void* object)
{
    static_cast<Text*>(object)->deref();
}

} // namespace WebCore