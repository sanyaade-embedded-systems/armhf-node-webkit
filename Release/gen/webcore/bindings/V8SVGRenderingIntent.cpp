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
#include "V8SVGRenderingIntent.h"

#if ENABLE(SVG)

#include "BindingState.h"
#include "ContextFeatures.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8DOMWrapper.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGRenderingIntent::info = { V8SVGRenderingIntent::GetTemplate, V8SVGRenderingIntent::derefObject, 0, 0, V8SVGRenderingIntent::installPerContextPrototypeProperties, 0, WrapperTypeObjectPrototype };

namespace SVGRenderingIntentV8Internal {

template <typename T> void V8_USE(T) { }

} // namespace SVGRenderingIntentV8Internal

static const V8DOMConfiguration::BatchedConstant V8SVGRenderingIntentConsts[] = {
    {"RENDERING_INTENT_UNKNOWN", static_cast<signed int>(0)},
    {"RENDERING_INTENT_AUTO", static_cast<signed int>(1)},
    {"RENDERING_INTENT_PERCEPTUAL", static_cast<signed int>(2)},
    {"RENDERING_INTENT_RELATIVE_COLORIMETRIC", static_cast<signed int>(3)},
    {"RENDERING_INTENT_SATURATION", static_cast<signed int>(4)},
    {"RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", static_cast<signed int>(5)},
};


COMPILE_ASSERT(0 == SVGRenderingIntent::RENDERING_INTENT_UNKNOWN, SVGRenderingIntentEnumRENDERING_INTENT_UNKNOWNIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == SVGRenderingIntent::RENDERING_INTENT_AUTO, SVGRenderingIntentEnumRENDERING_INTENT_AUTOIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == SVGRenderingIntent::RENDERING_INTENT_PERCEPTUAL, SVGRenderingIntentEnumRENDERING_INTENT_PERCEPTUALIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == SVGRenderingIntent::RENDERING_INTENT_RELATIVE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_RELATIVE_COLORIMETRICIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == SVGRenderingIntent::RENDERING_INTENT_SATURATION, SVGRenderingIntentEnumRENDERING_INTENT_SATURATIONIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == SVGRenderingIntent::RENDERING_INTENT_ABSOLUTE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_ABSOLUTE_COLORIMETRICIsWrongUseDoNotCheckConstants);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGRenderingIntentTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::configureTemplate(desc, "SVGRenderingIntent", v8::Persistent<v8::FunctionTemplate>(), V8SVGRenderingIntent::internalFieldCount,
        0, 0,
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    UNUSED_PARAM(instance); // In some cases, it will not be used.
    UNUSED_PARAM(proto); // In some cases, it will not be used.
    
    V8DOMConfiguration::batchConfigureConstants(desc, proto, V8SVGRenderingIntentConsts, WTF_ARRAY_LENGTH(V8SVGRenderingIntentConsts));

    // Custom toString template
    desc->Set(v8::String::NewSymbol("toString"), V8PerIsolateData::current()->toStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGRenderingIntent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGRenderingIntent::GetTemplate()
{
    V8PerIsolateData* data = V8PerIsolateData::current();
    V8PerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->value;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGRenderingIntentTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGRenderingIntent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


void V8SVGRenderingIntent::derefObject(void* object)
{
    static_cast<SVGRenderingIntent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)