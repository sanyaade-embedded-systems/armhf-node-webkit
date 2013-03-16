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

#ifndef SettingsMacros_h
#define SettingsMacros_h

#if ENABLE(DASHBOARD_SUPPORT)
#define DASHBOARD_SUPPORT_SETTINGS_GETTER_AND_SETTERS \
    bool usesDashboardBackwardCompatibilityMode() const { return m_usesDashboardBackwardCompatibilityMode; } \
    void setUsesDashboardBackwardCompatibilityMode(bool usesDashboardBackwardCompatibilityMode) { m_usesDashboardBackwardCompatibilityMode = usesDashboardBackwardCompatibilityMode; } \
// End of DASHBOARD_SUPPORT_SETTINGS_GETTER_AND_SETTERS
#define DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
// End of DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define DASHBOARD_SUPPORT_SETTINGS_BOOL_MEMBER_VARIABLES \
    bool m_usesDashboardBackwardCompatibilityMode : 1; \
// End of DASHBOARD_SUPPORT_SETTINGS_BOOL_MEMBER_VARIABLES
#define DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_INITIALIZERS \
// End of DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_INITIALIZERS
#define DASHBOARD_SUPPORT_SETTINGS_BOOL_INITIALIZERS \
    , m_usesDashboardBackwardCompatibilityMode(false) \
// End of DASHBOARD_SUPPORT_SETTINGS_BOOL_INITIALIZERS
#else
#define DASHBOARD_SUPPORT_SETTINGS_GETTER_AND_SETTERS
#define DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define DASHBOARD_SUPPORT_SETTINGS_BOOL_MEMBER_VARIABLES
#define DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_INITIALIZERS
#define DASHBOARD_SUPPORT_SETTINGS_BOOL_INITIALIZERS
#endif

#if ENABLE(FULLSCREEN_API)
#define FULLSCREEN_API_SETTINGS_GETTER_AND_SETTERS \
    bool fullScreenEnabled() const { return m_fullScreenEnabled; } \
    void setFullScreenEnabled(bool fullScreenEnabled) { m_fullScreenEnabled = fullScreenEnabled; } \
// End of FULLSCREEN_API_SETTINGS_GETTER_AND_SETTERS
#define FULLSCREEN_API_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
// End of FULLSCREEN_API_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define FULLSCREEN_API_SETTINGS_BOOL_MEMBER_VARIABLES \
    bool m_fullScreenEnabled : 1; \
// End of FULLSCREEN_API_SETTINGS_BOOL_MEMBER_VARIABLES
#define FULLSCREEN_API_SETTINGS_NON_BOOL_INITIALIZERS \
// End of FULLSCREEN_API_SETTINGS_NON_BOOL_INITIALIZERS
#define FULLSCREEN_API_SETTINGS_BOOL_INITIALIZERS \
    , m_fullScreenEnabled(false) \
// End of FULLSCREEN_API_SETTINGS_BOOL_INITIALIZERS
#else
#define FULLSCREEN_API_SETTINGS_GETTER_AND_SETTERS
#define FULLSCREEN_API_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define FULLSCREEN_API_SETTINGS_BOOL_MEMBER_VARIABLES
#define FULLSCREEN_API_SETTINGS_NON_BOOL_INITIALIZERS
#define FULLSCREEN_API_SETTINGS_BOOL_INITIALIZERS
#endif

#if ENABLE(VIDEO_TRACK)
#define VIDEO_TRACK_SETTINGS_GETTER_AND_SETTERS \
    bool shouldDisplayCaptions() const { return m_shouldDisplayCaptions; } \
    void setShouldDisplayCaptions(bool shouldDisplayCaptions) { m_shouldDisplayCaptions = shouldDisplayCaptions; } \
    bool shouldDisplaySubtitles() const { return m_shouldDisplaySubtitles; } \
    void setShouldDisplaySubtitles(bool shouldDisplaySubtitles) { m_shouldDisplaySubtitles = shouldDisplaySubtitles; } \
    bool shouldDisplayTextDescriptions() const { return m_shouldDisplayTextDescriptions; } \
    void setShouldDisplayTextDescriptions(bool shouldDisplayTextDescriptions) { m_shouldDisplayTextDescriptions = shouldDisplayTextDescriptions; } \
// End of VIDEO_TRACK_SETTINGS_GETTER_AND_SETTERS
#define VIDEO_TRACK_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
// End of VIDEO_TRACK_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define VIDEO_TRACK_SETTINGS_BOOL_MEMBER_VARIABLES \
    bool m_shouldDisplayCaptions : 1; \
    bool m_shouldDisplaySubtitles : 1; \
    bool m_shouldDisplayTextDescriptions : 1; \
// End of VIDEO_TRACK_SETTINGS_BOOL_MEMBER_VARIABLES
#define VIDEO_TRACK_SETTINGS_NON_BOOL_INITIALIZERS \
// End of VIDEO_TRACK_SETTINGS_NON_BOOL_INITIALIZERS
#define VIDEO_TRACK_SETTINGS_BOOL_INITIALIZERS \
    , m_shouldDisplayCaptions(false) \
    , m_shouldDisplaySubtitles(false) \
    , m_shouldDisplayTextDescriptions(false) \
// End of VIDEO_TRACK_SETTINGS_BOOL_INITIALIZERS
#else
#define VIDEO_TRACK_SETTINGS_GETTER_AND_SETTERS
#define VIDEO_TRACK_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define VIDEO_TRACK_SETTINGS_BOOL_MEMBER_VARIABLES
#define VIDEO_TRACK_SETTINGS_NON_BOOL_INITIALIZERS
#define VIDEO_TRACK_SETTINGS_BOOL_INITIALIZERS
#endif

#if ENABLE(WEB_ARCHIVE)
#define WEB_ARCHIVE_SETTINGS_GETTER_AND_SETTERS \
    bool webArchiveDebugModeEnabled() const { return m_webArchiveDebugModeEnabled; } \
    void setWebArchiveDebugModeEnabled(bool webArchiveDebugModeEnabled) { m_webArchiveDebugModeEnabled = webArchiveDebugModeEnabled; } \
// End of WEB_ARCHIVE_SETTINGS_GETTER_AND_SETTERS
#define WEB_ARCHIVE_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
// End of WEB_ARCHIVE_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define WEB_ARCHIVE_SETTINGS_BOOL_MEMBER_VARIABLES \
    bool m_webArchiveDebugModeEnabled : 1; \
