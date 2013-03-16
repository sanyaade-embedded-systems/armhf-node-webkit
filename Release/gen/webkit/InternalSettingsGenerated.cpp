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
#include "InternalSettingsGenerated.h"

#include "Page.h"
#include "Settings.h"

namespace WebCore {

InternalSettingsGenerated::InternalSettingsGenerated(Page* page)
    : m_page(page)
    , m_accelerated2dCanvasEnabled(page->settings()->accelerated2dCanvasEnabled())
    , m_acceleratedCompositingFor3DTransformsEnabled(page->settings()->acceleratedCompositingFor3DTransformsEnabled())
    , m_acceleratedCompositingForAnimationEnabled(page->settings()->acceleratedCompositingForAnimationEnabled())
    , m_acceleratedCompositingForCanvasEnabled(page->settings()->acceleratedCompositingForCanvasEnabled())
    , m_acceleratedCompositingForFixedPositionEnabled(page->settings()->acceleratedCompositingForFixedPositionEnabled())
    , m_acceleratedCompositingForOverflowScrollEnabled(page->settings()->acceleratedCompositingForOverflowScrollEnabled())
    , m_acceleratedCompositingForPluginsEnabled(page->settings()->acceleratedCompositingForPluginsEnabled())
    , m_acceleratedCompositingForScrollableFramesEnabled(page->settings()->acceleratedCompositingForScrollableFramesEnabled())
    , m_acceleratedCompositingForVideoEnabled(page->settings()->acceleratedCompositingForVideoEnabled())
    , m_acceleratedDrawingEnabled(page->settings()->acceleratedDrawingEnabled())
    , m_acceleratedFiltersEnabled(page->settings()->acceleratedFiltersEnabled())
    , m_allowCustomScrollbarInMainFrame(page->settings()->allowCustomScrollbarInMainFrame())
    , m_allowDisplayOfInsecureContent(page->settings()->allowDisplayOfInsecureContent())
    , m_allowFileAccessFromFileURLs(page->settings()->allowFileAccessFromFileURLs())
    , m_allowRunningOfInsecureContent(page->settings()->allowRunningOfInsecureContent())
    , m_allowScriptsToCloseWindows(page->settings()->allowScriptsToCloseWindows())
    , m_allowUniversalAccessFromFileURLs(page->settings()->allowUniversalAccessFromFileURLs())
    , m_applyPageScaleFactorInCompositor(page->settings()->applyPageScaleFactorInCompositor())
    , m_asynchronousSpellCheckingEnabled(page->settings()->asynchronousSpellCheckingEnabled())
    , m_backspaceKeyNavigationEnabled(page->settings()->backspaceKeyNavigationEnabled())
    , m_canvasUsesAcceleratedDrawing(page->settings()->canvasUsesAcceleratedDrawing())
    , m_caretBrowsingEnabled(page->settings()->caretBrowsingEnabled())
    , m_cookieEnabled(page->settings()->cookieEnabled())
    , m_crossOriginCheckInGetMatchedCSSRulesDisabled(page->settings()->crossOriginCheckInGetMatchedCSSRulesDisabled())
    , m_cssGridLayoutEnabled(page->settings()->cssGridLayoutEnabled())
    , m_defaultTextEncodingName(page->settings()->defaultTextEncodingName())
    , m_deferred2dCanvasEnabled(page->settings()->deferred2dCanvasEnabled())
    , m_developerExtrasEnabled(page->settings()->developerExtrasEnabled())
    , m_deviceHeight(page->settings()->deviceHeight())
    , m_deviceSupportsMouse(page->settings()->deviceSupportsMouse())
    , m_deviceSupportsTouch(page->settings()->deviceSupportsTouch())
    , m_deviceWidth(page->settings()->deviceWidth())
    , m_diagnosticLoggingEnabled(page->settings()->diagnosticLoggingEnabled())
    , m_downloadableBinaryFontsEnabled(page->settings()->downloadableBinaryFontsEnabled())
    , m_enforceCSSMIMETypeInNoQuirksMode(page->settings()->enforceCSSMIMETypeInNoQuirksMode())
    , m_experimentalNotificationsEnabled(page->settings()->experimentalNotificationsEnabled())
    , m_fixedElementsLayoutRelativeToFrame(page->settings()->fixedElementsLayoutRelativeToFrame())
    , m_fixedPositionCreatesStackingContext(page->settings()->fixedPositionCreatesStackingContext())
    , m_forceCompositingMode(page->settings()->forceCompositingMode())
    , m_forceFTPDirectoryListings(page->settings()->forceFTPDirectoryListings())
    , m_frameFlatteningEnabled(page->settings()->frameFlatteningEnabled())
    , m_ftpDirectoryTemplatePath(page->settings()->ftpDirectoryTemplatePath())
#if ENABLE(FULLSCREEN_API)
    , m_fullScreenEnabled(page->settings()->fullScreenEnabled())
#endif
    , m_hyperlinkAuditingEnabled(page->settings()->hyperlinkAuditingEnabled())
    , m_incrementalRenderingSuppressionTimeoutInSeconds(page->settings()->incrementalRenderingSuppressionTimeoutInSeconds())
    , m_interactiveFormValidationEnabled(page->settings()->interactiveFormValidationEnabled())
    , m_javaScriptCanAccessClipboard(page->settings()->javaScriptCanAccessClipboard())
    , m_javaScriptCanOpenWindowsAutomatically(page->settings()->javaScriptCanOpenWindowsAutomatically())
    , m_javaScriptExperimentsEnabled(page->settings()->javaScriptExperimentsEnabled())
    , m_layoutFallbackWidth(page->settings()->layoutFallbackWidth())
    , m_loadDeferringEnabled(page->settings()->loadDeferringEnabled())
    , m_loadsSiteIconsIgnoringImageLoadingSetting(page->settings()->loadsSiteIconsIgnoringImageLoadingSetting())
    , m_localFileContentSniffingEnabled(page->settings()->localFileContentSniffingEnabled())
    , m_localStorageDatabasePath(page->settings()->localStorageDatabasePath())
    , m_localStorageEnabled(page->settings()->localStorageEnabled())
    , m_maximumDecodedImageSize(page->settings()->maximumDecodedImageSize())
    , m_maximumHTMLParserDOMTreeDepth(page->settings()->maximumHTMLParserDOMTreeDepth())
    , m_mediaPlaybackAllowsInline(page->settings()->mediaPlaybackAllowsInline())
    , m_mediaPlaybackRequiresUserGesture(page->settings()->mediaPlaybackRequiresUserGesture())
    , m_memoryInfoEnabled(page->settings()->memoryInfoEnabled())
    , m_minimumAccelerated2dCanvasSize(page->settings()->minimumAccelerated2dCanvasSize())
    , m_needsDidFinishLoadOrderQuirk(page->settings()->needsDidFinishLoadOrderQuirk())
    , m_needsIsLoadingInAPISenseQuirk(page->settings()->needsIsLoadingInAPISenseQuirk())
    , m_needsKeyboardEventDisambiguationQuirks(page->settings()->needsKeyboardEventDisambiguationQuirks())
    , m_needsLeopardMailQuirks(page->settings()->needsLeopardMailQuirks())
    , m_needsSiteSpecificQuirks(page->settings()->needsSiteSpecificQuirks())
    , m_notificationsEnabled(page->settings()->notificationsEnabled())
    , m_offlineWebApplicationCacheEnabled(page->settings()->offlineWebApplicationCacheEnabled())
    , m_openGLMultisamplingEnabled(page->settings()->openGLMultisamplingEnabled())
    , m_pageCacheSupportsPlugins(page->settings()->pageCacheSupportsPlugins())
    , m_paginateDuringLayoutEnabled(page->settings()->paginateDuringLayoutEnabled())
    , m_passwordEchoDurationInSeconds(page->settings()->passwordEchoDurationInSeconds())
    , m_passwordEchoEnabled(page->settings()->passwordEchoEnabled())
    , m_plugInSnapshottingEnabled(page->settings()->plugInSnapshottingEnabled())
    , m_privilegedWebGLExtensionsEnabled(page->settings()->privilegedWebGLExtensionsEnabled())
    , m_quantizedMemoryInfoEnabled(page->settings()->quantizedMemoryInfoEnabled())
    , m_regionBasedColumnsEnabled(page->settings()->regionBasedColumnsEnabled())
    , m_requestAnimationFrameEnabled(page->settings()->requestAnimationFrameEnabled())
    , m_scrollingCoordinatorEnabled(page->settings()->scrollingCoordinatorEnabled())
    , m_sessionStorageQuota(page->settings()->sessionStorageQuota())
#if ENABLE(VIDEO_TRACK)
    , m_shouldDisplayCaptions(page->settings()->shouldDisplayCaptions())
#endif
#if ENABLE(VIDEO_TRACK)
    , m_shouldDisplaySubtitles(page->settings()->shouldDisplaySubtitles())
#endif
#if ENABLE(VIDEO_TRACK)
    , m_shouldDisplayTextDescriptions(page->settings()->shouldDisplayTextDescriptions())
#endif
    , m_shouldInjectUserScriptsInInitialEmptyDocument(page->settings()->shouldInjectUserScriptsInInitialEmptyDocument())
    , m_shouldPrintBackgrounds(page->settings()->shouldPrintBackgrounds())
    , m_shouldRespectImageOrientation(page->settings()->shouldRespectImageOrientation())
    , m_showsToolTipOverTruncatedText(page->settings()->showsToolTipOverTruncatedText())
    , m_showsURLsInToolTips(page->settings()->showsURLsInToolTips())
    , m_shrinksStandaloneImagesToFit(page->settings()->shrinksStandaloneImagesToFit())
    , m_spatialNavigationEnabled(page->settings()->spatialNavigationEnabled())
    , m_supportsMultipleWindows(page->settings()->supportsMultipleWindows())
    , m_suppressesIncrementalRendering(page->settings()->suppressesIncrementalRendering())
    , m_syncXHRInDocumentsEnabled(page->settings()->syncXHRInDocumentsEnabled())
    , m_touchAdjustmentEnabled(page->settings()->touchAdjustmentEnabled())
    , m_touchDragDropEnabled(page->settings()->touchDragDropEnabled())
    , m_treatsAnyTextCSSLinkAsStylesheet(page->settings()->treatsAnyTextCSSLinkAsStylesheet())
    , m_usePreHTML5ParserQuirks(page->settings()->usePreHTML5ParserQuirks())
#if ENABLE(DASHBOARD_SUPPORT)
    , m_usesDashboardBackwardCompatibilityMode(page->settings()->usesDashboardBackwardCompatibilityMode())
#endif
    , m_usesEncodingDetector(page->settings()->usesEncodingDetector())
    , m_validationMessageTimerMagnification(page->settings()->validationMessageTimerMagnification())
    , m_visualWordMovementEnabled(page->settings()->visualWordMovementEnabled())
    , m_wantsBalancedSetDefersLoadingBehavior(page->settings()->wantsBalancedSetDefersLoadingBehavior())
#if ENABLE(WEB_ARCHIVE)
    , m_webArchiveDebugModeEnabled(page->settings()->webArchiveDebugModeEnabled())
#endif
    , m_webAudioEnabled(page->settings()->webAudioEnabled())
    , m_webGLEnabled(page->settings()->webGLEnabled())
    , m_webGLErrorsToConsoleEnabled(page->settings()->webGLErrorsToConsoleEnabled())
    , m_webSecurityEnabled(page->settings()->webSecurityEnabled())
    , m_windowFocusRestricted(page->settings()->windowFocusRestricted())
    , m_xssAuditorEnabled(page->settings()->xssAuditorEnabled())
{
}

InternalSettingsGenerated::~InternalSettingsGenerated()
{
}

void InternalSettingsGenerated::resetToConsistentState()
{
    m_page->settings()->setAccelerated2dCanvasEnabled(m_accelerated2dCanvasEnabled);
    m_page->settings()->setAcceleratedCompositingFor3DTransformsEnabled(m_acceleratedCompositingFor3DTransformsEnabled);
    m_page->settings()->setAcceleratedCompositingForAnimationEnabled(m_acceleratedCompositingForAnimationEnabled);
    m_page->settings()->setAcceleratedCompositingForCanvasEnabled(m_acceleratedCompositingForCanvasEnabled);
    m_page->settings()->setAcceleratedCompositingForFixedPositionEnabled(m_acceleratedCompositingForFixedPositionEnabled);
    m_page->settings()->setAcceleratedCompositingForOverflowScrollEnabled(m_acceleratedCompositingForOverflowScrollEnabled);
    m_page->settings()->setAcceleratedCompositingForPluginsEnabled(m_acceleratedCompositingForPluginsEnabled);
    m_page->settings()->setAcceleratedCompositingForScrollableFramesEnabled(m_acceleratedCompositingForScrollableFramesEnabled);
    m_page->settings()->setAcceleratedCompositingForVideoEnabled(m_acceleratedCompositingForVideoEnabled);
    m_page->settings()->setAcceleratedDrawingEnabled(m_acceleratedDrawingEnabled);
    m_page->settings()->setAcceleratedFiltersEnabled(m_acceleratedFiltersEnabled);
    m_page->settings()->setAllowCustomScrollbarInMainFrame(m_allowCustomScrollbarInMainFrame);
    m_page->settings()->setAllowDisplayOfInsecureContent(m_allowDisplayOfInsecureContent);
    m_page->settings()->setAllowFileAccessFromFileURLs(m_allowFileAccessFromFileURLs);
    m_page->settings()->setAllowRunningOfInsecureContent(m_allowRunningOfInsecureContent);
    m_page->settings()->setAllowScriptsToCloseWindows(m_allowScriptsToCloseWindows);
    m_page->settings()->setAllowUniversalAccessFromFileURLs(m_allowUniversalAccessFromFileURLs);
    m_page->settings()->setApplyPageScaleFactorInCompositor(m_applyPageScaleFactorInCompositor);
    m_page->settings()->setAsynchronousSpellCheckingEnabled(m_asynchronousSpellCheckingEnabled);
    m_page->settings()->setBackspaceKeyNavigationEnabled(m_backspaceKeyNavigationEnabled);
    m_page->settings()->setCanvasUsesAcceleratedDrawing(m_canvasUsesAcceleratedDrawing);
    m_page->settings()->setCaretBrowsingEnabled(m_caretBrowsingEnabled);
    m_page->settings()->setCookieEnabled(m_cookieEnabled);
    m_page->settings()->setCrossOriginCheckInGetMatchedCSSRulesDisabled(m_crossOriginCheckInGetMatchedCSSRulesDisabled);
    m_page->settings()->setCSSGridLayoutEnabled(m_cssGridLayoutEnabled);
    m_page->settings()->setDefaultTextEncodingName(m_defaultTextEncodingName);
    m_page->settings()->setDeferred2dCanvasEnabled(m_deferred2dCanvasEnabled);
    m_page->settings()->setDeveloperExtrasEnabled(m_developerExtrasEnabled);
    m_page->settings()->setDeviceHeight(m_deviceHeight);
    m_page->settings()->setDeviceSupportsMouse(m_deviceSupportsMouse);
    m_page->settings()->setDeviceSupportsTouch(m_deviceSupportsTouch);
    m_page->settings()->setDeviceWidth(m_deviceWidth);
    m_page->settings()->setDiagnosticLoggingEnabled(m_diagnosticLoggingEnabled);
    m_page->settings()->setDownloadableBinaryFontsEnabled(m_downloadableBinaryFontsEnabled);
    m_page->settings()->setEnforceCSSMIMETypeInNoQuirksMode(m_enforceCSSMIMETypeInNoQuirksMode);
    m_page->settings()->setExperimentalNotificationsEnabled(m_experimentalNotificationsEnabled);
    m_page->settings()->setFixedElementsLayoutRelativeToFrame(m_fixedElementsLayoutRelativeToFrame);
    m_page->settings()->setFixedPositionCreatesStackingContext(m_fixedPositionCreatesStackingContext);
    m_page->settings()->setForceCompositingMode(m_forceCompositingMode);
    m_page->settings()->setForceFTPDirectoryListings(m_forceFTPDirectoryListings);
    m_page->settings()->setFrameFlatteningEnabled(m_frameFlatteningEnabled);
    m_page->settings()->setFTPDirectoryTemplatePath(m_ftpDirectoryTemplatePath);
#if ENABLE(FULLSCREEN_API)
    m_page->settings()->setFullScreenEnabled(m_fullScreenEnabled);
#endif
    m_page->settings()->setHyperlinkAuditingEnabled(m_hyperlinkAuditingEnabled);
    m_page->settings()->setIncrementalRenderingSuppressionTimeoutInSeconds(m_incrementalRenderingSuppressionTimeoutInSeconds);
    m_page->settings()->setInteractiveFormValidationEnabled(m_interactiveFormValidationEnabled);
    m_page->settings()->setJavaScriptCanAccessClipboard(m_javaScriptCanAccessClipboard);
    m_page->settings()->setJavaScriptCanOpenWindowsAutomatically(m_javaScriptCanOpenWindowsAutomatically);
    m_page->settings()->setJavaScriptExperimentsEnabled(m_javaScriptExperimentsEnabled);
    m_page->settings()->setLayoutFallbackWidth(m_layoutFallbackWidth);
    m_page->settings()->setLoadDeferringEnabled(m_loadDeferringEnabled);
    m_page->settings()->setLoadsSiteIconsIgnoringImageLoadingSetting(m_loadsSiteIconsIgnoringImageLoadingSetting);
    m_page->settings()->setLocalFileContentSniffingEnabled(m_localFileContentSniffingEnabled);
    m_page->settings()->setLocalStorageDatabasePath(m_localStorageDatabasePath);
    m_page->settings()->setLocalStorageEnabled(m_localStorageEnabled);
    m_page->settings()->setMaximumDecodedImageSize(m_maximumDecodedImageSize);
    m_page->settings()->setMaximumHTMLParserDOMTreeDepth(m_maximumHTMLParserDOMTreeDepth);
    m_page->settings()->setMediaPlaybackAllowsInline(m_mediaPlaybackAllowsInline);
    m_page->settings()->setMediaPlaybackRequiresUserGesture(m_mediaPlaybackRequiresUserGesture);
    m_page->settings()->setMemoryInfoEnabled(m_memoryInfoEnabled);
    m_page->settings()->setMinimumAccelerated2dCanvasSize(m_minimumAccelerated2dCanvasSize);
    m_page->settings()->setNeedsDidFinishLoadOrderQuirk(m_needsDidFinishLoadOrderQuirk);
    m_page->settings()->setNeedsIsLoadingInAPISenseQuirk(m_needsIsLoadingInAPISenseQuirk);
    m_page->settings()->setNeedsKeyboardEventDisambiguationQuirks(m_needsKeyboardEventDisambiguationQuirks);
    m_page->settings()->setNeedsLeopardMailQuirks(m_needsLeopardMailQuirks);
    m_page->settings()->setNeedsSiteSpecificQuirks(m_needsSiteSpecificQuirks);
    m_page->settings()->setNotificationsEnabled(m_notificationsEnabled);
    m_page->settings()->setOfflineWebApplicationCacheEnabled(m_offlineWebApplicationCacheEnabled);
    m_page->settings()->setOpenGLMultisamplingEnabled(m_openGLMultisamplingEnabled);
    m_page->settings()->setPageCacheSupportsPlugins(m_pageCacheSupportsPlugins);
    m_page->settings()->setPaginateDuringLayoutEnabled(m_paginateDuringLayoutEnabled);
    m_page->settings()->setPasswordEchoDurationInSeconds(m_passwordEchoDurationInSeconds);
    m_page->settings()->setPasswordEchoEnabled(m_passwordEchoEnabled);
    m_page->settings()->setPlugInSnapshottingEnabled(m_plugInSnapshottingEnabled);
    m_page->settings()->setPrivilegedWebGLExtensionsEnabled(m_privilegedWebGLExtensionsEnabled);
    m_page->settings()->setQuantizedMemoryInfoEnabled(m_quantizedMemoryInfoEnabled);
    m_page->settings()->setRegionBasedColumnsEnabled(m_regionBasedColumnsEnabled);
    m_page->settings()->setRequestAnimationFrameEnabled(m_requestAnimationFrameEnabled);
    m_page->settings()->setScrollingCoordinatorEnabled(m_scrollingCoordinatorEnabled);
    m_page->settings()->setSessionStorageQuota(m_sessionStorageQuota);
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplayCaptions(m_shouldDisplayCaptions);
#endif
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplaySubtitles(m_shouldDisplaySubtitles);
#endif
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplayTextDescriptions(m_shouldDisplayTextDescriptions);
#endif
    m_page->settings()->setShouldInjectUserScriptsInInitialEmptyDocument(m_shouldInjectUserScriptsInInitialEmptyDocument);
    m_page->settings()->setShouldPrintBackgrounds(m_shouldPrintBackgrounds);
    m_page->settings()->setShouldRespectImageOrientation(m_shouldRespectImageOrientation);
    m_page->settings()->setShowsToolTipOverTruncatedText(m_showsToolTipOverTruncatedText);
    m_page->settings()->setShowsURLsInToolTips(m_showsURLsInToolTips);
    m_page->settings()->setShrinksStandaloneImagesToFit(m_shrinksStandaloneImagesToFit);
    m_page->settings()->setSpatialNavigationEnabled(m_spatialNavigationEnabled);
    m_page->settings()->setSupportsMultipleWindows(m_supportsMultipleWindows);
    m_page->settings()->setSuppressesIncrementalRendering(m_suppressesIncrementalRendering);
    m_page->settings()->setSyncXHRInDocumentsEnabled(m_syncXHRInDocumentsEnabled);
    m_page->settings()->setTouchAdjustmentEnabled(m_touchAdjustmentEnabled);
    m_page->settings()->setTouchDragDropEnabled(m_touchDragDropEnabled);
    m_page->settings()->setTreatsAnyTextCSSLinkAsStylesheet(m_treatsAnyTextCSSLinkAsStylesheet);
    m_page->settings()->setUsePreHTML5ParserQuirks(m_usePreHTML5ParserQuirks);
#if ENABLE(DASHBOARD_SUPPORT)
    m_page->settings()->setUsesDashboardBackwardCompatibilityMode(m_usesDashboardBackwardCompatibilityMode);
#endif
    m_page->settings()->setUsesEncodingDetector(m_usesEncodingDetector);
    m_page->settings()->setValidationMessageTimerMagnification(m_validationMessageTimerMagnification);
    m_page->settings()->setVisualWordMovementEnabled(m_visualWordMovementEnabled);
    m_page->settings()->setWantsBalancedSetDefersLoadingBehavior(m_wantsBalancedSetDefersLoadingBehavior);
#if ENABLE(WEB_ARCHIVE)
    m_page->settings()->setWebArchiveDebugModeEnabled(m_webArchiveDebugModeEnabled);
#endif
    m_page->settings()->setWebAudioEnabled(m_webAudioEnabled);
    m_page->settings()->setWebGLEnabled(m_webGLEnabled);
    m_page->settings()->setWebGLErrorsToConsoleEnabled(m_webGLErrorsToConsoleEnabled);
    m_page->settings()->setWebSecurityEnabled(m_webSecurityEnabled);
    m_page->settings()->setWindowFocusRestricted(m_windowFocusRestricted);
    m_page->settings()->setXSSAuditorEnabled(m_xssAuditorEnabled);
}
void InternalSettingsGenerated::setAccelerated2dCanvasEnabled(bool accelerated2dCanvasEnabled)
{
    m_page->settings()->setAccelerated2dCanvasEnabled(accelerated2dCanvasEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingFor3DTransformsEnabled(bool acceleratedCompositingFor3DTransformsEnabled)
{
    m_page->settings()->setAcceleratedCompositingFor3DTransformsEnabled(acceleratedCompositingFor3DTransformsEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForAnimationEnabled(bool acceleratedCompositingForAnimationEnabled)
{
    m_page->settings()->setAcceleratedCompositingForAnimationEnabled(acceleratedCompositingForAnimationEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForCanvasEnabled(bool acceleratedCompositingForCanvasEnabled)
{
    m_page->settings()->setAcceleratedCompositingForCanvasEnabled(acceleratedCompositingForCanvasEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForFixedPositionEnabled(bool acceleratedCompositingForFixedPositionEnabled)
{
    m_page->settings()->setAcceleratedCompositingForFixedPositionEnabled(acceleratedCompositingForFixedPositionEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForOverflowScrollEnabled(bool acceleratedCompositingForOverflowScrollEnabled)
{
    m_page->settings()->setAcceleratedCompositingForOverflowScrollEnabled(acceleratedCompositingForOverflowScrollEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForPluginsEnabled(bool acceleratedCompositingForPluginsEnabled)
{
    m_page->settings()->setAcceleratedCompositingForPluginsEnabled(acceleratedCompositingForPluginsEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForScrollableFramesEnabled(bool acceleratedCompositingForScrollableFramesEnabled)
{
    m_page->settings()->setAcceleratedCompositingForScrollableFramesEnabled(acceleratedCompositingForScrollableFramesEnabled);
}

void InternalSettingsGenerated::setAcceleratedCompositingForVideoEnabled(bool acceleratedCompositingForVideoEnabled)
{
    m_page->settings()->setAcceleratedCompositingForVideoEnabled(acceleratedCompositingForVideoEnabled);
}

void InternalSettingsGenerated::setAcceleratedDrawingEnabled(bool acceleratedDrawingEnabled)
{
    m_page->settings()->setAcceleratedDrawingEnabled(acceleratedDrawingEnabled);
}

void InternalSettingsGenerated::setAcceleratedFiltersEnabled(bool acceleratedFiltersEnabled)
{
    m_page->settings()->setAcceleratedFiltersEnabled(acceleratedFiltersEnabled);
}

void InternalSettingsGenerated::setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame)
{
    m_page->settings()->setAllowCustomScrollbarInMainFrame(allowCustomScrollbarInMainFrame);
}

void InternalSettingsGenerated::setAllowDisplayOfInsecureContent(bool allowDisplayOfInsecureContent)
{
    m_page->settings()->setAllowDisplayOfInsecureContent(allowDisplayOfInsecureContent);
}

void InternalSettingsGenerated::setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs)
{
    m_page->settings()->setAllowFileAccessFromFileURLs(allowFileAccessFromFileURLs);
}

void InternalSettingsGenerated::setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent)
{
    m_page->settings()->setAllowRunningOfInsecureContent(allowRunningOfInsecureContent);
}

void InternalSettingsGenerated::setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows)
{
    m_page->settings()->setAllowScriptsToCloseWindows(allowScriptsToCloseWindows);
}

void InternalSettingsGenerated::setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs)
{
    m_page->settings()->setAllowUniversalAccessFromFileURLs(allowUniversalAccessFromFileURLs);
}

void InternalSettingsGenerated::setApplyPageScaleFactorInCompositor(bool applyPageScaleFactorInCompositor)
{
    m_page->settings()->setApplyPageScaleFactorInCompositor(applyPageScaleFactorInCompositor);
}

void InternalSettingsGenerated::setAsynchronousSpellCheckingEnabled(bool asynchronousSpellCheckingEnabled)
{
    m_page->settings()->setAsynchronousSpellCheckingEnabled(asynchronousSpellCheckingEnabled);
}

void InternalSettingsGenerated::setBackspaceKeyNavigationEnabled(bool backspaceKeyNavigationEnabled)
{
    m_page->settings()->setBackspaceKeyNavigationEnabled(backspaceKeyNavigationEnabled);
}

void InternalSettingsGenerated::setCanvasUsesAcceleratedDrawing(bool canvasUsesAcceleratedDrawing)
{
    m_page->settings()->setCanvasUsesAcceleratedDrawing(canvasUsesAcceleratedDrawing);
}

void InternalSettingsGenerated::setCaretBrowsingEnabled(bool caretBrowsingEnabled)
{
    m_page->settings()->setCaretBrowsingEnabled(caretBrowsingEnabled);
}

void InternalSettingsGenerated::setCookieEnabled(bool cookieEnabled)
{
    m_page->settings()->setCookieEnabled(cookieEnabled);
}

void InternalSettingsGenerated::setCrossOriginCheckInGetMatchedCSSRulesDisabled(bool crossOriginCheckInGetMatchedCSSRulesDisabled)
{
    m_page->settings()->setCrossOriginCheckInGetMatchedCSSRulesDisabled(crossOriginCheckInGetMatchedCSSRulesDisabled);
}

void InternalSettingsGenerated::setCSSGridLayoutEnabled(bool cssGridLayoutEnabled)
{
    m_page->settings()->setCSSGridLayoutEnabled(cssGridLayoutEnabled);
}

void InternalSettingsGenerated::setDefaultTextEncodingName(const String& defaultTextEncodingName)
{
    m_page->settings()->setDefaultTextEncodingName(defaultTextEncodingName);
}

void InternalSettingsGenerated::setDeferred2dCanvasEnabled(bool deferred2dCanvasEnabled)
{
    m_page->settings()->setDeferred2dCanvasEnabled(deferred2dCanvasEnabled);
}

void InternalSettingsGenerated::setDeveloperExtrasEnabled(bool developerExtrasEnabled)
{
    m_page->settings()->setDeveloperExtrasEnabled(developerExtrasEnabled);
}

void InternalSettingsGenerated::setDeviceHeight(int deviceHeight)
{
    m_page->settings()->setDeviceHeight(deviceHeight);
}

void InternalSettingsGenerated::setDeviceSupportsMouse(bool deviceSupportsMouse)
{
    m_page->settings()->setDeviceSupportsMouse(deviceSupportsMouse);
}

void InternalSettingsGenerated::setDeviceSupportsTouch(bool deviceSupportsTouch)
{
    m_page->settings()->setDeviceSupportsTouch(deviceSupportsTouch);
}

void InternalSettingsGenerated::setDeviceWidth(int deviceWidth)
{
    m_page->settings()->setDeviceWidth(deviceWidth);
}

void InternalSettingsGenerated::setDiagnosticLoggingEnabled(bool diagnosticLoggingEnabled)
{
    m_page->settings()->setDiagnosticLoggingEnabled(diagnosticLoggingEnabled);
}

void InternalSettingsGenerated::setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled)
{
    m_page->settings()->setDownloadableBinaryFontsEnabled(downloadableBinaryFontsEnabled);
}

void InternalSettingsGenerated::setEnforceCSSMIMETypeInNoQuirksMode(bool enforceCSSMIMETypeInNoQuirksMode)
{
    m_page->settings()->setEnforceCSSMIMETypeInNoQuirksMode(enforceCSSMIMETypeInNoQuirksMode);
}

void InternalSettingsGenerated::setExperimentalNotificationsEnabled(bool experimentalNotificationsEnabled)
{
    m_page->settings()->setExperimentalNotificationsEnabled(experimentalNotificationsEnabled);
}

void InternalSettingsGenerated::setFixedElementsLayoutRelativeToFrame(bool fixedElementsLayoutRelativeToFrame)
{
    m_page->settings()->setFixedElementsLayoutRelativeToFrame(fixedElementsLayoutRelativeToFrame);
}

void InternalSettingsGenerated::setFixedPositionCreatesStackingContext(bool fixedPositionCreatesStackingContext)
{
    m_page->settings()->setFixedPositionCreatesStackingContext(fixedPositionCreatesStackingContext);
}

void InternalSettingsGenerated::setForceCompositingMode(bool forceCompositingMode)
{
    m_page->settings()->setForceCompositingMode(forceCompositingMode);
}

void InternalSettingsGenerated::setForceFTPDirectoryListings(bool forceFTPDirectoryListings)
{
    m_page->settings()->setForceFTPDirectoryListings(forceFTPDirectoryListings);
}

void InternalSettingsGenerated::setFrameFlatteningEnabled(bool frameFlatteningEnabled)
{
    m_page->settings()->setFrameFlatteningEnabled(frameFlatteningEnabled);
}

void InternalSettingsGenerated::setFTPDirectoryTemplatePath(const String& ftpDirectoryTemplatePath)
{
    m_page->settings()->setFTPDirectoryTemplatePath(ftpDirectoryTemplatePath);
}

void InternalSettingsGenerated::setFullScreenEnabled(bool fullScreenEnabled)
{
#if ENABLE(FULLSCREEN_API)
    m_page->settings()->setFullScreenEnabled(fullScreenEnabled);
#else
    UNUSED_PARAM(fullScreenEnabled);
#endif
}

void InternalSettingsGenerated::setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled)
{
    m_page->settings()->setHyperlinkAuditingEnabled(hyperlinkAuditingEnabled);
}

void InternalSettingsGenerated::setIncrementalRenderingSuppressionTimeoutInSeconds(double incrementalRenderingSuppressionTimeoutInSeconds)
{
    m_page->settings()->setIncrementalRenderingSuppressionTimeoutInSeconds(incrementalRenderingSuppressionTimeoutInSeconds);
}

void InternalSettingsGenerated::setInteractiveFormValidationEnabled(bool interactiveFormValidationEnabled)
{
    m_page->settings()->setInteractiveFormValidationEnabled(interactiveFormValidationEnabled);
}

void InternalSettingsGenerated::setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard)
{
    m_page->settings()->setJavaScriptCanAccessClipboard(javaScriptCanAccessClipboard);
}

void InternalSettingsGenerated::setJavaScriptCanOpenWindowsAutomatically(bool javaScriptCanOpenWindowsAutomatically)
{
    m_page->settings()->setJavaScriptCanOpenWindowsAutomatically(javaScriptCanOpenWindowsAutomatically);
}

void InternalSettingsGenerated::setJavaScriptExperimentsEnabled(bool javaScriptExperimentsEnabled)
{
    m_page->settings()->setJavaScriptExperimentsEnabled(javaScriptExperimentsEnabled);
}

void InternalSettingsGenerated::setLayoutFallbackWidth(int layoutFallbackWidth)
{
    m_page->settings()->setLayoutFallbackWidth(layoutFallbackWidth);
}

void InternalSettingsGenerated::setLoadDeferringEnabled(bool loadDeferringEnabled)
{
    m_page->settings()->setLoadDeferringEnabled(loadDeferringEnabled);
}

void InternalSettingsGenerated::setLoadsSiteIconsIgnoringImageLoadingSetting(bool loadsSiteIconsIgnoringImageLoadingSetting)
{
    m_page->settings()->setLoadsSiteIconsIgnoringImageLoadingSetting(loadsSiteIconsIgnoringImageLoadingSetting);
}

void InternalSettingsGenerated::setLocalFileContentSniffingEnabled(bool localFileContentSniffingEnabled)
{
    m_page->settings()->setLocalFileContentSniffingEnabled(localFileContentSniffingEnabled);
}

void InternalSettingsGenerated::setLocalStorageDatabasePath(const String& localStorageDatabasePath)
{
    m_page->settings()->setLocalStorageDatabasePath(localStorageDatabasePath);
}

void InternalSettingsGenerated::setLocalStorageEnabled(bool localStorageEnabled)
{
    m_page->settings()->setLocalStorageEnabled(localStorageEnabled);
}

void InternalSettingsGenerated::setMaximumDecodedImageSize(size_t maximumDecodedImageSize)
{
    m_page->settings()->setMaximumDecodedImageSize(maximumDecodedImageSize);
}

void InternalSettingsGenerated::setMaximumHTMLParserDOMTreeDepth(unsigned maximumHTMLParserDOMTreeDepth)
{
    m_page->settings()->setMaximumHTMLParserDOMTreeDepth(maximumHTMLParserDOMTreeDepth);
}

void InternalSettingsGenerated::setMediaPlaybackAllowsInline(bool mediaPlaybackAllowsInline)
{
    m_page->settings()->setMediaPlaybackAllowsInline(mediaPlaybackAllowsInline);
}

void InternalSettingsGenerated::setMediaPlaybackRequiresUserGesture(bool mediaPlaybackRequiresUserGesture)
{
    m_page->settings()->setMediaPlaybackRequiresUserGesture(mediaPlaybackRequiresUserGesture);
}

void InternalSettingsGenerated::setMemoryInfoEnabled(bool memoryInfoEnabled)
{
    m_page->settings()->setMemoryInfoEnabled(memoryInfoEnabled);
}

void InternalSettingsGenerated::setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize)
{
    m_page->settings()->setMinimumAccelerated2dCanvasSize(minimumAccelerated2dCanvasSize);
}

void InternalSettingsGenerated::setNeedsDidFinishLoadOrderQuirk(bool needsDidFinishLoadOrderQuirk)
{
    m_page->settings()->setNeedsDidFinishLoadOrderQuirk(needsDidFinishLoadOrderQuirk);
}

void InternalSettingsGenerated::setNeedsIsLoadingInAPISenseQuirk(bool needsIsLoadingInAPISenseQuirk)
{
    m_page->settings()->setNeedsIsLoadingInAPISenseQuirk(needsIsLoadingInAPISenseQuirk);
}

void InternalSettingsGenerated::setNeedsKeyboardEventDisambiguationQuirks(bool needsKeyboardEventDisambiguationQuirks)
{
    m_page->settings()->setNeedsKeyboardEventDisambiguationQuirks(needsKeyboardEventDisambiguationQuirks);
}

void InternalSettingsGenerated::setNeedsLeopardMailQuirks(bool needsLeopardMailQuirks)
{
    m_page->settings()->setNeedsLeopardMailQuirks(needsLeopardMailQuirks);
}

void InternalSettingsGenerated::setNeedsSiteSpecificQuirks(bool needsSiteSpecificQuirks)
{
    m_page->settings()->setNeedsSiteSpecificQuirks(needsSiteSpecificQuirks);
}

void InternalSettingsGenerated::setNotificationsEnabled(bool notificationsEnabled)
{
    m_page->settings()->setNotificationsEnabled(notificationsEnabled);
}

void InternalSettingsGenerated::setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled)
{
    m_page->settings()->setOfflineWebApplicationCacheEnabled(offlineWebApplicationCacheEnabled);
}

void InternalSettingsGenerated::setOpenGLMultisamplingEnabled(bool openGLMultisamplingEnabled)
{
    m_page->settings()->setOpenGLMultisamplingEnabled(openGLMultisamplingEnabled);
}

void InternalSettingsGenerated::setPageCacheSupportsPlugins(bool pageCacheSupportsPlugins)
{
    m_page->settings()->setPageCacheSupportsPlugins(pageCacheSupportsPlugins);
}

void InternalSettingsGenerated::setPaginateDuringLayoutEnabled(bool paginateDuringLayoutEnabled)
{
    m_page->settings()->setPaginateDuringLayoutEnabled(paginateDuringLayoutEnabled);
}

void InternalSettingsGenerated::setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds)
{
    m_page->settings()->setPasswordEchoDurationInSeconds(passwordEchoDurationInSeconds);
}

void InternalSettingsGenerated::setPasswordEchoEnabled(bool passwordEchoEnabled)
{
    m_page->settings()->setPasswordEchoEnabled(passwordEchoEnabled);
}

void InternalSettingsGenerated::setPlugInSnapshottingEnabled(bool plugInSnapshottingEnabled)
{
    m_page->settings()->setPlugInSnapshottingEnabled(plugInSnapshottingEnabled);
}

void InternalSettingsGenerated::setPrivilegedWebGLExtensionsEnabled(bool privilegedWebGLExtensionsEnabled)
{
    m_page->settings()->setPrivilegedWebGLExtensionsEnabled(privilegedWebGLExtensionsEnabled);
}

void InternalSettingsGenerated::setQuantizedMemoryInfoEnabled(bool quantizedMemoryInfoEnabled)
{
    m_page->settings()->setQuantizedMemoryInfoEnabled(quantizedMemoryInfoEnabled);
}

void InternalSettingsGenerated::setRegionBasedColumnsEnabled(bool regionBasedColumnsEnabled)
{
    m_page->settings()->setRegionBasedColumnsEnabled(regionBasedColumnsEnabled);
}

void InternalSettingsGenerated::setRequestAnimationFrameEnabled(bool requestAnimationFrameEnabled)
{
    m_page->settings()->setRequestAnimationFrameEnabled(requestAnimationFrameEnabled);
}

void InternalSettingsGenerated::setScrollingCoordinatorEnabled(bool scrollingCoordinatorEnabled)
{
    m_page->settings()->setScrollingCoordinatorEnabled(scrollingCoordinatorEnabled);
}

void InternalSettingsGenerated::setSessionStorageQuota(unsigned sessionStorageQuota)
{
    m_page->settings()->setSessionStorageQuota(sessionStorageQuota);
}

void InternalSettingsGenerated::setShouldDisplayCaptions(bool shouldDisplayCaptions)
{
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplayCaptions(shouldDisplayCaptions);
#else
    UNUSED_PARAM(shouldDisplayCaptions);
#endif
}

void InternalSettingsGenerated::setShouldDisplaySubtitles(bool shouldDisplaySubtitles)
{
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplaySubtitles(shouldDisplaySubtitles);
#else
    UNUSED_PARAM(shouldDisplaySubtitles);
#endif
}

void InternalSettingsGenerated::setShouldDisplayTextDescriptions(bool shouldDisplayTextDescriptions)
{
#if ENABLE(VIDEO_TRACK)
    m_page->settings()->setShouldDisplayTextDescriptions(shouldDisplayTextDescriptions);
#else
    UNUSED_PARAM(shouldDisplayTextDescriptions);
#endif
}

void InternalSettingsGenerated::setShouldInjectUserScriptsInInitialEmptyDocument(bool shouldInjectUserScriptsInInitialEmptyDocument)
{
    m_page->settings()->setShouldInjectUserScriptsInInitialEmptyDocument(shouldInjectUserScriptsInInitialEmptyDocument);
}

void InternalSettingsGenerated::setShouldPrintBackgrounds(bool shouldPrintBackgrounds)
{
    m_page->settings()->setShouldPrintBackgrounds(shouldPrintBackgrounds);
}

void InternalSettingsGenerated::setShouldRespectImageOrientation(bool shouldRespectImageOrientation)
{
    m_page->settings()->setShouldRespectImageOrientation(shouldRespectImageOrientation);
}

void InternalSettingsGenerated::setShowsToolTipOverTruncatedText(bool showsToolTipOverTruncatedText)
{
    m_page->settings()->setShowsToolTipOverTruncatedText(showsToolTipOverTruncatedText);
}

void InternalSettingsGenerated::setShowsURLsInToolTips(bool showsURLsInToolTips)
{
    m_page->settings()->setShowsURLsInToolTips(showsURLsInToolTips);
}

void InternalSettingsGenerated::setShrinksStandaloneImagesToFit(bool shrinksStandaloneImagesToFit)
{
    m_page->settings()->setShrinksStandaloneImagesToFit(shrinksStandaloneImagesToFit);
}

void InternalSettingsGenerated::setSpatialNavigationEnabled(bool spatialNavigationEnabled)
{
    m_page->settings()->setSpatialNavigationEnabled(spatialNavigationEnabled);
}

void InternalSettingsGenerated::setSupportsMultipleWindows(bool supportsMultipleWindows)
{
    m_page->settings()->setSupportsMultipleWindows(supportsMultipleWindows);
}

void InternalSettingsGenerated::setSuppressesIncrementalRendering(bool suppressesIncrementalRendering)
{
    m_page->settings()->setSuppressesIncrementalRendering(suppressesIncrementalRendering);
}

void InternalSettingsGenerated::setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled)
{
    m_page->settings()->setSyncXHRInDocumentsEnabled(syncXHRInDocumentsEnabled);
}

void InternalSettingsGenerated::setTouchAdjustmentEnabled(bool touchAdjustmentEnabled)
{
    m_page->settings()->setTouchAdjustmentEnabled(touchAdjustmentEnabled);
}

void InternalSettingsGenerated::setTouchDragDropEnabled(bool touchDragDropEnabled)
{
    m_page->settings()->setTouchDragDropEnabled(touchDragDropEnabled);
}

void InternalSettingsGenerated::setTreatsAnyTextCSSLinkAsStylesheet(bool treatsAnyTextCSSLinkAsStylesheet)
{
    m_page->settings()->setTreatsAnyTextCSSLinkAsStylesheet(treatsAnyTextCSSLinkAsStylesheet);
}

void InternalSettingsGenerated::setUsePreHTML5ParserQuirks(bool usePreHTML5ParserQuirks)
{
    m_page->settings()->setUsePreHTML5ParserQuirks(usePreHTML5ParserQuirks);
}

void InternalSettingsGenerated::setUsesDashboardBackwardCompatibilityMode(bool usesDashboardBackwardCompatibilityMode)
{
#if ENABLE(DASHBOARD_SUPPORT)
    m_page->settings()->setUsesDashboardBackwardCompatibilityMode(usesDashboardBackwardCompatibilityMode);
#else
    UNUSED_PARAM(usesDashboardBackwardCompatibilityMode);
#endif
}

void InternalSettingsGenerated::setUsesEncodingDetector(bool usesEncodingDetector)
{
    m_page->settings()->setUsesEncodingDetector(usesEncodingDetector);
}

void InternalSettingsGenerated::setValidationMessageTimerMagnification(int validationMessageTimerMagnification)
{
    m_page->settings()->setValidationMessageTimerMagnification(validationMessageTimerMagnification);
}

void InternalSettingsGenerated::setVisualWordMovementEnabled(bool visualWordMovementEnabled)
{
    m_page->settings()->setVisualWordMovementEnabled(visualWordMovementEnabled);
}

void InternalSettingsGenerated::setWantsBalancedSetDefersLoadingBehavior(bool wantsBalancedSetDefersLoadingBehavior)
{
    m_page->settings()->setWantsBalancedSetDefersLoadingBehavior(wantsBalancedSetDefersLoadingBehavior);
}

void InternalSettingsGenerated::setWebArchiveDebugModeEnabled(bool webArchiveDebugModeEnabled)
{
#if ENABLE(WEB_ARCHIVE)
    m_page->settings()->setWebArchiveDebugModeEnabled(webArchiveDebugModeEnabled);
#else
    UNUSED_PARAM(webArchiveDebugModeEnabled);
#endif
}

void InternalSettingsGenerated::setWebAudioEnabled(bool webAudioEnabled)
{
    m_page->settings()->setWebAudioEnabled(webAudioEnabled);
}

void InternalSettingsGenerated::setWebGLEnabled(bool webGLEnabled)
{
    m_page->settings()->setWebGLEnabled(webGLEnabled);
}

void InternalSettingsGenerated::setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled)
{
    m_page->settings()->setWebGLErrorsToConsoleEnabled(webGLErrorsToConsoleEnabled);
}

void InternalSettingsGenerated::setWebSecurityEnabled(bool webSecurityEnabled)
{
    m_page->settings()->setWebSecurityEnabled(webSecurityEnabled);
}

void InternalSettingsGenerated::setWindowFocusRestricted(bool windowFocusRestricted)
{
    m_page->settings()->setWindowFocusRestricted(windowFocusRestricted);
}

void InternalSettingsGenerated::setXSSAuditorEnabled(bool xssAuditorEnabled)
{
    m_page->settings()->setXSSAuditorEnabled(xssAuditorEnabled);
}

} // namespace WebCore
