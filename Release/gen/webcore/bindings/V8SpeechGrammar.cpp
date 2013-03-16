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
#include "V8SpeechGrammar.h"

#if ENABLE(SCRIPTED_SPEECH)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SpeechGrammar::info = { V8SpeechGrammar::GetTemplate, V8SpeechGrammar::derefObject, 0, 0, V8SpeechGrammar::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SpeechGrammarV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> srcAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechGrammar* imp = V8SpeechGrammar::toNative(info.Holder());
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    return v8String(imp->src(scriptContext), info.GetIsolate());
}

static void srcAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechGrammar* imp = V8SpeechGrammar::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<>, v, value);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    imp->setSrc(scriptContext, v);
    return;
}

static v8::Handle<v8::Value> weightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    SpeechGrammar* imp = V8SpeechGrammar::toNative(info.Holder());
    return v8::Number::New(imp->weight());
}

static void weightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    SpeechGrammar* imp = V8SpeechGrammar::toNative(info.Holder());
    float v = static_cast<float>(value->NumberValue());
    imp->setWeight(v);
    return;
}

} // namespace SpeechGrammarV8Internal

static const V8DOMConfiguration::BatchedAttribute V8SpeechGrammarAttrs[] = {
    // Attribute 'src' (Type: 'attribute' ExtAttr: 'URL CallWith')
    {"src", SpeechGrammarV8Internal::srcAttrGetter, SpeechGrammarV8Internal::srcAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'weight' (Type: 'attribute' ExtAttr: '')
    {"weight", SpeechGrammarV8Internal::weightAttrGetter, SpeechGrammarV8Internal::weightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

v8::Handle<v8::Value> V8SpeechGrammar::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    RefPtr<SpeechGrammar> impl = SpeechGrammar::create();
    v8::Handle<v8::Object> wrapper = args.Holder();

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SpeechGrammarTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SpeechGrammar", v8::Persistent<v8::FunctionTemplate>(), V8SpeechGrammar::internalFieldCount,
        V8SpeechGrammarAttrs, WTF_ARRAY_LENGTH(V8SpeechGrammarAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8SpeechGrammar::constructorCallback);
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SpeechGrammar::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SpeechGrammar::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SpeechGrammarTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SpeechGrammar::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SpeechGrammar::createWrapper(PassRefPtr<SpeechGrammar> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8SpeechGrammar::derefObject(void* object)
{
    static_cast<SpeechGrammar*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SCRIPTED_SPEECH)
