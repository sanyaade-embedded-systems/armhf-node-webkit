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
#include "V8WebKitCSSMatrix.h"

#include "BindingState.h"
#include "ContextFeatures.h"
#include "ExceptionCode.h"
#include "Frame.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8WebKitCSSMatrix::info = { V8WebKitCSSMatrix::GetTemplate, V8WebKitCSSMatrix::derefObject, 0, 0, V8WebKitCSSMatrix::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace WebKitCSSMatrixV8Internal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> aAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->a());
}

static void aAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setA(v);
    return;
}

static v8::Handle<v8::Value> bAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->b());
}

static void bAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setB(v);
    return;
}

static v8::Handle<v8::Value> cAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->c());
}

static void cAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setC(v);
    return;
}

static v8::Handle<v8::Value> dAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->d());
}

static void dAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setD(v);
    return;
}

static v8::Handle<v8::Value> eAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->e());
}

static void eAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setE(v);
    return;
}

static v8::Handle<v8::Value> fAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->f());
}

static void fAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setF(v);
    return;
}

static v8::Handle<v8::Value> m11AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m11());
}

static void m11AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM11(v);
    return;
}

static v8::Handle<v8::Value> m12AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m12());
}

static void m12AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM12(v);
    return;
}

static v8::Handle<v8::Value> m13AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m13());
}

static void m13AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM13(v);
    return;
}

static v8::Handle<v8::Value> m14AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m14());
}

static void m14AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM14(v);
    return;
}

static v8::Handle<v8::Value> m21AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m21());
}

static void m21AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM21(v);
    return;
}

static v8::Handle<v8::Value> m22AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m22());
}

static void m22AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM22(v);
    return;
}

static v8::Handle<v8::Value> m23AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m23());
}

static void m23AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM23(v);
    return;
}

static v8::Handle<v8::Value> m24AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m24());
}

static void m24AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM24(v);
    return;
}

static v8::Handle<v8::Value> m31AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m31());
}

static void m31AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM31(v);
    return;
}

static v8::Handle<v8::Value> m32AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m32());
}

static void m32AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM32(v);
    return;
}

static v8::Handle<v8::Value> m33AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m33());
}

static void m33AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM33(v);
    return;
}

static v8::Handle<v8::Value> m34AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m34());
}

static void m34AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM34(v);
    return;
}

static v8::Handle<v8::Value> m41AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m41());
}

static void m41AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM41(v);
    return;
}

static v8::Handle<v8::Value> m42AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m42());
}

static void m42AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM42(v);
    return;
}

static v8::Handle<v8::Value> m43AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m43());
}

static void m43AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM43(v);
    return;
}

static v8::Handle<v8::Value> m44AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    return v8::Number::New(imp->m44());
}

static void m44AttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    imp->setM44(v);
    return;
}

static v8::Handle<v8::Value> setMatrixValueCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, string, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined));
    imp->setMatrixValue(string, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Undefined();
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> multiplyCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(WebKitCSSMatrix*, secondMatrix, V8WebKitCSSMatrix::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)) ? V8WebKitCSSMatrix::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined))) : 0);
    return toV8(imp->multiply(secondMatrix), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> inverseCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<WebKitCSSMatrix> result = imp->inverse(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release(), args.Holder(), args.GetIsolate());
    }
    fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Handle<v8::Value> translateCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, x, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, y, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, z, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->translate(x, y, z), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> scaleCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, scaleX, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, scaleY, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, scaleZ, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->scale(scaleX, scaleY, scaleZ), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> rotateCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, rotX, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, rotY, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, rotZ, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->rotate(rotX, rotY, rotZ), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> rotateAxisAngleCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, x, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, y, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 1, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, z, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 2, DefaultIsUndefined)->NumberValue()));
    V8TRYCATCH(double, angle, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 3, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->rotateAxisAngle(x, y, z, angle), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> skewXCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, angle, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->skewX(angle), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> skewYCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    V8TRYCATCH(double, angle, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 0, DefaultIsUndefined)->NumberValue()));
    return toV8(imp->skewY(angle), args.Holder(), args.GetIsolate());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    WebKitCSSMatrix* imp = V8WebKitCSSMatrix::toNative(args.Holder());
    return v8String(imp->toString(), args.GetIsolate());
}

} // namespace WebKitCSSMatrixV8Internal

