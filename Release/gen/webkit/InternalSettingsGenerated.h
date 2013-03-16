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

#ifndef InternalSettingsGenerated_h
#define InternalSettingsGenerated_h

#include "RefCountedSupplement.h"
#include <wtf/PassRefPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/text/WTFString.h>

namespace WebCore {

class Page;

class InternalSettingsGenerated : public RefCounted<InternalSettingsGenerated> {
public:
    explicit InternalSettingsGenerated(Page*);
    virtual ~InternalSettingsGenerated();
    void resetToConsistentState();
    void setAccelerated2dCanvasEnabled(bool accelerated2dCanvasEnabled);
    void setAcceleratedCompositingFor3DTransformsEnabled(bool acceleratedCompositingFor3DTransformsEnabled);
    void setAcceleratedCompositingForAnimationEnabled(bool acceleratedCompositingForAnimationEnabled);
    void setAcceleratedCompositingForCanvasEnabled(bool acceleratedCompositingForCanvasEnabled);
    void setAcceleratedCompositingForFixedPositionEnabled(bool acceleratedCompositingForFixedPositionEnabled);
    void setAcceleratedCompositingForOverflowScrollEnabled(bool acceleratedCompositingForOverflowScrollEnabled);
    void setAcceleratedCompositingForPluginsEnabled(bool acceleratedCompositingForPluginsEnabled);
    void setAcceleratedCompositingForScrollableFramesEnabled(bool acceleratedCompositingForScrollableFramesEnabled);
    void setAcceleratedCompositingForVideoEnabled(bool acceleratedCompositingForVideoEnabled);
    void setAcceleratedDrawingEnabled(bool acceleratedDrawingEnabled);
    void setAcceleratedFiltersEnabled(bool acceleratedFiltersEnabled);
    void setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame);
    void setAllowDisplayOfInsecureContent(bool allowDisplayOfInsecureContent);
    void setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs);
    void setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent);
    void setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows);
    void setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs);
    void setApplyPageScaleFactorInCompositor(bool applyPageScaleFactorInCompositor);
    void setAsynchronousSpellCheckingEnabled(bool asynchronousSpellCheckingEnabled);
    void setBackspaceKeyNavigationEnabled(bool backspaceKeyNavigationEnabled);
    void setCanvasUsesAcceleratedDrawing(bool canvasUsesAcceleratedDrawing);
    void setCaretBrowsingEnabled(bool caretBrowsingEnabled);
    void setCookieEnabled(bool cookieEnabled);
    void setCrossOriginCheckInGetMatchedCSSRulesDisabled(bool crossOriginCheckInGetMatchedCSSRulesDisabled);
    void setCSSGridLayoutEnabled(bool cssGridLayoutEnabled);
    void setDefaultTextEncodingName(const String& defaultTextEncodingName);
    void setDeferred2dCanvasEnabled(bool deferred2dCanvasEnabled);
    void setDeveloperExtrasEnabled(bool developerExtrasEnabled);
    void setDeviceHeight(int deviceHeight);
    void setDeviceSupportsMouse(bool deviceSupportsMouse);
    void setDeviceSupportsTouch(bool deviceSupportsTouch);
    void setDeviceWidth(int deviceWidth);
    void setDiagnosticLoggingEnabled(bool diagnosticLoggingEnabled);
    void setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled);
    void setEnforceCSSMIMETypeInNoQuirksMode(bool enforceCSSMIMETypeInNoQuirksMode);
    void setExperimentalNotificationsEnabled(bool experimentalNotificationsEnabled);
    void setFixedElementsLayoutRelativeToFrame(bool fixedElementsLayoutRelativeToFrame);
    void setFixedPositionCreatesStackingContext(bool fixedPositionCreatesStackingContext);
    void setForceCompositingMode(bool forceCompositingMode);
    void setForceFTPDirectoryListings(bool forceFTPDirectoryListings);
    void setFrameFlatteningEnabled(bool frameFlatteningEnabled);
    void setFTPDirectoryTemplatePath(const String& ftpDirectoryTemplatePath);
    void setFullScreenEnabled(bool fullScreenEnabled);
    void setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled);
    void setIncrementalRenderingSuppressionTimeoutInSeconds(double incrementalRenderingSuppressionTimeoutInSeconds);
    void setInteractiveFormValidationEnabled(bool interactiveFormValidationEnabled);
    void setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard);
    void setJavaScriptCanOpenWindowsAutomatically(bool javaScriptCanOpenWindowsAutomatically);
    void setJavaScriptExperimentsEnabled(bool javaScriptExperimentsEnabled);
    void setLayoutFallbackWidth(int layoutFallbackWidth);
    void setLoadDeferringEnabled(bool loadDeferringEnabled);
    void setLoadsSiteIconsIgnoringImageLoadingSetting(bool loadsSiteIconsIgnoringImageLoadingSetting);
    void setLocalFileContentSniffingEnabled(bool localFileContentSniffingEnabled);
    void setLocalStorageDatabasePath(const String& localStorageDatabasePath);
    void setLocalStorageEnabled(bool localStorageEnabled);
    void setMaximumDecodedImageSize(size_t maximumDecodedImageSize);
    void setMaximumHTMLParserDOMTreeDepth(unsigned maximumHTMLParserDOMTreeDepth);
    void setMediaPlaybackAllowsInline(bool mediaPlaybackAllowsInline);
    void setMediaPlaybackRequiresUserGesture(bool mediaPlaybackRequiresUserGesture);
    void setMemoryInfoEnabled(bool memoryInfoEnabled);
    void setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize);
    void setNeedsDidFinishLoadOrderQuirk(bool needsDidFinishLoadOrderQuirk);
    void setNeedsIsLoadingInAPISenseQuirk(bool needsIsLoadingInAPISenseQuirk);
    void setNeedsKeyboardEventDisambiguationQuirks(bool needsKeyboardEventDisambiguationQuirks);
    void setNeedsLeopardMailQuirks(bool needsLeopardMailQuirks);
    void setNeedsSiteSpecificQuirks(bool needsSiteSpecificQuirks);
    void setNotificationsEnabled(bool notificationsEnabled);
    void setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled);
    void setOpenGLMultisamplingEnabled(bool openGLMultisamplingEnabled);
    void setPageCacheSupportsPlugins(bool pageCacheSupportsPlugins);
    void setPaginateDuringLayoutEnabled(bool paginateDuringLayoutEnabled);
    void setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds);
    void setPasswordEchoEnabled(bool passwordEchoEnabled);
    void setPlugInSnapshottingEnabled(bool plugInSnapshottingEnabled);
    void setPrivilegedWebGLExtensionsEnabled(bool privilegedWebGLExtensionsEnabled);
    void setQuantizedMemoryInfoEnabled(bool quantizedMemoryInfoEnabled);
    void setRegionBasedColumnsEnabled(bool regionBasedColumnsEnabled);
    void setRequestAnimationFrameEnabled(bool requestAnimationFrameEnabled);
    void setScrollingCoordinatorEnabled(bool scrollingCoordinatorEnabled);
    void setSessionStorageQuota(unsigned sessionStorageQuota);
    void setShouldDisplayCaptions(bool shouldDisplayCaptions);
    void setShouldDisplaySubtitles(bool shouldDisplaySubtitles);
    void setShouldDisplayTextDescriptions(bool shouldDisplayTextDescriptions);
    void setShouldInjectUserScriptsInInitialEmptyDocument(bool shouldInjectUserScriptsInInitialEmptyDocument);
    void setShouldPrintBackgrounds(bool shouldPrintBackgrounds);
    void setShouldRespectImageOrientation(bool shouldRespectImageOrientation);
    void setShowsToolTipOverTruncatedText(bool showsToolTipOverTruncatedText);
    void setShowsURLsInToolTips(bool showsURLsInToolTips);
    void setShrinksStandaloneImagesToFit(bool shrinksStandaloneImagesToFit);
    void setSpatialNavigationEnabled(bool spatialNavigationEnabled);
    void setSupportsMultipleWindows(bool supportsMultipleWindows);
    void setSuppressesIncrementalRendering(bool suppressesIncrementalRendering);
    void setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled);
    void setTouchAdjustmentEnabled(bool touchAdjustmentEnabled);
    void setTouchDragDropEnabled(bool touchDragDropEnabled);
    void setTreatsAnyTextCSSLinkAsStylesheet(bool treatsAnyTextCSSLinkAsStylesheet);
    void setUsePreHTML5ParserQuirks(bool usePreHTML5ParserQuirks);
    void setUsesDashboardBackwardCompatibilityMode(bool usesDashboardBackwardCompatibilityMode);
    void setUsesEncodingDetector(bool usesEncodingDetector);
    void setValidationMessageTimerMagnification(int validationMessageTimerMagnification);
    void setVisualWordMovementEnabled(bool visualWordMovementEnabled);
    void setWantsBalancedSetDefersLoadingBehavior(bool wantsBalancedSetDefersLoadingBehavior);
    void setWebArchiveDebugModeEnabled(bool webArchiveDebugModeEnabled);
    void setWebAudioEnabled(bool webAudioEnabled);
    void setWebGLEnabled(bool webGLEnabled);
    void setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled);
    void setWebSecurityEnabled(bool webSecurityEnabled);
    void setWindowFocusRestricted(bool windowFocusRestricted);
    void setXSSAuditorEnabled(bool xssAuditorEnabled);