// End of WEB_ARCHIVE_SETTINGS_BOOL_MEMBER_VARIABLES
#define WEB_ARCHIVE_SETTINGS_NON_BOOL_INITIALIZERS \
// End of WEB_ARCHIVE_SETTINGS_NON_BOOL_INITIALIZERS
#define WEB_ARCHIVE_SETTINGS_BOOL_INITIALIZERS \
    , m_webArchiveDebugModeEnabled(false) \
// End of WEB_ARCHIVE_SETTINGS_BOOL_INITIALIZERS
#else
#define WEB_ARCHIVE_SETTINGS_GETTER_AND_SETTERS
#define WEB_ARCHIVE_SETTINGS_NON_BOOL_MEMBER_VARIABLES
#define WEB_ARCHIVE_SETTINGS_BOOL_MEMBER_VARIABLES
#define WEB_ARCHIVE_SETTINGS_NON_BOOL_INITIALIZERS
#define WEB_ARCHIVE_SETTINGS_BOOL_INITIALIZERS
#endif

#define SETTINGS_GETTERS_AND_SETTERS \
    bool accelerated2dCanvasEnabled() const { return m_accelerated2dCanvasEnabled; } \
    void setAccelerated2dCanvasEnabled(bool accelerated2dCanvasEnabled) { m_accelerated2dCanvasEnabled = accelerated2dCanvasEnabled; } \
    bool acceleratedCompositingFor3DTransformsEnabled() const { return m_acceleratedCompositingFor3DTransformsEnabled; } \
    void setAcceleratedCompositingFor3DTransformsEnabled(bool acceleratedCompositingFor3DTransformsEnabled) { m_acceleratedCompositingFor3DTransformsEnabled = acceleratedCompositingFor3DTransformsEnabled; } \
    bool acceleratedCompositingForAnimationEnabled() const { return m_acceleratedCompositingForAnimationEnabled; } \
    void setAcceleratedCompositingForAnimationEnabled(bool acceleratedCompositingForAnimationEnabled) { m_acceleratedCompositingForAnimationEnabled = acceleratedCompositingForAnimationEnabled; } \
    bool acceleratedCompositingForCanvasEnabled() const { return m_acceleratedCompositingForCanvasEnabled; } \
    void setAcceleratedCompositingForCanvasEnabled(bool acceleratedCompositingForCanvasEnabled) { m_acceleratedCompositingForCanvasEnabled = acceleratedCompositingForCanvasEnabled; } \
    bool acceleratedCompositingForFixedPositionEnabled() const { return m_acceleratedCompositingForFixedPositionEnabled; } \
    void setAcceleratedCompositingForFixedPositionEnabled(bool acceleratedCompositingForFixedPositionEnabled) { m_acceleratedCompositingForFixedPositionEnabled = acceleratedCompositingForFixedPositionEnabled; } \
    bool acceleratedCompositingForOverflowScrollEnabled() const { return m_acceleratedCompositingForOverflowScrollEnabled; } \
    void setAcceleratedCompositingForOverflowScrollEnabled(bool acceleratedCompositingForOverflowScrollEnabled) { m_acceleratedCompositingForOverflowScrollEnabled = acceleratedCompositingForOverflowScrollEnabled; } \
    bool acceleratedCompositingForPluginsEnabled() const { return m_acceleratedCompositingForPluginsEnabled; } \
    void setAcceleratedCompositingForPluginsEnabled(bool acceleratedCompositingForPluginsEnabled) { m_acceleratedCompositingForPluginsEnabled = acceleratedCompositingForPluginsEnabled; } \
    bool acceleratedCompositingForScrollableFramesEnabled() const { return m_acceleratedCompositingForScrollableFramesEnabled; } \
    void setAcceleratedCompositingForScrollableFramesEnabled(bool acceleratedCompositingForScrollableFramesEnabled) { m_acceleratedCompositingForScrollableFramesEnabled = acceleratedCompositingForScrollableFramesEnabled; } \
    bool acceleratedCompositingForVideoEnabled() const { return m_acceleratedCompositingForVideoEnabled; } \
    void setAcceleratedCompositingForVideoEnabled(bool acceleratedCompositingForVideoEnabled) { m_acceleratedCompositingForVideoEnabled = acceleratedCompositingForVideoEnabled; } \
    bool acceleratedDrawingEnabled() const { return m_acceleratedDrawingEnabled; } \
    void setAcceleratedDrawingEnabled(bool acceleratedDrawingEnabled) { m_acceleratedDrawingEnabled = acceleratedDrawingEnabled; } \
    bool acceleratedFiltersEnabled() const { return m_acceleratedFiltersEnabled; } \
    void setAcceleratedFiltersEnabled(bool acceleratedFiltersEnabled) { m_acceleratedFiltersEnabled = acceleratedFiltersEnabled; } \
    bool allowCustomScrollbarInMainFrame() const { return m_allowCustomScrollbarInMainFrame; } \
    void setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame) { m_allowCustomScrollbarInMainFrame = allowCustomScrollbarInMainFrame; } \
    bool allowDisplayOfInsecureContent() const { return m_allowDisplayOfInsecureContent; } \
    void setAllowDisplayOfInsecureContent(bool allowDisplayOfInsecureContent) { m_allowDisplayOfInsecureContent = allowDisplayOfInsecureContent; } \
    bool allowFileAccessFromFileURLs() const { return m_allowFileAccessFromFileURLs; } \
    void setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs) { m_allowFileAccessFromFileURLs = allowFileAccessFromFileURLs; } \
    bool allowRunningOfInsecureContent() const { return m_allowRunningOfInsecureContent; } \
    void setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent) { m_allowRunningOfInsecureContent = allowRunningOfInsecureContent; } \
    bool allowScriptsToCloseWindows() const { return m_allowScriptsToCloseWindows; } \
    void setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows) { m_allowScriptsToCloseWindows = allowScriptsToCloseWindows; } \
    bool allowUniversalAccessFromFileURLs() const { return m_allowUniversalAccessFromFileURLs; } \
    void setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs) { m_allowUniversalAccessFromFileURLs = allowUniversalAccessFromFileURLs; } \
    bool applyPageScaleFactorInCompositor() const { return m_applyPageScaleFactorInCompositor; } \
    void setApplyPageScaleFactorInCompositor(bool applyPageScaleFactorInCompositor) { m_applyPageScaleFactorInCompositor = applyPageScaleFactorInCompositor; } \
    bool asynchronousSpellCheckingEnabled() const { return m_asynchronousSpellCheckingEnabled; } \
    void setAsynchronousSpellCheckingEnabled(bool asynchronousSpellCheckingEnabled) { m_asynchronousSpellCheckingEnabled = asynchronousSpellCheckingEnabled; } \
    bool backspaceKeyNavigationEnabled() const { return m_backspaceKeyNavigationEnabled; } \
    void setBackspaceKeyNavigationEnabled(bool backspaceKeyNavigationEnabled) { m_backspaceKeyNavigationEnabled = backspaceKeyNavigationEnabled; } \
    bool canvasUsesAcceleratedDrawing() const { return m_canvasUsesAcceleratedDrawing; } \
    void setCanvasUsesAcceleratedDrawing(bool canvasUsesAcceleratedDrawing) { m_canvasUsesAcceleratedDrawing = canvasUsesAcceleratedDrawing; } \
    bool caretBrowsingEnabled() const { return m_caretBrowsingEnabled; } \
    void setCaretBrowsingEnabled(bool caretBrowsingEnabled) { m_caretBrowsingEnabled = caretBrowsingEnabled; } \
    bool cookieEnabled() const { return m_cookieEnabled; } \
    void setCookieEnabled(bool cookieEnabled) { m_cookieEnabled = cookieEnabled; } \
    bool crossOriginCheckInGetMatchedCSSRulesDisabled() const { return m_crossOriginCheckInGetMatchedCSSRulesDisabled; } \
    void setCrossOriginCheckInGetMatchedCSSRulesDisabled(bool crossOriginCheckInGetMatchedCSSRulesDisabled) { m_crossOriginCheckInGetMatchedCSSRulesDisabled = crossOriginCheckInGetMatchedCSSRulesDisabled; } \
    bool cssGridLayoutEnabled() const { return m_cssGridLayoutEnabled; } \
    void setCSSGridLayoutEnabled(bool cssGridLayoutEnabled) { m_cssGridLayoutEnabled = cssGridLayoutEnabled; } \
    const String& defaultTextEncodingName() { return m_defaultTextEncodingName; } \
    void setDefaultTextEncodingName(const String& defaultTextEncodingName) { m_defaultTextEncodingName = defaultTextEncodingName; } \
    bool deferred2dCanvasEnabled() const { return m_deferred2dCanvasEnabled; } \
    void setDeferred2dCanvasEnabled(bool deferred2dCanvasEnabled) { m_deferred2dCanvasEnabled = deferred2dCanvasEnabled; } \
    bool developerExtrasEnabled() const { return m_developerExtrasEnabled; } \
    void setDeveloperExtrasEnabled(bool developerExtrasEnabled) { m_developerExtrasEnabled = developerExtrasEnabled; } \
    int deviceHeight() const { return m_deviceHeight; } \
    void setDeviceHeight(int deviceHeight) { m_deviceHeight = deviceHeight; } \
    bool deviceSupportsMouse() const { return m_deviceSupportsMouse; } \
    void setDeviceSupportsMouse(bool deviceSupportsMouse) { m_deviceSupportsMouse = deviceSupportsMouse; } \
    bool deviceSupportsTouch() const { return m_deviceSupportsTouch; } \
    void setDeviceSupportsTouch(bool deviceSupportsTouch) { m_deviceSupportsTouch = deviceSupportsTouch; } \
    int deviceWidth() const { return m_deviceWidth; } \
    void setDeviceWidth(int deviceWidth) { m_deviceWidth = deviceWidth; } \
    bool diagnosticLoggingEnabled() const { return m_diagnosticLoggingEnabled; } \
    void setDiagnosticLoggingEnabled(bool diagnosticLoggingEnabled) { m_diagnosticLoggingEnabled = diagnosticLoggingEnabled; } \
    bool downloadableBinaryFontsEnabled() const { return m_downloadableBinaryFontsEnabled; } \
    void setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled) { m_downloadableBinaryFontsEnabled = downloadableBinaryFontsEnabled; } \
    const EditableLinkBehavior& editableLinkBehavior() { return m_editableLinkBehavior; } \
    void setEditableLinkBehavior(const EditableLinkBehavior& editableLinkBehavior) { m_editableLinkBehavior = editableLinkBehavior; } \
    const EditingBehaviorType& editingBehaviorType() { return m_editingBehaviorType; } \
    void setEditingBehaviorType(const EditingBehaviorType& editingBehaviorType) { m_editingBehaviorType = editingBehaviorType; } \
    bool enforceCSSMIMETypeInNoQuirksMode() const { return m_enforceCSSMIMETypeInNoQuirksMode; } \
    void setEnforceCSSMIMETypeInNoQuirksMode(bool enforceCSSMIMETypeInNoQuirksMode) { m_enforceCSSMIMETypeInNoQuirksMode = enforceCSSMIMETypeInNoQuirksMode; } \
    bool experimentalNotificationsEnabled() const { return m_experimentalNotificationsEnabled; } \
    void setExperimentalNotificationsEnabled(bool experimentalNotificationsEnabled) { m_experimentalNotificationsEnabled = experimentalNotificationsEnabled; } \
    bool fixedElementsLayoutRelativeToFrame() const { return m_fixedElementsLayoutRelativeToFrame; } \
    void setFixedElementsLayoutRelativeToFrame(bool fixedElementsLayoutRelativeToFrame) { m_fixedElementsLayoutRelativeToFrame = fixedElementsLayoutRelativeToFrame; } \
    bool fixedPositionCreatesStackingContext() const { return m_fixedPositionCreatesStackingContext; } \
    void setFixedPositionCreatesStackingContext(bool fixedPositionCreatesStackingContext) { m_fixedPositionCreatesStackingContext = fixedPositionCreatesStackingContext; } \
    bool forceCompositingMode() const { return m_forceCompositingMode; } \
    void setForceCompositingMode(bool forceCompositingMode) { m_forceCompositingMode = forceCompositingMode; } \
    bool forceFTPDirectoryListings() const { return m_forceFTPDirectoryListings; } \
    void setForceFTPDirectoryListings(bool forceFTPDirectoryListings) { m_forceFTPDirectoryListings = forceFTPDirectoryListings; } \
    bool frameFlatteningEnabled() const { return m_frameFlatteningEnabled; } \
    void setFrameFlatteningEnabled(bool frameFlatteningEnabled) { m_frameFlatteningEnabled = frameFlatteningEnabled; } \
    const String& ftpDirectoryTemplatePath() { return m_ftpDirectoryTemplatePath; } \
    void setFTPDirectoryTemplatePath(const String& ftpDirectoryTemplatePath) { m_ftpDirectoryTemplatePath = ftpDirectoryTemplatePath; } \
    bool hyperlinkAuditingEnabled() const { return m_hyperlinkAuditingEnabled; } \
    void setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled) { m_hyperlinkAuditingEnabled = hyperlinkAuditingEnabled; } \
    double incrementalRenderingSuppressionTimeoutInSeconds() const { return m_incrementalRenderingSuppressionTimeoutInSeconds; } \
    void setIncrementalRenderingSuppressionTimeoutInSeconds(double incrementalRenderingSuppressionTimeoutInSeconds) { m_incrementalRenderingSuppressionTimeoutInSeconds = incrementalRenderingSuppressionTimeoutInSeconds; } \
    bool interactiveFormValidationEnabled() const { return m_interactiveFormValidationEnabled; } \
    void setInteractiveFormValidationEnabled(bool interactiveFormValidationEnabled) { m_interactiveFormValidationEnabled = interactiveFormValidationEnabled; } \
    bool javaScriptCanAccessClipboard() const { return m_javaScriptCanAccessClipboard; } \
    void setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard) { m_javaScriptCanAccessClipboard = javaScriptCanAccessClipboard; } \
    bool javaScriptCanOpenWindowsAutomatically() const { return m_javaScriptCanOpenWindowsAutomatically; } \
    void setJavaScriptCanOpenWindowsAutomatically(bool javaScriptCanOpenWindowsAutomatically) { m_javaScriptCanOpenWindowsAutomatically = javaScriptCanOpenWindowsAutomatically; } \
    bool javaScriptExperimentsEnabled() const { return m_javaScriptExperimentsEnabled; } \
    void setJavaScriptExperimentsEnabled(bool javaScriptExperimentsEnabled) { m_javaScriptExperimentsEnabled = javaScriptExperimentsEnabled; } \
    int layoutFallbackWidth() const { return m_layoutFallbackWidth; } \
    void setLayoutFallbackWidth(int layoutFallbackWidth) { m_layoutFallbackWidth = layoutFallbackWidth; } \
    bool loadDeferringEnabled() const { return m_loadDeferringEnabled; } \
    void setLoadDeferringEnabled(bool loadDeferringEnabled) { m_loadDeferringEnabled = loadDeferringEnabled; } \
    bool loadsSiteIconsIgnoringImageLoadingSetting() const { return m_loadsSiteIconsIgnoringImageLoadingSetting; } \
    void setLoadsSiteIconsIgnoringImageLoadingSetting(bool loadsSiteIconsIgnoringImageLoadingSetting) { m_loadsSiteIconsIgnoringImageLoadingSetting = loadsSiteIconsIgnoringImageLoadingSetting; } \
    bool localFileContentSniffingEnabled() const { return m_localFileContentSniffingEnabled; } \
    void setLocalFileContentSniffingEnabled(bool localFileContentSniffingEnabled) { m_localFileContentSniffingEnabled = localFileContentSniffingEnabled; } \
    const String& localStorageDatabasePath() { return m_localStorageDatabasePath; } \
    void setLocalStorageDatabasePath(const String& localStorageDatabasePath) { m_localStorageDatabasePath = localStorageDatabasePath; } \
    bool localStorageEnabled() const { return m_localStorageEnabled; } \
    void setLocalStorageEnabled(bool localStorageEnabled) { m_localStorageEnabled = localStorageEnabled; } \
    size_t maximumDecodedImageSize() const { return m_maximumDecodedImageSize; } \
    void setMaximumDecodedImageSize(size_t maximumDecodedImageSize) { m_maximumDecodedImageSize = maximumDecodedImageSize; } \
    unsigned maximumHTMLParserDOMTreeDepth() const { return m_maximumHTMLParserDOMTreeDepth; } \
    void setMaximumHTMLParserDOMTreeDepth(unsigned maximumHTMLParserDOMTreeDepth) { m_maximumHTMLParserDOMTreeDepth = maximumHTMLParserDOMTreeDepth; } \
    bool mediaPlaybackAllowsInline() const { return m_mediaPlaybackAllowsInline; } \
    void setMediaPlaybackAllowsInline(bool mediaPlaybackAllowsInline) { m_mediaPlaybackAllowsInline = mediaPlaybackAllowsInline; } \
    bool mediaPlaybackRequiresUserGesture() const { return m_mediaPlaybackRequiresUserGesture; } \
    void setMediaPlaybackRequiresUserGesture(bool mediaPlaybackRequiresUserGesture) { m_mediaPlaybackRequiresUserGesture = mediaPlaybackRequiresUserGesture; } \
    bool memoryInfoEnabled() const { return m_memoryInfoEnabled; } \
    void setMemoryInfoEnabled(bool memoryInfoEnabled) { m_memoryInfoEnabled = memoryInfoEnabled; } \
    int minimumAccelerated2dCanvasSize() const { return m_minimumAccelerated2dCanvasSize; } \
    void setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize) { m_minimumAccelerated2dCanvasSize = minimumAccelerated2dCanvasSize; } \
    bool needsDidFinishLoadOrderQuirk() const { return m_needsDidFinishLoadOrderQuirk; } \
    void setNeedsDidFinishLoadOrderQuirk(bool needsDidFinishLoadOrderQuirk) { m_needsDidFinishLoadOrderQuirk = needsDidFinishLoadOrderQuirk; } \
    bool needsIsLoadingInAPISenseQuirk() const { return m_needsIsLoadingInAPISenseQuirk; } \
    void setNeedsIsLoadingInAPISenseQuirk(bool needsIsLoadingInAPISenseQuirk) { m_needsIsLoadingInAPISenseQuirk = needsIsLoadingInAPISenseQuirk; } \
    bool needsKeyboardEventDisambiguationQuirks() const { return m_needsKeyboardEventDisambiguationQuirks; } \
    void setNeedsKeyboardEventDisambiguationQuirks(bool needsKeyboardEventDisambiguationQuirks) { m_needsKeyboardEventDisambiguationQuirks = needsKeyboardEventDisambiguationQuirks; } \
    bool needsLeopardMailQuirks() const { return m_needsLeopardMailQuirks; } \
    void setNeedsLeopardMailQuirks(bool needsLeopardMailQuirks) { m_needsLeopardMailQuirks = needsLeopardMailQuirks; } \
    bool needsSiteSpecificQuirks() const { return m_needsSiteSpecificQuirks; } \
    void setNeedsSiteSpecificQuirks(bool needsSiteSpecificQuirks) { m_needsSiteSpecificQuirks = needsSiteSpecificQuirks; } \
    bool notificationsEnabled() const { return m_notificationsEnabled; } \
    void setNotificationsEnabled(bool notificationsEnabled) { m_notificationsEnabled = notificationsEnabled; } \
    bool offlineWebApplicationCacheEnabled() const { return m_offlineWebApplicationCacheEnabled; } \
    void setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled) { m_offlineWebApplicationCacheEnabled = offlineWebApplicationCacheEnabled; } \
    bool openGLMultisamplingEnabled() const { return m_openGLMultisamplingEnabled; } \
    void setOpenGLMultisamplingEnabled(bool openGLMultisamplingEnabled) { m_openGLMultisamplingEnabled = openGLMultisamplingEnabled; } \
    bool pageCacheSupportsPlugins() const { return m_pageCacheSupportsPlugins; } \
    void setPageCacheSupportsPlugins(bool pageCacheSupportsPlugins) { m_pageCacheSupportsPlugins = pageCacheSupportsPlugins; } \
    bool paginateDuringLayoutEnabled() const { return m_paginateDuringLayoutEnabled; } \
    void setPaginateDuringLayoutEnabled(bool paginateDuringLayoutEnabled) { m_paginateDuringLayoutEnabled = paginateDuringLayoutEnabled; } \
    double passwordEchoDurationInSeconds() const { return m_passwordEchoDurationInSeconds; } \
    void setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds) { m_passwordEchoDurationInSeconds = passwordEchoDurationInSeconds; } \
    bool passwordEchoEnabled() const { return m_passwordEchoEnabled; } \
    void setPasswordEchoEnabled(bool passwordEchoEnabled) { m_passwordEchoEnabled = passwordEchoEnabled; } \
    bool plugInSnapshottingEnabled() const { return m_plugInSnapshottingEnabled; } \
    void setPlugInSnapshottingEnabled(bool plugInSnapshottingEnabled) { m_plugInSnapshottingEnabled = plugInSnapshottingEnabled; } \
    bool privilegedWebGLExtensionsEnabled() const { return m_privilegedWebGLExtensionsEnabled; } \
    void setPrivilegedWebGLExtensionsEnabled(bool privilegedWebGLExtensionsEnabled) { m_privilegedWebGLExtensionsEnabled = privilegedWebGLExtensionsEnabled; } \
    bool quantizedMemoryInfoEnabled() const { return m_quantizedMemoryInfoEnabled; } \
    void setQuantizedMemoryInfoEnabled(bool quantizedMemoryInfoEnabled) { m_quantizedMemoryInfoEnabled = quantizedMemoryInfoEnabled; } \
    bool regionBasedColumnsEnabled() const { return m_regionBasedColumnsEnabled; } \
    void setRegionBasedColumnsEnabled(bool regionBasedColumnsEnabled) { m_regionBasedColumnsEnabled = regionBasedColumnsEnabled; } \
    bool requestAnimationFrameEnabled() const { return m_requestAnimationFrameEnabled; } \
    void setRequestAnimationFrameEnabled(bool requestAnimationFrameEnabled) { m_requestAnimationFrameEnabled = requestAnimationFrameEnabled; } \
    bool scrollingCoordinatorEnabled() const { return m_scrollingCoordinatorEnabled; } \
    void setScrollingCoordinatorEnabled(bool scrollingCoordinatorEnabled) { m_scrollingCoordinatorEnabled = scrollingCoordinatorEnabled; } \
    unsigned sessionStorageQuota() const { return m_sessionStorageQuota; } \
    void setSessionStorageQuota(unsigned sessionStorageQuota) { m_sessionStorageQuota = sessionStorageQuota; } \
    bool shouldInjectUserScriptsInInitialEmptyDocument() const { return m_shouldInjectUserScriptsInInitialEmptyDocument; } \
    void setShouldInjectUserScriptsInInitialEmptyDocument(bool shouldInjectUserScriptsInInitialEmptyDocument) { m_shouldInjectUserScriptsInInitialEmptyDocument = shouldInjectUserScriptsInInitialEmptyDocument; } \
    bool shouldPrintBackgrounds() const { return m_shouldPrintBackgrounds; } \
    void setShouldPrintBackgrounds(bool shouldPrintBackgrounds) { m_shouldPrintBackgrounds = shouldPrintBackgrounds; } \
    bool shouldRespectImageOrientation() const { return m_shouldRespectImageOrientation; } \
    void setShouldRespectImageOrientation(bool shouldRespectImageOrientation) { m_shouldRespectImageOrientation = shouldRespectImageOrientation; } \
    bool showsToolTipOverTruncatedText() const { return m_showsToolTipOverTruncatedText; } \
    void setShowsToolTipOverTruncatedText(bool showsToolTipOverTruncatedText) { m_showsToolTipOverTruncatedText = showsToolTipOverTruncatedText; } \
    bool showsURLsInToolTips() const { return m_showsURLsInToolTips; } \
    void setShowsURLsInToolTips(bool showsURLsInToolTips) { m_showsURLsInToolTips = showsURLsInToolTips; } \
    bool shrinksStandaloneImagesToFit() const { return m_shrinksStandaloneImagesToFit; } \
    void setShrinksStandaloneImagesToFit(bool shrinksStandaloneImagesToFit) { m_shrinksStandaloneImagesToFit = shrinksStandaloneImagesToFit; } \
    bool spatialNavigationEnabled() const { return m_spatialNavigationEnabled; } \
    void setSpatialNavigationEnabled(bool spatialNavigationEnabled) { m_spatialNavigationEnabled = spatialNavigationEnabled; } \
    bool supportsMultipleWindows() const { return m_supportsMultipleWindows; } \
    void setSupportsMultipleWindows(bool supportsMultipleWindows) { m_supportsMultipleWindows = supportsMultipleWindows; } \
    bool suppressesIncrementalRendering() const { return m_suppressesIncrementalRendering; } \
    void setSuppressesIncrementalRendering(bool suppressesIncrementalRendering) { m_suppressesIncrementalRendering = suppressesIncrementalRendering; } \
    bool syncXHRInDocumentsEnabled() const { return m_syncXHRInDocumentsEnabled; } \
    void setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled) { m_syncXHRInDocumentsEnabled = syncXHRInDocumentsEnabled; } \
    const TextDirectionSubmenuInclusionBehavior& textDirectionSubmenuInclusionBehavior() { return m_textDirectionSubmenuInclusionBehavior; } \
    void setTextDirectionSubmenuInclusionBehavior(const TextDirectionSubmenuInclusionBehavior& textDirectionSubmenuInclusionBehavior) { m_textDirectionSubmenuInclusionBehavior = textDirectionSubmenuInclusionBehavior; } \
    bool touchAdjustmentEnabled() const { return m_touchAdjustmentEnabled; } \
    void setTouchAdjustmentEnabled(bool touchAdjustmentEnabled) { m_touchAdjustmentEnabled = touchAdjustmentEnabled; } \
    bool touchDragDropEnabled() const { return m_touchDragDropEnabled; } \
    void setTouchDragDropEnabled(bool touchDragDropEnabled) { m_touchDragDropEnabled = touchDragDropEnabled; } \
    bool treatsAnyTextCSSLinkAsStylesheet() const { return m_treatsAnyTextCSSLinkAsStylesheet; } \
    void setTreatsAnyTextCSSLinkAsStylesheet(bool treatsAnyTextCSSLinkAsStylesheet) { m_treatsAnyTextCSSLinkAsStylesheet = treatsAnyTextCSSLinkAsStylesheet; } \
    bool usePreHTML5ParserQuirks() const { return m_usePreHTML5ParserQuirks; } \
    void setUsePreHTML5ParserQuirks(bool usePreHTML5ParserQuirks) { m_usePreHTML5ParserQuirks = usePreHTML5ParserQuirks; } \
    bool usesEncodingDetector() const { return m_usesEncodingDetector; } \
    void setUsesEncodingDetector(bool usesEncodingDetector) { m_usesEncodingDetector = usesEncodingDetector; } \
    int validationMessageTimerMagnification() const { return m_validationMessageTimerMagnification; } \
    void setValidationMessageTimerMagnification(int validationMessageTimerMagnification) { m_validationMessageTimerMagnification = validationMessageTimerMagnification; } \
    bool visualWordMovementEnabled() const { return m_visualWordMovementEnabled; } \
    void setVisualWordMovementEnabled(bool visualWordMovementEnabled) { m_visualWordMovementEnabled = visualWordMovementEnabled; } \
    bool wantsBalancedSetDefersLoadingBehavior() const { return m_wantsBalancedSetDefersLoadingBehavior; } \
    void setWantsBalancedSetDefersLoadingBehavior(bool wantsBalancedSetDefersLoadingBehavior) { m_wantsBalancedSetDefersLoadingBehavior = wantsBalancedSetDefersLoadingBehavior; } \
    bool webAudioEnabled() const { return m_webAudioEnabled; } \
    void setWebAudioEnabled(bool webAudioEnabled) { m_webAudioEnabled = webAudioEnabled; } \
    bool webGLEnabled() const { return m_webGLEnabled; } \
    void setWebGLEnabled(bool webGLEnabled) { m_webGLEnabled = webGLEnabled; } \
    bool webGLErrorsToConsoleEnabled() const { return m_webGLErrorsToConsoleEnabled; } \
    void setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled) { m_webGLErrorsToConsoleEnabled = webGLErrorsToConsoleEnabled; } \
    bool webSecurityEnabled() const { return m_webSecurityEnabled; } \
    void setWebSecurityEnabled(bool webSecurityEnabled) { m_webSecurityEnabled = webSecurityEnabled; } \
    bool windowFocusRestricted() const { return m_windowFocusRestricted; } \
    void setWindowFocusRestricted(bool windowFocusRestricted) { m_windowFocusRestricted = windowFocusRestricted; } \
    bool xssAuditorEnabled() const { return m_xssAuditorEnabled; } \
    void setXSSAuditorEnabled(bool xssAuditorEnabled) { m_xssAuditorEnabled = xssAuditorEnabled; } \
    DASHBOARD_SUPPORT_SETTINGS_GETTER_AND_SETTERS \
    FULLSCREEN_API_SETTINGS_GETTER_AND_SETTERS \
    VIDEO_TRACK_SETTINGS_GETTER_AND_SETTERS \
    WEB_ARCHIVE_SETTINGS_GETTER_AND_SETTERS \
