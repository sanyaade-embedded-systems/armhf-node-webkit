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
#include "V8ClientRect.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8ClientRect::info = { V8ClientRect::GetTemplate, V8ClientRect::derefObject, 0, 0, V8ClientRect::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace ClientRectV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> topAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->top());
}

static v8::Handle<v8::Value> rightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->right());
}

static v8::Handle<v8::Value> bottomAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->bottom());
}

static v8::Handle<v8::Value> leftAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->left());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->width());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    ClientRect* imp = V8ClientRect::toNative(info.Holder());
    return v8::Number::New(imp->height());
}

} // namespace ClientRectV8Internal

static const V8DOMConfiguration::BatchedAttribute V8ClientRectAttrs[] = {
    // Attribute 'top' (Type: 'readonly attribute' ExtAttr: '')
    {"top", ClientRectV8Internal::topAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'right' (Type: 'readonly attribute' ExtAttr: '')
    {"right", ClientRectV8Internal::rightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bottom' (Type: 'readonly attribute' ExtAttr: '')
    {"bottom", ClientRectV8Internal::bottomAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'left' (Type: 'readonly attribute' ExtAttr: '')
    {"left", ClientRectV8Internal::leftAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", ClientRectV8Internal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", ClientRectV8Internal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8ClientRectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "ClientRect", v8::Persistent<v8::FunctionTemplate>(), V8ClientRect::internalFieldCount,
        V8ClientRectAttrs, WTF_ARRAY_LENGTH(V8ClientRectAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ClientRect::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8ClientRect::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8ClientRectTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8ClientRect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8ClientRect::createWrapper(PassRefPtr<ClientRect> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8ClientRect::derefObject(void* object)
{
    static_cast<ClientRect*>(object)->deref();
}

} // namespace WebCore