private:
    Page* m_page;

    bool m_accelerated2dCanvasEnabled;
    bool m_acceleratedCompositingFor3DTransformsEnabled;
    bool m_acceleratedCompositingForAnimationEnabled;
    bool m_acceleratedCompositingForCanvasEnabled;
    bool m_acceleratedCompositingForFixedPositionEnabled;
    bool m_acceleratedCompositingForOverflowScrollEnabled;
    bool m_acceleratedCompositingForPluginsEnabled;
    bool m_acceleratedCompositingForScrollableFramesEnabled;
    bool m_acceleratedCompositingForVideoEnabled;
    bool m_acceleratedDrawingEnabled;
    bool m_acceleratedFiltersEnabled;
    bool m_allowCustomScrollbarInMainFrame;
    bool m_allowDisplayOfInsecureContent;
    bool m_allowFileAccessFromFileURLs;
    bool m_allowRunningOfInsecureContent;
    bool m_allowScriptsToCloseWindows;
    bool m_allowUniversalAccessFromFileURLs;
    bool m_applyPageScaleFactorInCompositor;
    bool m_asynchronousSpellCheckingEnabled;
    bool m_backspaceKeyNavigationEnabled;
    bool m_canvasUsesAcceleratedDrawing;
    bool m_caretBrowsingEnabled;
    bool m_cookieEnabled;
    bool m_crossOriginCheckInGetMatchedCSSRulesDisabled;
    bool m_cssGridLayoutEnabled;
    String m_defaultTextEncodingName;
    bool m_deferred2dCanvasEnabled;
    bool m_developerExtrasEnabled;
    int m_deviceHeight;
    bool m_deviceSupportsMouse;
    bool m_deviceSupportsTouch;
    int m_deviceWidth;
    bool m_diagnosticLoggingEnabled;
    bool m_downloadableBinaryFontsEnabled;
    bool m_enforceCSSMIMETypeInNoQuirksMode;
    bool m_experimentalNotificationsEnabled;
    bool m_fixedElementsLayoutRelativeToFrame;
    bool m_fixedPositionCreatesStackingContext;
    bool m_forceCompositingMode;
    bool m_forceFTPDirectoryListings;
    bool m_frameFlatteningEnabled;
    String m_ftpDirectoryTemplatePath;
