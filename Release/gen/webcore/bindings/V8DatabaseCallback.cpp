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
#include "V8DatabaseCallback.h"

#if ENABLE(SQL_DATABASE)

#include "ScriptExecutionContext.h"
#include "V8Binding.h"
#include "V8Callback.h"
#include "V8Database.h"
#include "V8DatabaseSync.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

#include <wtf/Assertions.h>

namespace WebCore {

V8DatabaseCallback::V8DatabaseCallback(v8::Handle<v8::Object> callback, ScriptExecutionContext* context)
    : ActiveDOMCallback(context)
    , m_callback(callback)
    , m_worldContext(UseCurrentWorld)
{
}

V8DatabaseCallback::~V8DatabaseCallback()
{
}

// Functions

bool V8DatabaseCallback::handleEvent(Database* database)
{
    if (!canInvokeCallback())
        return true;

    v8::HandleScope handleScope;

    v8::Handle<v8::Context> v8Context = toV8Context(scriptExecutionContext(), m_worldContext);
    if (v8Context.IsEmpty())
        return true;

    v8::Context::Scope scope(v8Context);

    v8::Handle<v8::Value> databaseHandle = toV8(database);
    if (databaseHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return true;
    }

    v8::Handle<v8::Value> argv[] = {
        databaseHandle
    };

    bool callbackReturnValue = false;
    return !invokeCallback(m_callback.get(), 1, argv, callbackReturnValue, scriptExecutionContext());
}

bool V8DatabaseCallback::handleEvent(DatabaseSync* database)
{
    if (!canInvokeCallback())
        return true;

    v8::HandleScope handleScope;

    v8::Handle<v8::Context> v8Context = toV8Context(scriptExecutionContext(), m_worldContext);
    if (v8Context.IsEmpty())
        return true;

    v8::Context::Scope scope(v8Context);

    v8::Handle<v8::Value> databaseHandle = toV8(database);
    if (databaseHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return true;
    }

    v8::Handle<v8::Value> argv[] = {
        databaseHandle
    };

    bool callbackReturnValue = false;
    return !invokeCallback(m_callback.get(), 1, argv, callbackReturnValue, scriptExecutionContext());
}

} // namespace WebCore

#endif // ENABLE(SQL_DATABASE)
