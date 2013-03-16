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
#include "V8HTMLElement.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMSettableTokenList.h"
#include "V8DOMWrapper.h"
#include "V8Element.h"
#include "V8HTMLCollection.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLElement::info = { V8HTMLElement::GetTemplate, V8HTMLElement::derefObject, 0, 0, V8HTMLElement::installPerContextPrototypeProperties, &V8Element::info, WrapperTypeObjectPrototype };

namespace HTMLElementV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> idAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->getIdAttribute(), info.GetIsolate());
}

static void idAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::idAttr, stringResource);
}

static v8::Handle<v8::Value> titleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::titleAttr), info.GetIsolate());
}

static void titleAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::titleAttr, stringResource);
}

static v8::Handle<v8::Value> langAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::langAttr), info.GetIsolate());
}

static void langAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::langAttr, stringResource);
}

static v8::Handle<v8::Value> translateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->translate(), info.GetIsolate());
}

static void translateAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setTranslate(v);
    return;
}

static v8::Handle<v8::Value> dirAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::dirAttr), info.GetIsolate());
}

static void dirAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::dirAttr, stringResource);
}

static v8::Handle<v8::Value> tabIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Integer(imp->tabIndex(), info.GetIsolate());
}

static void tabIndexAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setTabIndex(v);
    return;
}

static v8::Handle<v8::Value> draggableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->draggable(), info.GetIsolate());
}

static void draggableAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setDraggable(v);
    return;
}

static v8::Handle<v8::Value> webkitdropzoneAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::webkitdropzoneAttr), info.GetIsolate());
}

static void webkitdropzoneAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::webkitdropzoneAttr, stringResource);
}

static v8::Handle<v8::Value> hiddenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::hiddenAttr), info.GetIsolate());
}

static void hiddenAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::hiddenAttr, v);
    return;
}

static v8::Handle<v8::Value> accessKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    return v8String(imp->fastGetAttribute(WebCore::HTMLNames::accesskeyAttr), info.GetIsolate());
}

static void accessKeyAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::accesskeyAttr, stringResource);
}

static v8::Handle<v8::Value> innerHTMLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->innerHTML(), info.GetIsolate());
}

static void innerHTMLAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setInnerHTML(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> innerTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->innerText(), info.GetIsolate());
}

static void innerTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setInnerText(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> outerHTMLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->outerHTML(), info.GetIsolate());
}

static void outerHTMLAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setOuterHTML(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> outerTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->outerText(), info.GetIsolate());
}

static void outerTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setOuterText(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> childrenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return toV8Fast(imp->children(), info, imp);
}

static v8::Handle<v8::Value> contentEditableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->contentEditable(), info.GetIsolate());
}

static void contentEditableAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setContentEditable(v, ec);
    if (UNLIKELY(ec))
        setDOMException(ec, info.GetIsolate());
    return;
}

static v8::Handle<v8::Value> isContentEditableAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->isContentEditable(), info.GetIsolate());
}

static v8::Handle<v8::Value> spellcheckAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->spellcheck(), info.GetIsolate());
}

static void spellcheckAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setSpellcheck(v);
    return;
}

#if ENABLE(MICRODATA)

static v8::Handle<v8::Value> itemScopeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8Boolean(imp->fastHasAttribute(WebCore::HTMLNames::itemscopeAttr), info.GetIsolate());
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static void itemScopeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::itemscopeAttr, v);
    return;
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static v8::Handle<v8::Value> itemTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return toV8Fast(imp->itemType(), info, imp);
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static v8::Handle<v8::Value> itemIdAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::itemidAttr), info.GetIsolate());
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static void itemIdAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    Element* imp = V8Element::toNative(info.Holder());
    V8TRYCATCH_FOR_V8STRINGRESOURCE_VOID(V8StringResource<WithNullCheck>, stringResource, value);
    imp->setAttribute(HTMLNames::itemidAttr, stringResource);
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static v8::Handle<v8::Value> itemRefAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return toV8Fast(imp->itemRef(), info, imp);
}

#endif // ENABLE(MICRODATA)

#if ENABLE(MICRODATA)

static v8::Handle<v8::Value> itemPropAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    HTMLElement* imp = V8HTMLElement::toNative(info.Holder());
    return toV8Fast(imp->itemProp(), info, imp);
}

#endif // ENABLE(MICRODATA)