#if ENABLE(FULLSCREEN_API)
    bool m_fullScreenEnabled;
#endif
    bool m_hyperlinkAuditingEnabled;
    double m_incrementalRenderingSuppressionTimeoutInSeconds;
    bool m_interactiveFormValidationEnabled;
    bool m_javaScriptCanAccessClipboard;
    bool m_javaScriptCanOpenWindowsAutomatically;
    bool m_javaScriptExperimentsEnabled;
    int m_layoutFallbackWidth;
    bool m_loadDeferringEnabled;
    bool m_loadsSiteIconsIgnoringImageLoadingSetting;
    bool m_localFileContentSniffingEnabled;
    String m_localStorageDatabasePath;
    bool m_localStorageEnabled;
    size_t m_maximumDecodedImageSize;
    unsigned m_maximumHTMLParserDOMTreeDepth;
    bool m_mediaPlaybackAllowsInline;
    bool m_mediaPlaybackRequiresUserGesture;
    bool m_memoryInfoEnabled;
    int m_minimumAccelerated2dCanvasSize;
    bool m_needsDidFinishLoadOrderQuirk;
    bool m_needsIsLoadingInAPISenseQuirk;
    bool m_needsKeyboardEventDisambiguationQuirks;
    bool m_needsLeopardMailQuirks;
    bool m_needsSiteSpecificQuirks;
    bool m_notificationsEnabled;
    bool m_offlineWebApplicationCacheEnabled;
    bool m_openGLMultisamplingEnabled;
    bool m_pageCacheSupportsPlugins;
    bool m_paginateDuringLayoutEnabled;
    double m_passwordEchoDurationInSeconds;
    bool m_passwordEchoEnabled;
    bool m_plugInSnapshottingEnabled;
    bool m_privilegedWebGLExtensionsEnabled;
    bool m_quantizedMemoryInfoEnabled;
    bool m_regionBasedColumnsEnabled;
    bool m_requestAnimationFrameEnabled;
    bool m_scrollingCoordinatorEnabled;
    unsigned m_sessionStorageQuota;
