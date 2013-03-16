// File is generated by Source/WebCore/inspector/CodeGeneratorInspector.py

// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


#include "config.h"
#if ENABLE(INSPECTOR)

#include "InspectorTypeBuilder.h"
#include <wtf/text/CString.h>

namespace WebCore {

namespace TypeBuilder {

const char* const enum_constant_values[] = {
    "Document",
    "Stylesheet",
    "Image",
    "Font",
    "Script",
    "XHR",
    "WebSocket",
    "Other",
    "object",
    "function",
    "undefined",
    "string",
    "number",
    "boolean",
    "array",
    "null",
    "node",
    "regexp",
    "date",
    "html",
    "wml",
    "xml",
    "javascript",
    "network",
    "console-api",
    "other",
    "tip",
    "log",
    "warning",
    "error",
    "debug",
    "dir",
    "dirxml",
    "trace",
    "clear",
    "startGroup",
    "startGroupCollapsed",
    "endGroup",
    "assert",
    "timing",
    "parser",
    "script",
    "user",
    "user-agent",
    "inspector",
    "regular",
    "active",
    "inactive",
    "disabled",
    "style",
    "mediaRule",
    "importRule",
    "linkedSheet",
    "inlineSheet",
    "overset",
    "fit",
    "empty",
    "global",
    "local",
    "with",
    "closure",
    "catch",
    "subtree-modified",
    "attribute-modified",
    "node-removed",
    "CPU",
    "CSS",
    "HEAP",
    "allowed",
    "forbidden",
    "DOM",
    "EventListener",
    "exception",
    "CSPViolation"
};

String getEnumConstantValue(int code) {
    return enum_constant_values[code];
}

} // namespace TypeBuilder

const char* TypeBuilder::Network::Response::Url = "url";
const char* TypeBuilder::Network::Response::Status = "status";
const char* TypeBuilder::Network::Response::StatusText = "statusText";
const char* TypeBuilder::Network::Response::Headers = "headers";
const char* TypeBuilder::Network::Response::MimeType = "mimeType";
const char* TypeBuilder::Network::Response::ConnectionReused = "connectionReused";
const char* TypeBuilder::Network::Response::ConnectionId = "connectionId";
const char* TypeBuilder::Network::Response::HeadersText = "headersText";
const char* TypeBuilder::Network::Response::RequestHeaders = "requestHeaders";
const char* TypeBuilder::Network::Response::RequestHeadersText = "requestHeadersText";
const char* TypeBuilder::Network::Response::FromDiskCache = "fromDiskCache";
const char* TypeBuilder::Network::Response::Timing = "timing";
const char* TypeBuilder::CSS::CSSProperty::Name = "name";
const char* TypeBuilder::CSS::CSSProperty::Value = "value";
const char* TypeBuilder::CSS::CSSProperty::Priority = "priority";
const char* TypeBuilder::CSS::CSSProperty::Implicit = "implicit";
const char* TypeBuilder::CSS::CSSProperty::Text = "text";
const char* TypeBuilder::CSS::CSSProperty::ParsedOk = "parsedOk";
const char* TypeBuilder::CSS::CSSProperty::Status = "status";
const char* TypeBuilder::CSS::CSSProperty::Range = "range";
const char* TypeBuilder::Timeline::TimelineEvent::Type = "type";
const char* TypeBuilder::Timeline::TimelineEvent::Data = "data";
const char* TypeBuilder::Timeline::TimelineEvent::Children = "children";


#if !ASSERT_DISABLED

void TypeBuilder::RuntimeCastHelper::assertAny(InspectorValue*)
{
    // No-op.
}


void TypeBuilder::RuntimeCastHelper::assertInt(InspectorValue* value)
{
    double v;
    bool castRes = value->asNumber(&v);
    ASSERT_UNUSED(castRes, castRes);
    ASSERT(static_cast<double>(static_cast<int>(v)) == v);
}

void TypeBuilder::Runtime::RemoteObject::Type::assertCorrectValue(InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "object" || s == "function" || s == "undefined" || s == "string" || s == "number" || s == "boolean");
}


void TypeBuilder::Runtime::RemoteObject::Subtype::assertCorrectValue(InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "array" || s == "null" || s == "node" || s == "regexp" || s == "date");
}


