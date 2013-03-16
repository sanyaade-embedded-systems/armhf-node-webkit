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
#include "V8MouseEvent.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8Clipboard.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8EventTarget.h"
#include "V8Node.h"
#include "V8UIEvent.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8MouseEvent::info = { V8MouseEvent::GetTemplate, V8MouseEvent::derefObject, 0, 0, V8MouseEvent::installPerContextPrototypeProperties, &V8UIEvent::info, WrapperTypeObjectPrototype };

namespace MouseEventV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> screenXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->screenX(), info.GetIsolate());
}

static v8::Handle<v8::Value> screenYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->screenY(), info.GetIsolate());
}

static v8::Handle<v8::Value> clientXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->clientX(), info.GetIsolate());
}

static v8::Handle<v8::Value> clientYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->clientY(), info.GetIsolate());
}

#if ENABLE(POINTER_LOCK)

static v8::Handle<v8::Value> webkitMovementXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->webkitMovementX(), info.GetIsolate());
}

#endif // ENABLE(POINTER_LOCK)

#if ENABLE(POINTER_LOCK)

static v8::Handle<v8::Value> webkitMovementYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->webkitMovementY(), info.GetIsolate());
}

#endif // ENABLE(POINTER_LOCK)

static v8::Handle<v8::Value> ctrlKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->ctrlKey(), info.GetIsolate());
}

static v8::Handle<v8::Value> shiftKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->shiftKey(), info.GetIsolate());
}

static v8::Handle<v8::Value> altKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->altKey(), info.GetIsolate());
}

static v8::Handle<v8::Value> metaKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Boolean(imp->metaKey(), info.GetIsolate());
}

static v8::Handle<v8::Value> buttonAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->button(), info.GetIsolate());
}

static v8::Handle<v8::Value> relatedTargetAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return toV8Fast(imp->relatedTarget(), info, imp);
}

static v8::Handle<v8::Value> offsetXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->offsetX(), info.GetIsolate());
}

static v8::Handle<v8::Value> offsetYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->offsetY(), info.GetIsolate());
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->x(), info.GetIsolate());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return v8Integer(imp->y(), info.GetIsolate());
}

static v8::Handle<v8::Value> fromElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return toV8Fast(imp->fromElement(), info, imp);
}

static v8::Handle<v8::Value> toElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    return toV8Fast(imp->toElement(), info, imp);
}

