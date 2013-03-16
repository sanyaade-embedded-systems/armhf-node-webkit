/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * Copyright (C) 2011 Google Inc.  All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY GOOGLE, INC. ``AS IS'' AND ANY
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

#include "config.h"
#include "EventFactory.h"

#include "EventHeaders.h"
#if USE(V8)
#include "RuntimeEnabledFeatures.h"
#endif

namespace WebCore {

PassRefPtr<Event> EventFactory::create(const String& type)
{
#if ENABLE(WEB_AUDIO)
    if (type == "AudioProcessingEvent")
        return AudioProcessingEvent::create();
#endif
    if (type == "BeforeLoadEvent")
        return BeforeLoadEvent::create();
    if (type == "CloseEvent")
        return CloseEvent::create();
    if (type == "CompositionEvent")
        return CompositionEvent::create();
    if (type == "CustomEvent")
        return CustomEvent::create();
#if ENABLE(DEVICE_ORIENTATION)
    if (type == "DeviceMotionEvent")
        return DeviceMotionEvent::create();
#endif
#if ENABLE(DEVICE_ORIENTATION)
    if (type == "DeviceOrientationEvent")
        return DeviceOrientationEvent::create();
#endif
#if ENABLE(PROXIMITY_EVENTS)
    if (type == "DeviceProximityEvent")
        return DeviceProximityEvent::create();
#endif
    if (type == "ErrorEvent")
        return ErrorEvent::create();
    if (type == "Event")
        return Event::create();
    if (type == "Events")
        return Event::create();
    if (type == "HTMLEvents")
        return Event::create();
    if (type == "HashChangeEvent")
        return HashChangeEvent::create();
#if ENABLE(INDEXED_DATABASE)
    if (type == "IDBUpgradeNeededEvent")
        return IDBUpgradeNeededEvent::create();
#endif
#if ENABLE(INDEXED_DATABASE)
    if (type == "IDBVersionChangeEvent")
        return IDBVersionChangeEvent::create();
#endif
    if (type == "KeyboardEvent")
        return KeyboardEvent::create();
    if (type == "KeyboardEvents")
        return KeyboardEvent::create();
#if ENABLE(ENCRYPTED_MEDIA)
    if (type == "MediaKeyEvent")
        return MediaKeyEvent::create();
#endif
#if ENABLE(MEDIA_STREAM)
    if (type == "MediaStreamEvent")
        return MediaStreamEvent::create();
#endif
#if ENABLE(MEDIA_STREAM)
    if (type == "MediaStreamTrackEvent")
        return MediaStreamTrackEvent::create();
#endif
    if (type == "MessageEvent")
        return MessageEvent::create();
    if (type == "MouseEvent")
        return MouseEvent::create();
    if (type == "MouseEvents")
        return MouseEvent::create();
    if (type == "MutationEvent")
        return MutationEvent::create();
    if (type == "MutationEvents")
        return MutationEvent::create();
#if ENABLE(WEB_AUDIO)
    if (type == "OfflineAudioCompletionEvent")
        return OfflineAudioCompletionEvent::create();
#endif
#if ENABLE(ORIENTATION_EVENTS)
    if (type == "OrientationEvent")
        return Event::create();
#endif
    if (type == "OverflowEvent")
        return OverflowEvent::create();
    if (type == "PageTransitionEvent")
        return PageTransitionEvent::create();
    if (type == "PopStateEvent")
        return PopStateEvent::create();
    if (type == "ProgressEvent")
        return ProgressEvent::create();
#if ENABLE(MEDIA_STREAM)
    if (type == "RTCDataChannelEvent")
        return RTCDataChannelEvent::create();
#endif
#if ENABLE(MEDIA_STREAM)
    if (type == "RTCIceCandidateEvent")
        return RTCIceCandidateEvent::create();
#endif
#if ENABLE(SVG)
    if (type == "SVGEvents")
        return Event::create();
#endif
#if ENABLE(SVG)
    if (type == "SVGZoomEvent")
        return SVGZoomEvent::create();
#endif
#if ENABLE(SVG)
    if (type == "SVGZoomEvents")
        return SVGZoomEvent::create();
#endif
#if ENABLE(INPUT_SPEECH)
    if (type == "SpeechInputEvent")
        return SpeechInputEvent::create();
#endif
#if ENABLE(SCRIPTED_SPEECH)
    if (type == "SpeechRecognitionError")
        return SpeechRecognitionError::create();
#endif
#if ENABLE(SCRIPTED_SPEECH)
    if (type == "SpeechRecognitionEvent")
        return SpeechRecognitionEvent::create();
#endif
    if (type == "StorageEvent")
        return StorageEvent::create();
    if (type == "TextEvent")
        return TextEvent::create();
#if ENABLE(TOUCH_EVENTS)
    #if USE(V8)
    // FIXME: JSC should support RuntimeEnabledFeatures as well.
    if (type == "TouchEvent" && RuntimeEnabledFeatures::touchEnabled())
        return TouchEvent::create();
    #else
    if (type == "TouchEvent")
        return TouchEvent::create();
#endif // USE(V8)
#endif
#if ENABLE(VIDEO_TRACK)
    if (type == "TrackEvent")
        return TrackEvent::create();
#endif
    if (type == "UIEvent")
        return UIEvent::create();
    if (type == "UIEvents")
        return UIEvent::create();
#if ENABLE(WEBGL)
    if (type == "WebGLContextEvent")
        return WebGLContextEvent::create();
#endif
    if (type == "WebKitAnimationEvent")
        return WebKitAnimationEvent::create();
    if (type == "WebKitTransitionEvent")
        return WebKitTransitionEvent::create();
    if (type == "WheelEvent")
        return WheelEvent::create();
    if (type == "XMLHttpRequestProgressEvent")
        return XMLHttpRequestProgressEvent::create();
    return 0;
}

} // namespace WebCore