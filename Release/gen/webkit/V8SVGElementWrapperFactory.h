/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef V8SVGElementWrapperFactory_h
#define V8SVGElementWrapperFactory_h

#if ENABLE(SVG)
#include <V8SVGElement.h>
#include <V8SVGElement.h>
#include <v8.h>

namespace WebCore {

    class SVGElement;

    v8::Handle<v8::Object> createV8SVGWrapper(SVGElement*, v8::Handle<v8::Object> creationContext, v8::Isolate*);
    inline v8::Handle<v8::Object> createV8SVGDirectWrapper(SVGElement* element, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
    {
        return V8SVGElement::createWrapper(element, creationContext, isolate);
    }
    inline v8::Handle<v8::Object> createV8SVGFallbackWrapper(SVGElement* element, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
    {
        return V8SVGElement::createWrapper(element, creationContext, isolate);
    }
}
#endif // ENABLE(SVG)

#endif // V8SVGElementWrapperFactory_h