// End of SETTINGS_GETTERS_AND_SETTERS.

#define SETTINGS_MEMBER_VARIABLES \
    String m_defaultTextEncodingName; \
    int m_deviceHeight; \
    int m_deviceWidth; \
    EditableLinkBehavior m_editableLinkBehavior; \
    EditingBehaviorType m_editingBehaviorType; \
    String m_ftpDirectoryTemplatePath; \
    double m_incrementalRenderingSuppressionTimeoutInSeconds; \
    int m_layoutFallbackWidth; \
    String m_localStorageDatabasePath; \
    size_t m_maximumDecodedImageSize; \
    unsigned m_maximumHTMLParserDOMTreeDepth; \
    int m_minimumAccelerated2dCanvasSize; \
    double m_passwordEchoDurationInSeconds; \
    unsigned m_sessionStorageQuota; \
    TextDirectionSubmenuInclusionBehavior m_textDirectionSubmenuInclusionBehavior; \
    int m_validationMessageTimerMagnification; \
    DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
    FULLSCREEN_API_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
    VIDEO_TRACK_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
    WEB_ARCHIVE_SETTINGS_NON_BOOL_MEMBER_VARIABLES \
    bool m_accelerated2dCanvasEnabled : 1; \
    bool m_acceleratedCompositingFor3DTransformsEnabled : 1; \
    bool m_acceleratedCompositingForAnimationEnabled : 1; \
    bool m_acceleratedCompositingForCanvasEnabled : 1; \
    bool m_acceleratedCompositingForFixedPositionEnabled : 1; \
    bool m_acceleratedCompositingForOverflowScrollEnabled : 1; \
    bool m_acceleratedCompositingForPluginsEnabled : 1; \
    bool m_acceleratedCompositingForScrollableFramesEnabled : 1; \
    bool m_acceleratedCompositingForVideoEnabled : 1; \
    bool m_acceleratedDrawingEnabled : 1; \
    bool m_acceleratedFiltersEnabled : 1; \
    bool m_allowCustomScrollbarInMainFrame : 1; \
    bool m_allowDisplayOfInsecureContent : 1; \
    bool m_allowFileAccessFromFileURLs : 1; \
    bool m_allowRunningOfInsecureContent : 1; \
    bool m_allowScriptsToCloseWindows : 1; \
    bool m_allowUniversalAccessFromFileURLs : 1; \
    bool m_applyPageScaleFactorInCompositor : 1; \
    bool m_asynchronousSpellCheckingEnabled : 1; \
    bool m_backspaceKeyNavigationEnabled : 1; \
    bool m_canvasUsesAcceleratedDrawing : 1; \
    bool m_caretBrowsingEnabled : 1; \
    bool m_cookieEnabled : 1; \
    bool m_crossOriginCheckInGetMatchedCSSRulesDisabled : 1; \
    bool m_cssGridLayoutEnabled : 1; \
    bool m_deferred2dCanvasEnabled : 1; \
    bool m_developerExtrasEnabled : 1; \
    bool m_deviceSupportsMouse : 1; \
    bool m_deviceSupportsTouch : 1; \
    bool m_diagnosticLoggingEnabled : 1; \
    bool m_downloadableBinaryFontsEnabled : 1; \
    bool m_enforceCSSMIMETypeInNoQuirksMode : 1; \
    bool m_experimentalNotificationsEnabled : 1; \
    bool m_fixedElementsLayoutRelativeToFrame : 1; \
    bool m_fixedPositionCreatesStackingContext : 1; \
    bool m_forceCompositingMode : 1; \
    bool m_forceFTPDirectoryListings : 1; \
    bool m_frameFlatteningEnabled : 1; \
    bool m_hyperlinkAuditingEnabled : 1; \
    bool m_interactiveFormValidationEnabled : 1; \
    bool m_javaScriptCanAccessClipboard : 1; \
    bool m_javaScriptCanOpenWindowsAutomatically : 1; \
    bool m_javaScriptExperimentsEnabled : 1; \
    bool m_loadDeferringEnabled : 1; \
    bool m_loadsSiteIconsIgnoringImageLoadingSetting : 1; \
    bool m_localFileContentSniffingEnabled : 1; \
    bool m_localStorageEnabled : 1; \
    bool m_mediaPlaybackAllowsInline : 1; \
    bool m_mediaPlaybackRequiresUserGesture : 1; \
    bool m_memoryInfoEnabled : 1; \
    bool m_needsDidFinishLoadOrderQuirk : 1; \
    bool m_needsIsLoadingInAPISenseQuirk : 1; \
    bool m_needsKeyboardEventDisambiguationQuirks : 1; \
    bool m_needsLeopardMailQuirks : 1; \
    bool m_needsSiteSpecificQuirks : 1; \
    bool m_notificationsEnabled : 1; \
    bool m_offlineWebApplicationCacheEnabled : 1; \
    bool m_openGLMultisamplingEnabled : 1; \
    bool m_pageCacheSupportsPlugins : 1; \
    bool m_paginateDuringLayoutEnabled : 1; \
    bool m_passwordEchoEnabled : 1; \
    bool m_plugInSnapshottingEnabled : 1; \
    bool m_privilegedWebGLExtensionsEnabled : 1; \
    bool m_quantizedMemoryInfoEnabled : 1; \
    bool m_regionBasedColumnsEnabled : 1; \
    bool m_requestAnimationFrameEnabled : 1; \
    bool m_scrollingCoordinatorEnabled : 1; \
    bool m_shouldInjectUserScriptsInInitialEmptyDocument : 1; \
    bool m_shouldPrintBackgrounds : 1; \
    bool m_shouldRespectImageOrientation : 1; \
    bool m_showsToolTipOverTruncatedText : 1; \
    bool m_showsURLsInToolTips : 1; \
    bool m_shrinksStandaloneImagesToFit : 1; \
    bool m_spatialNavigationEnabled : 1; \
    bool m_supportsMultipleWindows : 1; \
    bool m_suppressesIncrementalRendering : 1; \
    bool m_syncXHRInDocumentsEnabled : 1; \
    bool m_touchAdjustmentEnabled : 1; \
    bool m_touchDragDropEnabled : 1; \
    bool m_treatsAnyTextCSSLinkAsStylesheet : 1; \
    bool m_usePreHTML5ParserQuirks : 1; \
    bool m_usesEncodingDetector : 1; \
    bool m_visualWordMovementEnabled : 1; \
    bool m_wantsBalancedSetDefersLoadingBehavior : 1; \
    bool m_webAudioEnabled : 1; \
    bool m_webGLEnabled : 1; \
    bool m_webGLErrorsToConsoleEnabled : 1; \
    bool m_webSecurityEnabled : 1; \
    bool m_windowFocusRestricted : 1; \
    bool m_xssAuditorEnabled : 1; \
    DASHBOARD_SUPPORT_SETTINGS_BOOL_MEMBER_VARIABLES \
    FULLSCREEN_API_SETTINGS_BOOL_MEMBER_VARIABLES \
    VIDEO_TRACK_SETTINGS_BOOL_MEMBER_VARIABLES \
    WEB_ARCHIVE_SETTINGS_BOOL_MEMBER_VARIABLES \