#if ENABLE(VIDEO_TRACK)
    bool m_shouldDisplayCaptions;
#endif
#if ENABLE(VIDEO_TRACK)
    bool m_shouldDisplaySubtitles;
#endif
#if ENABLE(VIDEO_TRACK)
    bool m_shouldDisplayTextDescriptions;
#endif
    bool m_shouldInjectUserScriptsInInitialEmptyDocument;
    bool m_shouldPrintBackgrounds;
    bool m_shouldRespectImageOrientation;
    bool m_showsToolTipOverTruncatedText;
    bool m_showsURLsInToolTips;
    bool m_shrinksStandaloneImagesToFit;
    bool m_spatialNavigationEnabled;
    bool m_supportsMultipleWindows;
    bool m_suppressesIncrementalRendering;
    bool m_syncXHRInDocumentsEnabled;
    bool m_touchAdjustmentEnabled;
    bool m_touchDragDropEnabled;
    bool m_treatsAnyTextCSSLinkAsStylesheet;
    bool m_usePreHTML5ParserQuirks;
#if ENABLE(DASHBOARD_SUPPORT)
    bool m_usesDashboardBackwardCompatibilityMode;
#endif
    bool m_usesEncodingDetector;
    int m_validationMessageTimerMagnification;
    bool m_visualWordMovementEnabled;
    bool m_wantsBalancedSetDefersLoadingBehavior;
#if ENABLE(WEB_ARCHIVE)
    bool m_webArchiveDebugModeEnabled;
#endif
    bool m_webAudioEnabled;
    bool m_webGLEnabled;
    bool m_webGLErrorsToConsoleEnabled;
    bool m_webSecurityEnabled;
    bool m_windowFocusRestricted;
    bool m_xssAuditorEnabled;
};

} // namespace WebCore
#endif // InternalSettingsGenerated_h
