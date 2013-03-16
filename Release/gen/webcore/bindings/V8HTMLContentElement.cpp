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
#include "V8HTMLContentElement.h"

#if ENABLE(SHADOW_DOM)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8NodeList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLContentElement::info = { V8HTMLContentElement::GetTemplate, V8HTMLContentElement::derefObject, 0, 0, V8HTMLContentElement::installPerContextPrototypeProperties, &V8HTMLElement::info, WrapperTypeObjectPrototype };

namespace HTMLContentElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> selectAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::selectAttr), info.GetIsolate());
}

static void selectAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::selectAttr, stringResource);
}

static v8::Handle<v8::Value> resetStyleInheritanceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLContentElement* imp = V8HTMLContentElement::toNative(info.Holder());
    return v8Boolean(imp->resetStyleInheritance(), info.GetIsolate());
}

static void resetStyleInheritanceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLContentElement* imp = V8HTMLContentElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setResetStyleInheritance(v);
    return;
}

static v8::Handle<v8::Value> getDistributedNodesCallback(const v8::Arguments& args)
{
    HTMLContentElement* imp = V8HTMLContentElement::toNative(args.Holder());
    return toV8Fast(imp->getDistributedNodes(), args, imp);
}

} // namespace HTMLContentElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLContentElementAttrs[] = {
    // Attribute 'select' (Type: 'attribute' ExtAttr: 'Reflect')
    {"select", HTMLContentElementV8Internal::selectAttrGetter, HTMLContentElementV8Internal::selectAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'resetStyleInheritance' (Type: 'attribute' ExtAttr: '')
    {"resetStyleInheritance", HTMLContentElementV8Internal::resetStyleInheritanceAttrGetter, HTMLContentElementV8Internal::resetStyleInheritanceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8HTMLContentElementCallbacks[] = {
    {"getDistributedNodes", HTMLContentElementV8Internal::getDistributedNodesCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLContentElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::shadowDOMEnabled())
        defaultSignature = V8DOMConfiguration::configureTemplate(desc, "", V8HTMLElement::GetTemplate(), V8HTMLContentElement::internalFieldCount, 0, 0, 0, 0);
    else
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLContentElement", V8HTMLElement::GetTemplate(), V8HTMLContentElement::internalFieldCount,
        V8HTMLContentElementAttrs, WTF_ARRAY_LENGTH(V8HTMLContentElementAttrs),
        V8HTMLContentElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLContentElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLContentElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLContentElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLContentElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLContentElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLContentElement::createWrapper(PassRefPtr<HTMLContentElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLContentElement::derefObject(void* object)
{
    static_cast<HTMLContentElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SHADOW_DOM)