// End of SETTINGS_MEMBER_VARIABLES.

#define SETTINGS_INITIALIZER_LIST \
    , m_deviceHeight(0) \
    , m_deviceWidth(0) \
    , m_editableLinkBehavior(EditableLinkDefaultBehavior) \
    , m_editingBehaviorType(editingBehaviorTypeForPlatform()) \
    , m_incrementalRenderingSuppressionTimeoutInSeconds(defaultIncrementalRenderingSuppressionTimeoutInSeconds) \
    , m_layoutFallbackWidth(980) \
    , m_maximumDecodedImageSize(numeric_limits<size_t>::max()) \
    , m_maximumHTMLParserDOMTreeDepth(defaultMaximumHTMLParserDOMTreeDepth) \
    , m_minimumAccelerated2dCanvasSize(257*256) \
    , m_passwordEchoDurationInSeconds(1) \
    , m_sessionStorageQuota(StorageMap::noQuota) \
    , m_textDirectionSubmenuInclusionBehavior(TextDirectionSubmenuAutomaticallyIncluded) \
    , m_validationMessageTimerMagnification(50) \
    DASHBOARD_SUPPORT_SETTINGS_NON_BOOL_INITIALIZERS \
    FULLSCREEN_API_SETTINGS_NON_BOOL_INITIALIZERS \
    VIDEO_TRACK_SETTINGS_NON_BOOL_INITIALIZERS \
    WEB_ARCHIVE_SETTINGS_NON_BOOL_INITIALIZERS \
    , m_accelerated2dCanvasEnabled(false) \
    , m_acceleratedCompositingFor3DTransformsEnabled(true) \
    , m_acceleratedCompositingForAnimationEnabled(true) \
    , m_acceleratedCompositingForCanvasEnabled(true) \
    , m_acceleratedCompositingForFixedPositionEnabled(false) \
    , m_acceleratedCompositingForOverflowScrollEnabled(false) \
    , m_acceleratedCompositingForPluginsEnabled(true) \
    , m_acceleratedCompositingForScrollableFramesEnabled(false) \
    , m_acceleratedCompositingForVideoEnabled(true) \
    , m_acceleratedDrawingEnabled(false) \
    , m_acceleratedFiltersEnabled(false) \
    , m_allowCustomScrollbarInMainFrame(true) \
    , m_allowDisplayOfInsecureContent(true) \
    , m_allowFileAccessFromFileURLs(true) \
    , m_allowRunningOfInsecureContent(true) \
    , m_allowScriptsToCloseWindows(false) \
    , m_allowUniversalAccessFromFileURLs(true) \
    , m_applyPageScaleFactorInCompositor(false) \
    , m_asynchronousSpellCheckingEnabled(false) \
    , m_backspaceKeyNavigationEnabled(true) \
    , m_canvasUsesAcceleratedDrawing(false) \
    , m_caretBrowsingEnabled(false) \
    , m_cookieEnabled(true) \
    , m_crossOriginCheckInGetMatchedCSSRulesDisabled(false) \
    , m_cssGridLayoutEnabled(false) \
    , m_deferred2dCanvasEnabled(false) \
    , m_developerExtrasEnabled(false) \
    , m_deviceSupportsMouse(true) \
    , m_deviceSupportsTouch(false) \
    , m_diagnosticLoggingEnabled(false) \
    , m_downloadableBinaryFontsEnabled(true) \
    , m_enforceCSSMIMETypeInNoQuirksMode(true) \
    , m_experimentalNotificationsEnabled(false) \
    , m_fixedElementsLayoutRelativeToFrame(false) \
    , m_fixedPositionCreatesStackingContext(false) \
    , m_forceCompositingMode(false) \
    , m_forceFTPDirectoryListings(false) \
    , m_frameFlatteningEnabled(false) \
    , m_hyperlinkAuditingEnabled(false) \
    , m_interactiveFormValidationEnabled(false) \
    , m_javaScriptCanAccessClipboard(false) \
    , m_javaScriptCanOpenWindowsAutomatically(false) \
    , m_javaScriptExperimentsEnabled(false) \
    , m_loadDeferringEnabled(true) \
    , m_loadsSiteIconsIgnoringImageLoadingSetting(false) \
    , m_localFileContentSniffingEnabled(false) \
    , m_localStorageEnabled(false) \
    , m_mediaPlaybackAllowsInline(true) \
    , m_mediaPlaybackRequiresUserGesture(false) \
    , m_memoryInfoEnabled(false) \
    , m_needsDidFinishLoadOrderQuirk(false) \
    , m_needsIsLoadingInAPISenseQuirk(false) \
    , m_needsKeyboardEventDisambiguationQuirks(false) \
    , m_needsLeopardMailQuirks(false) \
    , m_needsSiteSpecificQuirks(false) \
    , m_notificationsEnabled(true) \
    , m_offlineWebApplicationCacheEnabled(false) \
    , m_openGLMultisamplingEnabled(true) \
    , m_pageCacheSupportsPlugins(false) \
    , m_paginateDuringLayoutEnabled(false) \
    , m_passwordEchoEnabled(false) \
    , m_plugInSnapshottingEnabled(false) \
    , m_privilegedWebGLExtensionsEnabled(false) \
    , m_quantizedMemoryInfoEnabled(false) \
    , m_regionBasedColumnsEnabled(false) \
    , m_requestAnimationFrameEnabled(true) \
    , m_scrollingCoordinatorEnabled(false) \
    , m_shouldInjectUserScriptsInInitialEmptyDocument(false) \
    , m_shouldPrintBackgrounds(false) \
    , m_shouldRespectImageOrientation(false) \
    , m_showsToolTipOverTruncatedText(false) \
    , m_showsURLsInToolTips(false) \
    , m_shrinksStandaloneImagesToFit(true) \
    , m_spatialNavigationEnabled(false) \
    , m_supportsMultipleWindows(true) \
    , m_suppressesIncrementalRendering(false) \
    , m_syncXHRInDocumentsEnabled(true) \
    , m_touchAdjustmentEnabled(true) \
    , m_touchDragDropEnabled(false) \
    , m_treatsAnyTextCSSLinkAsStylesheet(false) \
    , m_usePreHTML5ParserQuirks(false) \
    , m_usesEncodingDetector(false) \
    , m_visualWordMovementEnabled(false) \
    , m_wantsBalancedSetDefersLoadingBehavior(false) \
    , m_webAudioEnabled(false) \
    , m_webGLEnabled(false) \
    , m_webGLErrorsToConsoleEnabled(false) \
    , m_webSecurityEnabled(true) \
    , m_windowFocusRestricted(true) \
    , m_xssAuditorEnabled(false) \
    DASHBOARD_SUPPORT_SETTINGS_BOOL_INITIALIZERS \
    FULLSCREEN_API_SETTINGS_BOOL_INITIALIZERS \
    VIDEO_TRACK_SETTINGS_BOOL_INITIALIZERS \
    WEB_ARCHIVE_SETTINGS_BOOL_INITIALIZERS \
// End of SETTINGS_INITIALIZER_LIST.

#endif // SettingsMacros_h
