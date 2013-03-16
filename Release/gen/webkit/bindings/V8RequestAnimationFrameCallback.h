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

#if ENABLE(REQUEST_ANIMATION_FRAME)

#ifndef V8RequestAnimationFrameCallback_h
#define V8RequestAnimationFrameCallback_h

#include "ActiveDOMCallback.h"
#include "RequestAnimationFrameCallback.h"
#include "ScopedPersistent.h"
#include "WorldContextHandle.h"
#include <v8.h>
#include <wtf/Forward.h>

namespace WebCore {

class ScriptExecutionContext;

class V8RequestAnimationFrameCallback : public RequestAnimationFrameCallback, public ActiveDOMCallback {
public:
    static PassRefPtr<V8RequestAnimationFrameCallback> create(v8::Handle<v8::Value> value, ScriptExecutionContext* context)
    {
        ASSERT(value->IsObject());
        ASSERT(context);
        return adoptRef(new V8RequestAnimationFrameCallback(v8::Handle<v8::Object>::Cast(value), context));
    }

    virtual ~V8RequestAnimationFrameCallback();

    // Functions
    virtual bool handleEvent(double highResTime);

    virtual ScriptExecutionContext* scriptExecutionContext() const { return ContextDestructionObserver::scriptExecutionContext(); }

private:
    V8RequestAnimationFrameCallback(v8::Handle<v8::Object>, ScriptExecutionContext*);

    ScopedPersistent<v8::Object> m_callback;
    WorldContextHandle m_worldContext;
};

}

#endif // V8RequestAnimationFrameCallback_h

#endif // ENABLE(REQUEST_ANIMATION_FRAME)