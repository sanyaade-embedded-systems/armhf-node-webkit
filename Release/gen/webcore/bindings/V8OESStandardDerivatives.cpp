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
#include "V8OESStandardDerivatives.h"

#if ENABLE(WEBGL)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8OESStandardDerivatives::info = { V8OESStandardDerivatives::GetTemplate, V8OESStandardDerivatives::derefObject, 0, 0, V8OESStandardDerivatives::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace OESStandardDerivativesV8Internal {

template <typename T> void V8_USE(T) { }

} // namespace OESStandardDerivativesV8Internal

static const V8DOMConfiguration::BatchedConstant V8OESStandardDerivativesConsts[] = {
    {"FRAGMENT_SHADER_DERIVATIVE_HINT_OES", static_cast<signed int>(0x8B8B)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8OESStandardDerivativesTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "OESStandardDerivatives", v8::Persistent<v8::FunctionTemplate>(), V8OESStandardDerivatives::internalFieldCount,
        0, 0,
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8OESStandardDerivativesConsts, WTF_ARRAY_LENGTH(V8OESStandardDerivativesConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8OESStandardDerivatives::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8OESStandardDerivatives::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8OESStandardDerivativesTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8OESStandardDerivatives::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8OESStandardDerivatives::createWrapper(PassRefPtr<OESStandardDerivatives> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8OESStandardDerivatives::derefObject(void* object)
{
    static_cast<OESStandardDerivatives*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEBGL)