static v8::Handle<v8::Value> insertAdjacentElementCallback(const v8::Arguments& args)
{
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, where, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH(Element*, element, V8Element::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)) ? V8Element::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined))) : 0);
    RefPtr<Element> result = imp->insertAdjacentElement(where, element, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8Fast(result.release(), args, imp);
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> insertAdjacentHTMLCallback(const v8::Arguments& args)
{
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, where, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, html, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    imp->insertAdjacentHTML(where, html, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> insertAdjacentTextCallback(const v8::Arguments& args)
{
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, where, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, text, MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined));
    imp->insertAdjacentText(where, text, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> clickCallback(const v8::Arguments& args)
{
    HTMLElement* imp = V8HTMLElement::toNative(args.Holder());
    imp->click();
    return v8Undefined();
}

} // namespace HTMLElementV8Internal

static const V8DOMConfiguration::BatchedAttribute V8HTMLElementAttrs[] = {
    // Attribute 'id' (Type: 'attribute' ExtAttr: 'Reflect')
    {"id", HTMLElementV8Internal::idAttrGetter, HTMLElementV8Internal::idAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'title' (Type: 'attribute' ExtAttr: 'Reflect')
    {"title", HTMLElementV8Internal::titleAttrGetter, HTMLElementV8Internal::titleAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lang' (Type: 'attribute' ExtAttr: 'Reflect')
    {"lang", HTMLElementV8Internal::langAttrGetter, HTMLElementV8Internal::langAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'translate' (Type: 'attribute' ExtAttr: '')
    {"translate", HTMLElementV8Internal::translateAttrGetter, HTMLElementV8Internal::translateAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'dir' (Type: 'attribute' ExtAttr: 'Reflect')
    {"dir", HTMLElementV8Internal::dirAttrGetter, HTMLElementV8Internal::dirAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'tabIndex' (Type: 'attribute' ExtAttr: '')
    {"tabIndex", HTMLElementV8Internal::tabIndexAttrGetter, HTMLElementV8Internal::tabIndexAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'draggable' (Type: 'attribute' ExtAttr: '')
    {"draggable", HTMLElementV8Internal::draggableAttrGetter, HTMLElementV8Internal::draggableAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'webkitdropzone' (Type: 'attribute' ExtAttr: 'Reflect')
    {"webkitdropzone", HTMLElementV8Internal::webkitdropzoneAttrGetter, HTMLElementV8Internal::webkitdropzoneAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hidden' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hidden", HTMLElementV8Internal::hiddenAttrGetter, HTMLElementV8Internal::hiddenAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'accessKey' (Type: 'attribute' ExtAttr: 'Reflect')
    {"accessKey", HTMLElementV8Internal::accessKeyAttrGetter, HTMLElementV8Internal::accessKeyAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'innerHTML' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"innerHTML", HTMLElementV8Internal::innerHTMLAttrGetter, HTMLElementV8Internal::innerHTMLAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'innerText' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"innerText", HTMLElementV8Internal::innerTextAttrGetter, HTMLElementV8Internal::innerTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'outerHTML' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"outerHTML", HTMLElementV8Internal::outerHTMLAttrGetter, HTMLElementV8Internal::outerHTMLAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'outerText' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"outerText", HTMLElementV8Internal::outerTextAttrGetter, HTMLElementV8Internal::outerTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'children' (Type: 'readonly attribute' ExtAttr: '')
    {"children", HTMLElementV8Internal::childrenAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentEditable' (Type: 'attribute' ExtAttr: 'TreatNullAs')
    {"contentEditable", HTMLElementV8Internal::contentEditableAttrGetter, HTMLElementV8Internal::contentEditableAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'isContentEditable' (Type: 'readonly attribute' ExtAttr: '')
    {"isContentEditable", HTMLElementV8Internal::isContentEditableAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'spellcheck' (Type: 'attribute' ExtAttr: '')
    {"spellcheck", HTMLElementV8Internal::spellcheckAttrGetter, HTMLElementV8Internal::spellcheckAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#if ENABLE(MICRODATA)
    // Attribute 'itemScope' (Type: 'attribute' ExtAttr: 'Reflect Conditional')
    {"itemScope", HTMLElementV8Internal::itemScopeAttrGetter, HTMLElementV8Internal::itemScopeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
#if ENABLE(MICRODATA)
    // Attribute 'itemType' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"itemType", HTMLElementV8Internal::itemTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
#if ENABLE(MICRODATA)
    // Attribute 'itemId' (Type: 'attribute' ExtAttr: 'URL Reflect Conditional')
    {"itemId", HTMLElementV8Internal::itemIdAttrGetter, HTMLElementV8Internal::itemIdAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
#if ENABLE(MICRODATA)
    // Attribute 'itemRef' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"itemRef", HTMLElementV8Internal::itemRefAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
#if ENABLE(MICRODATA)
    // Attribute 'itemProp' (Type: 'readonly attribute' ExtAttr: 'Conditional')
    {"itemProp", HTMLElementV8Internal::itemPropAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
#if ENABLE(MICRODATA)
    // Attribute 'itemValue' (Type: 'attribute' ExtAttr: 'Custom Conditional')
    {"itemValue", V8HTMLElement::itemValueAccessorGetter, V8HTMLElement::itemValueAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
#endif // ENABLE(MICRODATA)
};

static const V8DOMConfiguration::BatchedCallback V8HTMLElementCallbacks[] = {
    {"insertAdjacentHTML", HTMLElementV8Internal::insertAdjacentHTMLCallback},
    {"insertAdjacentText", HTMLElementV8Internal::insertAdjacentTextCallback},
    {"click", HTMLElementV8Internal::clickCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "HTMLElement", V8Element::GetTemplate(), V8HTMLElement::internalFieldCount,
        V8HTMLElementAttrs, WTF_ARRAY_LENGTH(V8HTMLElementAttrs),
        V8HTMLElementCallbacks, WTF_ARRAY_LENGTH(V8HTMLElementCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'insertAdjacentElement'
    const int insertAdjacentElementArgc = 2;
    v8::Handle<v8::FunctionTemplate> insertAdjacentElementArgv[insertAdjacentElementArgc] = { v8::Handle<v8::FunctionTemplate>(), V8Element::GetRawTemplate() };
    v8::Handle<v8::Signature> insertAdjacentElementSignature = v8::Signature::New(desc, insertAdjacentElementArgc, insertAdjacentElementArgv);
    proto->Set(v8::String::NewSymbol("insertAdjacentElement"), v8::FunctionTemplate::New(HTMLElementV8Internal::insertAdjacentElementCallback, v8Undefined(), insertAdjacentElementSignature));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLElement::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLElement::createWrapper(PassRefPtr<HTMLElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8HTMLElement::derefObject(void* object)
{
    static_cast<HTMLElement*>(object)->deref();
}

} // namespace WebCore