void TypeBuilder::Runtime::RemoteObject::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator typePos;
        typePos = object->find("type");
        ASSERT(typePos != object->end());
        Type::assertCorrectValue(typePos->value.get());
    }
    int foundPropertiesCount = 1;
    {
        InspectorObject::iterator subtypePos;
        subtypePos = object->find("subtype");
        if (subtypePos != object->end()) {
            Subtype::assertCorrectValue(subtypePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator classNamePos;
        classNamePos = object->find("className");
        if (classNamePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(classNamePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            RuntimeCastHelper::assertAny(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator descriptionPos;
        descriptionPos = object->find("description");
        if (descriptionPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(descriptionPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator objectIdPos;
        objectIdPos = object->find("objectId");
        if (objectIdPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(objectIdPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator previewPos;
        previewPos = object->find("preview");
        if (previewPos != object->end()) {
            TypeBuilder::Runtime::ObjectPreview::assertCorrectValue(previewPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Runtime::ObjectPreview::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator losslessPos;
        losslessPos = object->find("lossless");
        ASSERT(losslessPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(losslessPos->value.get());
    }
    {
        InspectorObject::iterator overflowPos;
        overflowPos = object->find("overflow");
        ASSERT(overflowPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(overflowPos->value.get());
    }
    {
        InspectorObject::iterator propertiesPos;
        propertiesPos = object->find("properties");
        ASSERT(propertiesPos != object->end());
        TypeBuilder::Array<TypeBuilder::Runtime::PropertyPreview>::assertCorrectValue(propertiesPos->value.get());
    }
    int foundPropertiesCount = 3;
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Runtime::PropertyPreview::Type::assertCorrectValue(InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "object" || s == "function" || s == "undefined" || s == "string" || s == "number" || s == "boolean");
}


void TypeBuilder::Runtime::PropertyPreview::Subtype::assertCorrectValue(InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "array" || s == "null" || s == "node" || s == "regexp" || s == "date");
}


void TypeBuilder::Runtime::PropertyPreview::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator namePos;
        namePos = object->find("name");
        ASSERT(namePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(namePos->value.get());
    }
    {
        InspectorObject::iterator typePos;
        typePos = object->find("type");
        ASSERT(typePos != object->end());
        Type::assertCorrectValue(typePos->value.get());
    }
    int foundPropertiesCount = 2;
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator subtypePos;
        subtypePos = object->find("subtype");
        if (subtypePos != object->end()) {
            Subtype::assertCorrectValue(subtypePos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Runtime::PropertyDescriptor::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator namePos;
        namePos = object->find("name");
        ASSERT(namePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(namePos->value.get());
    }
    {
        InspectorObject::iterator configurablePos;
        configurablePos = object->find("configurable");
        ASSERT(configurablePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(configurablePos->value.get());
    }
    {
        InspectorObject::iterator enumerablePos;
        enumerablePos = object->find("enumerable");
        ASSERT(enumerablePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(enumerablePos->value.get());
    }
    int foundPropertiesCount = 3;
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            TypeBuilder::Runtime::RemoteObject::assertCorrectValue(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator writablePos;
        writablePos = object->find("writable");
        if (writablePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(writablePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator getPos;
        getPos = object->find("get");
        if (getPos != object->end()) {
            TypeBuilder::Runtime::RemoteObject::assertCorrectValue(getPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator setPos;
        setPos = object->find("set");
        if (setPos != object->end()) {
            TypeBuilder::Runtime::RemoteObject::assertCorrectValue(setPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator wasThrownPos;
        wasThrownPos = object->find("wasThrown");
        if (wasThrownPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(wasThrownPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator isOwnPos;
        isOwnPos = object->find("isOwn");
        if (isOwnPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(isOwnPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Runtime::InternalPropertyDescriptor::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator namePos;
        namePos = object->find("name");
        ASSERT(namePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(namePos->value.get());
    }
    int foundPropertiesCount = 1;
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            TypeBuilder::Runtime::RemoteObject::assertCorrectValue(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Timeline::TimelineEvent::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator typePos;
        typePos = object->find("type");
        ASSERT(typePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(typePos->value.get());
    }
    {
        InspectorObject::iterator dataPos;
        dataPos = object->find("data");
        ASSERT(dataPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeObject>(dataPos->value.get());
    }
    {
        InspectorObject::iterator childrenPos;
        childrenPos = object->find("children");
        if (childrenPos != object->end()) {
            TypeBuilder::Array<TypeBuilder::Timeline::TimelineEvent>::assertCorrectValue(childrenPos->value.get());
        }
    }
}


#if ENABLE(JAVASCRIPT_DEBUGGER)
void TypeBuilder::Debugger::Location::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator scriptIdPos;
        scriptIdPos = object->find("scriptId");
        ASSERT(scriptIdPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(scriptIdPos->value.get());
    }
    {
        InspectorObject::iterator lineNumberPos;
        lineNumberPos = object->find("lineNumber");
        ASSERT(lineNumberPos != object->end());
        RuntimeCastHelper::assertInt(lineNumberPos->value.get());
    }
    int foundPropertiesCount = 2;
    {
        InspectorObject::iterator columnNumberPos;
        columnNumberPos = object->find("columnNumber");
        if (columnNumberPos != object->end()) {
            RuntimeCastHelper::assertInt(columnNumberPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}
#endif // ENABLE(JAVASCRIPT_DEBUGGER)


#if ENABLE(JAVASCRIPT_DEBUGGER)
void TypeBuilder::Debugger::FunctionDetails::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator locationPos;
        locationPos = object->find("location");
        ASSERT(locationPos != object->end());
        TypeBuilder::Debugger::Location::assertCorrectValue(locationPos->value.get());
    }
    int foundPropertiesCount = 1;
    {
        InspectorObject::iterator namePos;
        namePos = object->find("name");
        if (namePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(namePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator displayNamePos;
        displayNamePos = object->find("displayName");
        if (displayNamePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(displayNamePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator inferredNamePos;
        inferredNamePos = object->find("inferredName");
        if (inferredNamePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(inferredNamePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator scopeChainPos;
        scopeChainPos = object->find("scopeChain");
        if (scopeChainPos != object->end()) {
            TypeBuilder::Array<TypeBuilder::Debugger::Scope>::assertCorrectValue(scopeChainPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}
#endif // ENABLE(JAVASCRIPT_DEBUGGER)


#if ENABLE(JAVASCRIPT_DEBUGGER)
void TypeBuilder::Debugger::CallFrame::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator callFrameIdPos;
        callFrameIdPos = object->find("callFrameId");
        ASSERT(callFrameIdPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(callFrameIdPos->value.get());
    }
    {
        InspectorObject::iterator functionNamePos;
        functionNamePos = object->find("functionName");
        ASSERT(functionNamePos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(functionNamePos->value.get());
    }
    {
        InspectorObject::iterator locationPos;
        locationPos = object->find("location");
        ASSERT(locationPos != object->end());
        TypeBuilder::Debugger::Location::assertCorrectValue(locationPos->value.get());
    }
    {
        InspectorObject::iterator scopeChainPos;
        scopeChainPos = object->find("scopeChain");
        ASSERT(scopeChainPos != object->end());
        TypeBuilder::Array<TypeBuilder::Debugger::Scope>::assertCorrectValue(scopeChainPos->value.get());
    }
    {
        InspectorObject::iterator thisPos;
        thisPos = object->find("this");
        ASSERT(thisPos != object->end());
        TypeBuilder::Runtime::RemoteObject::assertCorrectValue(thisPos->value.get());
    }
    int foundPropertiesCount = 5;
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}
#endif // ENABLE(JAVASCRIPT_DEBUGGER)


#if ENABLE(JAVASCRIPT_DEBUGGER)
void TypeBuilder::Debugger::Scope::Type::assertCorrectValue(InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "global" || s == "local" || s == "with" || s == "closure" || s == "catch");
}
#endif // ENABLE(JAVASCRIPT_DEBUGGER)


#if ENABLE(JAVASCRIPT_DEBUGGER)
void TypeBuilder::Debugger::Scope::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator typePos;
        typePos = object->find("type");
        ASSERT(typePos != object->end());
        Type::assertCorrectValue(typePos->value.get());
    }
    {
        InspectorObject::iterator objectPos;
        objectPos = object->find("object");
        ASSERT(objectPos != object->end());
        TypeBuilder::Runtime::RemoteObject::assertCorrectValue(objectPos->value.get());
    }
    int foundPropertiesCount = 2;
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}
#endif // ENABLE(JAVASCRIPT_DEBUGGER)


void TypeBuilder::Canvas::Call::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator contextIdPos;
        contextIdPos = object->find("contextId");
        ASSERT(contextIdPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(contextIdPos->value.get());
    }
    int foundPropertiesCount = 1;
    {
        InspectorObject::iterator functionNamePos;
        functionNamePos = object->find("functionName");
        if (functionNamePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(functionNamePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator argumentsPos;
        argumentsPos = object->find("arguments");
        if (argumentsPos != object->end()) {
            TypeBuilder::Array<String>::assertCorrectValue(argumentsPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator propertyPos;
        propertyPos = object->find("property");
        if (propertyPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(propertyPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator resultPos;
        resultPos = object->find("result");
        if (resultPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(resultPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator sourceURLPos;
        sourceURLPos = object->find("sourceURL");
        if (sourceURLPos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeString>(sourceURLPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator lineNumberPos;
        lineNumberPos = object->find("lineNumber");
        if (lineNumberPos != object->end()) {
            RuntimeCastHelper::assertInt(lineNumberPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator columnNumberPos;
        columnNumberPos = object->find("columnNumber");
        if (columnNumberPos != object->end()) {
            RuntimeCastHelper::assertInt(columnNumberPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}


void TypeBuilder::Canvas::TraceLog::assertCorrectValue(InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator idPos;
        idPos = object->find("id");
        ASSERT(idPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeString>(idPos->value.get());
    }
    {
        InspectorObject::iterator callsPos;
        callsPos = object->find("calls");
        ASSERT(callsPos != object->end());
        TypeBuilder::Array<TypeBuilder::Canvas::Call>::assertCorrectValue(callsPos->value.get());
    }
    int foundPropertiesCount = 2;
    {
        InspectorObject::iterator startOffsetPos;
        startOffsetPos = object->find("startOffset");
        if (startOffsetPos != object->end()) {
            RuntimeCastHelper::assertInt(startOffsetPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator alivePos;
        alivePos = object->find("alive");
        if (alivePos != object->end()) {
            RuntimeCastHelper::assertType<InspectorValue::TypeBoolean>(alivePos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size()) {
      FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
    }
}




#endif // !ASSERT_DISABLED

} // namespace WebCore

#endif // ENABLE(INSPECTOR)