static v8::Handle<v8::Value> dataTransferAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    MouseEvent* imp = V8MouseEvent::toNative(info.Holder());
    RefPtr<Clipboard> result = imp->dataTransfer();
    v8::Handle<v8::Value> wrapper = result.get() ? v8::Handle<v8::Value>(DOMDataStore::getWrapper(result.get(), info.GetIsolate())) : v8Undefined();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get(), info.Holder(), info.GetIsolate());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "dataTransfer", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> initMouseEventCallback(const v8::Arguments& args)
{
    MouseEvent* imp = V8MouseEvent::toNative(args.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, type, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH(bool, canBubble, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(bool, cancelable, MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(DOMWindow*, view, V8DOMWindow::HasInstance(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined)) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined))) : 0);
    V8TRYCATCH(int, detail, toInt32(MAYBE_MISSING_PARAMETER(args, 4, DefaultIsUndefined)));
    V8TRYCATCH(int, screenX, toInt32(MAYBE_MISSING_PARAMETER(args, 5, DefaultIsUndefined)));
    V8TRYCATCH(int, screenY, toInt32(MAYBE_MISSING_PARAMETER(args, 6, DefaultIsUndefined)));
    V8TRYCATCH(int, clientX, toInt32(MAYBE_MISSING_PARAMETER(args, 7, DefaultIsUndefined)));
    V8TRYCATCH(int, clientY, toInt32(MAYBE_MISSING_PARAMETER(args, 8, DefaultIsUndefined)));
    V8TRYCATCH(bool, ctrlKey, MAYBE_MISSING_PARAMETER(args, 9, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(bool, altKey, MAYBE_MISSING_PARAMETER(args, 10, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(bool, shiftKey, MAYBE_MISSING_PARAMETER(args, 11, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(bool, metaKey, MAYBE_MISSING_PARAMETER(args, 12, DefaultIsUndefined)->BooleanValue());
    V8TRYCATCH(int, button, toUInt32(MAYBE_MISSING_PARAMETER(args, 13, DefaultIsUndefined)));
    V8TRYCATCH(Node*, relatedTarget, V8Node::HasInstance(MAYBE_MISSING_PARAMETER(args, 14, DefaultIsUndefined)) ? V8Node::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 14, DefaultIsUndefined))) : 0);
    imp->initMouseEvent(type, canBubble, cancelable, view, detail, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey, button, relatedTarget);
    return v8Undefined();
}

} // namespace MouseEventV8Internal

static const V8DOMConfiguration::BatchedAttribute V8MouseEventAttrs[] = {
    // Attribute 'screenX' (Type: 'readonly attribute' ExtAttr: '')
    {"screenX", MouseEventV8Internal::screenXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'screenY' (Type: 'readonly attribute' ExtAttr: '')
    {"screenY", MouseEventV8Internal::screenYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientX' (Type: 'readonly attribute' ExtAttr: '')
    {"clientX", MouseEventV8Internal::clientXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'clientY' (Type: 'readonly attribute' ExtAttr: '')
    {"clientY", MouseEventV8Internal::clientYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(POINTER_LOCK)
    // Attribute 'webkitMovementX' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"webkitMovementX", MouseEventV8Internal::webkitMovementXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(POINTER_LOCK)
#if ENABLE(POINTER_LOCK)
    // Attribute 'webkitMovementY' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"webkitMovementY", MouseEventV8Internal::webkitMovementYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(POINTER_LOCK)
    // Attribute 'ctrlKey' (Type: 'readonly attribute' ExtAttr: '')
    {"ctrlKey", MouseEventV8Internal::ctrlKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shiftKey' (Type: 'readonly attribute' ExtAttr: '')
    {"shiftKey", MouseEventV8Internal::shiftKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altKey' (Type: 'readonly attribute' ExtAttr: '')
    {"altKey", MouseEventV8Internal::altKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'metaKey' (Type: 'readonly attribute' ExtAttr: '')
    {"metaKey", MouseEventV8Internal::metaKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'button' (Type: 'readonly attribute' ExtAttr: '')
    {"button", MouseEventV8Internal::buttonAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'relatedTarget' (Type: 'readonly attribute' ExtAttr: '')
    {"relatedTarget", MouseEventV8Internal::relatedTargetAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetX' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetX", MouseEventV8Internal::offsetXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'offsetY' (Type: 'readonly attribute' ExtAttr: '')
    {"offsetY", MouseEventV8Internal::offsetYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", MouseEventV8Internal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", MouseEventV8Internal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'fromElement' (Type: 'readonly attribute' ExtAttr: '')
    {"fromElement", MouseEventV8Internal::fromElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'toElement' (Type: 'readonly attribute' ExtAttr: '')
    {"toElement", MouseEventV8Internal::toElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dataTransfer' (Type: 'readonly attribute' ExtAttr: '')
    {"dataTransfer", MouseEventV8Internal::dataTransferAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MouseEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "MouseEvent", V8UIEvent::GetTemplate(), V8MouseEvent::internalFieldCount,
        V8MouseEventAttrs, WTF_ARRAY_LENGTH(V8MouseEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'initMouseEvent'
    const int initMouseEventArgc = 15;
    v8::Handle<v8::FunctionTemplate> initMouseEventArgv[initMouseEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initMouseEventSignature = v8::Signature::New(desc, initMouseEventArgc, initMouseEventArgv);
    proto->Set(v8::String::NewSymbol("initMouseEvent"), v8::FunctionTemplate::New(MouseEventV8Internal::initMouseEventCallback, v8Undefined(), initMouseEventSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MouseEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8MouseEvent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8MouseEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8MouseEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MouseEvent::createWrapper(PassRefPtr<MouseEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl.get());
    ASSERT(DOMDataStore::getWrapper(impl.get(), isolate).IsEmpty());
    ASSERT(static_cast<void*>(static_cast<Event*>(impl.get())) == static_cast<void*>(impl.get()));

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &info, impl.get());
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextProperties(wrapper, impl.get());
    v8::Persistent<v8::Object> wrapperHandle = V8DOMWrapper::associateObjectWithWrapper(impl, &info, wrapper, isolate);
    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    return wrapper;
}

void V8MouseEvent::derefObject(void* object)
{
    static_cast<MouseEvent*>(object)->deref();
}

} // namespace WebCore