static const V8DOMConfiguration::BatchedAttribute V8WebKitCSSMatrixAttrs[] = {
    // Attribute 'a' (Type: 'attribute' ExtAttr: '')
    {"a", WebKitCSSMatrixV8Internal::aAttrGetter, WebKitCSSMatrixV8Internal::aAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'b' (Type: 'attribute' ExtAttr: '')
    {"b", WebKitCSSMatrixV8Internal::bAttrGetter, WebKitCSSMatrixV8Internal::bAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'c' (Type: 'attribute' ExtAttr: '')
    {"c", WebKitCSSMatrixV8Internal::cAttrGetter, WebKitCSSMatrixV8Internal::cAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'd' (Type: 'attribute' ExtAttr: '')
    {"d", WebKitCSSMatrixV8Internal::dAttrGetter, WebKitCSSMatrixV8Internal::dAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'e' (Type: 'attribute' ExtAttr: '')
    {"e", WebKitCSSMatrixV8Internal::eAttrGetter, WebKitCSSMatrixV8Internal::eAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'f' (Type: 'attribute' ExtAttr: '')
    {"f", WebKitCSSMatrixV8Internal::fAttrGetter, WebKitCSSMatrixV8Internal::fAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm11' (Type: 'attribute' ExtAttr: '')
    {"m11", WebKitCSSMatrixV8Internal::m11AttrGetter, WebKitCSSMatrixV8Internal::m11AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm12' (Type: 'attribute' ExtAttr: '')
    {"m12", WebKitCSSMatrixV8Internal::m12AttrGetter, WebKitCSSMatrixV8Internal::m12AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm13' (Type: 'attribute' ExtAttr: '')
    {"m13", WebKitCSSMatrixV8Internal::m13AttrGetter, WebKitCSSMatrixV8Internal::m13AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm14' (Type: 'attribute' ExtAttr: '')
    {"m14", WebKitCSSMatrixV8Internal::m14AttrGetter, WebKitCSSMatrixV8Internal::m14AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm21' (Type: 'attribute' ExtAttr: '')
    {"m21", WebKitCSSMatrixV8Internal::m21AttrGetter, WebKitCSSMatrixV8Internal::m21AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm22' (Type: 'attribute' ExtAttr: '')
    {"m22", WebKitCSSMatrixV8Internal::m22AttrGetter, WebKitCSSMatrixV8Internal::m22AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm23' (Type: 'attribute' ExtAttr: '')
    {"m23", WebKitCSSMatrixV8Internal::m23AttrGetter, WebKitCSSMatrixV8Internal::m23AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm24' (Type: 'attribute' ExtAttr: '')
    {"m24", WebKitCSSMatrixV8Internal::m24AttrGetter, WebKitCSSMatrixV8Internal::m24AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm31' (Type: 'attribute' ExtAttr: '')
    {"m31", WebKitCSSMatrixV8Internal::m31AttrGetter, WebKitCSSMatrixV8Internal::m31AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm32' (Type: 'attribute' ExtAttr: '')
    {"m32", WebKitCSSMatrixV8Internal::m32AttrGetter, WebKitCSSMatrixV8Internal::m32AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm33' (Type: 'attribute' ExtAttr: '')
    {"m33", WebKitCSSMatrixV8Internal::m33AttrGetter, WebKitCSSMatrixV8Internal::m33AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm34' (Type: 'attribute' ExtAttr: '')
    {"m34", WebKitCSSMatrixV8Internal::m34AttrGetter, WebKitCSSMatrixV8Internal::m34AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm41' (Type: 'attribute' ExtAttr: '')
    {"m41", WebKitCSSMatrixV8Internal::m41AttrGetter, WebKitCSSMatrixV8Internal::m41AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm42' (Type: 'attribute' ExtAttr: '')
    {"m42", WebKitCSSMatrixV8Internal::m42AttrGetter, WebKitCSSMatrixV8Internal::m42AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm43' (Type: 'attribute' ExtAttr: '')
    {"m43", WebKitCSSMatrixV8Internal::m43AttrGetter, WebKitCSSMatrixV8Internal::m43AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'm44' (Type: 'attribute' ExtAttr: '')
    {"m44", WebKitCSSMatrixV8Internal::m44AttrGetter, WebKitCSSMatrixV8Internal::m44AttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::BatchedCallback V8WebKitCSSMatrixCallbacks[] = {
    {"setMatrixValue", WebKitCSSMatrixV8Internal::setMatrixValueCallback},
    {"inverse", WebKitCSSMatrixV8Internal::inverseCallback},
    {"translate", WebKitCSSMatrixV8Internal::translateCallback},
    {"scale", WebKitCSSMatrixV8Internal::scaleCallback},
    {"rotate", WebKitCSSMatrixV8Internal::rotateCallback},
    {"rotateAxisAngle", WebKitCSSMatrixV8Internal::rotateAxisAngleCallback},
    {"skewX", WebKitCSSMatrixV8Internal::skewXCallback},
    {"skewY", WebKitCSSMatrixV8Internal::skewYCallback},
};

v8::Handle<v8::Value> V8WebKitCSSMatrix::constructorCallback(const v8::Arguments& args)
{
    
    if (!args.IsConstructCall())
        return throwTypeError("DOM object constructor cannot be called as a function.");

    if (ConstructorMode::current() == ConstructorMode::WrapExistingObject)
        return args.Holder();

    ExceptionCode ec = 0;
    V8TRYCATCH_FOR_V8STRINGRESOURCE(V8StringResource<>, cssValue, MAYBE_MISSING_PARAMETER(args, 0, DefaultIsNullString));

    RefPtr<WebKitCSSMatrix> impl = WebKitCSSMatrix::create(cssValue, ec);
    v8::Handle<v8::Object> wrapper = args.Holder();
    if (ec)
        goto fail;

    V8DOMWrapper::associateObjectWithWrapper(impl.release(), &info, wrapper, args.GetIsolate());
    return wrapper;
  fail:
    return setDOMException(ec, args.GetIsolate());
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitCSSMatrixTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "WebKitCSSMatrix", v8::Persistent<v8::FunctionTemplate>(), V8WebKitCSSMatrix::internalFieldCount,
        V8WebKitCSSMatrixAttrs, WTF_ARRAY_LENGTH(V8WebKitCSSMatrixAttrs),
        V8WebKitCSSMatrixCallbacks, WTF_ARRAY_LENGTH(V8WebKitCSSMatrixCallbacks));
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    desc->SetCallHandler(V8WebKitCSSMatrix::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    

    // Custom Signature 'multiply'
    const int multiplyArgc = 1;
    v8::Handle<v8::FunctionTemplate> multiplyArgv[multiplyArgc] = { V8WebKitCSSMatrix::GetRawTemplate() };
    v8::Handle<v8::Signature> multiplySignature = v8::Signature::New(desc, multiplyArgc, multiplyArgv);
    proto->Set(v8::String::NewSymbol("multiply"), v8::FunctionTemplate::New(WebKitCSSMatrixV8Internal::multiplyCallback, v8Undefined(), multiplySignature));
    proto->Set(v8::String::NewSymbol("toString"), v8::FunctionTemplate::New(WebKitCSSMatrixV8Internal::toStringCallback, v8Undefined(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrix::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSMatrix::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitCSSMatrixTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitCSSMatrix::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitCSSMatrix::createWrapper(PassRefPtr<WebKitCSSMatrix> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
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

void V8WebKitCSSMatrix::derefObject(void* object)
{
    static_cast<WebKitCSSMatrix*>(object)->deref();
}

} // namespace WebCore
