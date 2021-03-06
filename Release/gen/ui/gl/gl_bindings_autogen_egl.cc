// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

#include <string>
#include "gpu/command_buffer/common/gles2_cmd_utils.h"
#include "ui/gl/gl_bindings.h"
#include "ui/gl/gl_context.h"
#include "ui/gl/gl_implementation.h"
#include "ui/gl/gl_egl_api_implementation.h"

using gpu::gles2::GLES2Util;

namespace gfx {

static bool g_debugBindingsInitialized;
DriverEGL g_driver_egl;


void DriverEGL::InitializeBindings() {
  fn.eglGetErrorFn = reinterpret_cast<eglGetErrorProc>(GetGLCoreProcAddress("eglGetError"));
  fn.eglGetDisplayFn = reinterpret_cast<eglGetDisplayProc>(GetGLCoreProcAddress("eglGetDisplay"));
  fn.eglInitializeFn = reinterpret_cast<eglInitializeProc>(GetGLCoreProcAddress("eglInitialize"));
  fn.eglTerminateFn = reinterpret_cast<eglTerminateProc>(GetGLCoreProcAddress("eglTerminate"));
  fn.eglQueryStringFn = reinterpret_cast<eglQueryStringProc>(GetGLCoreProcAddress("eglQueryString"));
  fn.eglGetConfigsFn = reinterpret_cast<eglGetConfigsProc>(GetGLCoreProcAddress("eglGetConfigs"));
  fn.eglChooseConfigFn = reinterpret_cast<eglChooseConfigProc>(GetGLCoreProcAddress("eglChooseConfig"));
  fn.eglGetConfigAttribFn = reinterpret_cast<eglGetConfigAttribProc>(GetGLCoreProcAddress("eglGetConfigAttrib"));
  fn.eglCreateImageKHRFn = reinterpret_cast<eglCreateImageKHRProc>(GetGLCoreProcAddress("eglCreateImageKHR"));
  fn.eglDestroyImageKHRFn = reinterpret_cast<eglDestroyImageKHRProc>(GetGLCoreProcAddress("eglDestroyImageKHR"));
  fn.eglCreateWindowSurfaceFn = reinterpret_cast<eglCreateWindowSurfaceProc>(GetGLCoreProcAddress("eglCreateWindowSurface"));
  fn.eglCreatePbufferSurfaceFn = reinterpret_cast<eglCreatePbufferSurfaceProc>(GetGLCoreProcAddress("eglCreatePbufferSurface"));
  fn.eglCreatePixmapSurfaceFn = reinterpret_cast<eglCreatePixmapSurfaceProc>(GetGLCoreProcAddress("eglCreatePixmapSurface"));
  fn.eglDestroySurfaceFn = reinterpret_cast<eglDestroySurfaceProc>(GetGLCoreProcAddress("eglDestroySurface"));
  fn.eglQuerySurfaceFn = reinterpret_cast<eglQuerySurfaceProc>(GetGLCoreProcAddress("eglQuerySurface"));
  fn.eglBindAPIFn = reinterpret_cast<eglBindAPIProc>(GetGLCoreProcAddress("eglBindAPI"));
  fn.eglQueryAPIFn = reinterpret_cast<eglQueryAPIProc>(GetGLCoreProcAddress("eglQueryAPI"));
  fn.eglWaitClientFn = reinterpret_cast<eglWaitClientProc>(GetGLCoreProcAddress("eglWaitClient"));
  fn.eglReleaseThreadFn = reinterpret_cast<eglReleaseThreadProc>(GetGLCoreProcAddress("eglReleaseThread"));
  fn.eglCreatePbufferFromClientBufferFn = reinterpret_cast<eglCreatePbufferFromClientBufferProc>(GetGLCoreProcAddress("eglCreatePbufferFromClientBuffer"));
  fn.eglSurfaceAttribFn = reinterpret_cast<eglSurfaceAttribProc>(GetGLCoreProcAddress("eglSurfaceAttrib"));
  fn.eglBindTexImageFn = reinterpret_cast<eglBindTexImageProc>(GetGLCoreProcAddress("eglBindTexImage"));
  fn.eglReleaseTexImageFn = reinterpret_cast<eglReleaseTexImageProc>(GetGLCoreProcAddress("eglReleaseTexImage"));
  fn.eglSwapIntervalFn = reinterpret_cast<eglSwapIntervalProc>(GetGLCoreProcAddress("eglSwapInterval"));
  fn.eglCreateContextFn = reinterpret_cast<eglCreateContextProc>(GetGLCoreProcAddress("eglCreateContext"));
  fn.eglDestroyContextFn = reinterpret_cast<eglDestroyContextProc>(GetGLCoreProcAddress("eglDestroyContext"));
  fn.eglMakeCurrentFn = reinterpret_cast<eglMakeCurrentProc>(GetGLCoreProcAddress("eglMakeCurrent"));
  fn.eglGetCurrentContextFn = reinterpret_cast<eglGetCurrentContextProc>(GetGLCoreProcAddress("eglGetCurrentContext"));
  fn.eglGetCurrentSurfaceFn = reinterpret_cast<eglGetCurrentSurfaceProc>(GetGLCoreProcAddress("eglGetCurrentSurface"));
  fn.eglGetCurrentDisplayFn = reinterpret_cast<eglGetCurrentDisplayProc>(GetGLCoreProcAddress("eglGetCurrentDisplay"));
  fn.eglQueryContextFn = reinterpret_cast<eglQueryContextProc>(GetGLCoreProcAddress("eglQueryContext"));
  fn.eglWaitGLFn = reinterpret_cast<eglWaitGLProc>(GetGLCoreProcAddress("eglWaitGL"));
  fn.eglWaitNativeFn = reinterpret_cast<eglWaitNativeProc>(GetGLCoreProcAddress("eglWaitNative"));
  fn.eglSwapBuffersFn = reinterpret_cast<eglSwapBuffersProc>(GetGLCoreProcAddress("eglSwapBuffers"));
  fn.eglCopyBuffersFn = reinterpret_cast<eglCopyBuffersProc>(GetGLCoreProcAddress("eglCopyBuffers"));
  fn.eglGetProcAddressFn = reinterpret_cast<eglGetProcAddressProc>(GetGLCoreProcAddress("eglGetProcAddress"));
  fn.eglPostSubBufferNVFn = reinterpret_cast<eglPostSubBufferNVProc>(GetGLCoreProcAddress("eglPostSubBufferNV"));
  fn.eglQuerySurfacePointerANGLEFn = reinterpret_cast<eglQuerySurfacePointerANGLEProc>(GetGLCoreProcAddress("eglQuerySurfacePointerANGLE"));
  fn.eglCreateSyncKHRFn = reinterpret_cast<eglCreateSyncKHRProc>(GetGLCoreProcAddress("eglCreateSyncKHR"));
  fn.eglClientWaitSyncKHRFn = reinterpret_cast<eglClientWaitSyncKHRProc>(GetGLCoreProcAddress("eglClientWaitSyncKHR"));
  fn.eglDestroySyncKHRFn = reinterpret_cast<eglDestroySyncKHRProc>(GetGLCoreProcAddress("eglDestroySyncKHR"));
}

void DriverEGL::InitializeExtensionBindings(
    GLContext* context) {
  DCHECK(context && context->IsCurrent(NULL));
  ext.b_EGL_ANGLE_query_surface_pointer = context->HasExtension("EGL_ANGLE_query_surface_pointer");
  if (ext.b_EGL_ANGLE_query_surface_pointer) {
    fn.eglQuerySurfacePointerANGLEFn = reinterpret_cast<eglQuerySurfacePointerANGLEProc>(GetGLProcAddress("eglQuerySurfacePointerANGLE"));
  }
  ext.b_EGL_KHR_reusable_sync = context->HasExtension("EGL_KHR_reusable_sync");
  if (ext.b_EGL_KHR_reusable_sync) {
    fn.eglCreateSyncKHRFn = reinterpret_cast<eglCreateSyncKHRProc>(GetGLProcAddress("eglCreateSyncKHR"));
    fn.eglClientWaitSyncKHRFn = reinterpret_cast<eglClientWaitSyncKHRProc>(GetGLProcAddress("eglClientWaitSyncKHR"));
    fn.eglDestroySyncKHRFn = reinterpret_cast<eglDestroySyncKHRProc>(GetGLProcAddress("eglDestroySyncKHR"));
  }
  ext.b_EGL_NV_post_sub_buffer = context->HasExtension("EGL_NV_post_sub_buffer");
  if (ext.b_EGL_NV_post_sub_buffer) {
    fn.eglPostSubBufferNVFn = reinterpret_cast<eglPostSubBufferNVProc>(GetGLProcAddress("eglPostSubBufferNV"));
  }
  ext.b_EGL_ANGLE_surface_d3d_texture_2d_share_handle = context->HasExtension("EGL_ANGLE_surface_d3d_texture_2d_share_handle");
  if (ext.b_EGL_ANGLE_surface_d3d_texture_2d_share_handle) {
  }
  ext.b_EGL_KHR_image = context->HasExtension("EGL_KHR_image");
  if (ext.b_EGL_KHR_image) {
    fn.eglCreateImageKHRFn = reinterpret_cast<eglCreateImageKHRProc>(GetGLProcAddress("eglCreateImageKHR"));
    fn.eglDestroyImageKHRFn = reinterpret_cast<eglDestroyImageKHRProc>(GetGLProcAddress("eglDestroyImageKHR"));
  }
  ext.b_EGL_KHR_image_base = context->HasExtension("EGL_KHR_image_base");
  if (ext.b_EGL_KHR_image_base) {
    fn.eglCreateImageKHRFn = reinterpret_cast<eglCreateImageKHRProc>(GetGLProcAddress("eglCreateImageKHR"));
    fn.eglDestroyImageKHRFn = reinterpret_cast<eglDestroyImageKHRProc>(GetGLProcAddress("eglDestroyImageKHR"));
  }
  ext.b_EGL_KHR_fence_sync = context->HasExtension("EGL_KHR_fence_sync");
  if (ext.b_EGL_KHR_fence_sync) {
    fn.eglCreateSyncKHRFn = reinterpret_cast<eglCreateSyncKHRProc>(GetGLProcAddress("eglCreateSyncKHR"));
    fn.eglClientWaitSyncKHRFn = reinterpret_cast<eglClientWaitSyncKHRProc>(GetGLProcAddress("eglClientWaitSyncKHR"));
    fn.eglDestroySyncKHRFn = reinterpret_cast<eglDestroySyncKHRProc>(GetGLProcAddress("eglDestroySyncKHR"));
  }
  ext.b_EGL_ANGLE_d3d_share_handle_client_buffer = context->HasExtension("EGL_ANGLE_d3d_share_handle_client_buffer");
  if (ext.b_EGL_ANGLE_d3d_share_handle_client_buffer) {
  }
  if (g_debugBindingsInitialized)
    UpdateDebugExtensionBindings();
}

extern "C" {

static EGLint GL_BINDING_CALL Debug_eglGetError(void) {
  GL_SERVICE_LOG("eglGetError" << "("  << ")");
  EGLint result = g_driver_egl.debug_fn.eglGetErrorFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLDisplay GL_BINDING_CALL Debug_eglGetDisplay(EGLNativeDisplayType display_id) {
  GL_SERVICE_LOG("eglGetDisplay" << "("  << display_id << ")");
  EGLDisplay result = g_driver_egl.debug_fn.eglGetDisplayFn(display_id);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglInitialize(EGLDisplay dpy, EGLint* major, EGLint* minor) {
  GL_SERVICE_LOG("eglInitialize" << "("  << dpy << ", " << static_cast<const void*>(major) << ", " << static_cast<const void*>(minor) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglInitializeFn(dpy, major, minor);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglTerminate(EGLDisplay dpy) {
  GL_SERVICE_LOG("eglTerminate" << "("  << dpy << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglTerminateFn(dpy);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static const char* GL_BINDING_CALL Debug_eglQueryString(EGLDisplay dpy, EGLint name) {
  GL_SERVICE_LOG("eglQueryString" << "("  << dpy << ", " << name << ")");
  const char* result = g_driver_egl.debug_fn.eglQueryStringFn(dpy, name);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglGetConfigs(EGLDisplay dpy, EGLConfig* configs, EGLint config_size, EGLint* num_config) {
  GL_SERVICE_LOG("eglGetConfigs" << "("  << dpy << ", " << static_cast<const void*>(configs) << ", " << config_size << ", " << static_cast<const void*>(num_config) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglGetConfigsFn(dpy, configs, config_size, num_config);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglChooseConfig(EGLDisplay dpy, const EGLint* attrib_list, EGLConfig* configs, EGLint config_size, EGLint* num_config) {
  GL_SERVICE_LOG("eglChooseConfig" << "("  << dpy << ", " << static_cast<const void*>(attrib_list) << ", " << static_cast<const void*>(configs) << ", " << config_size << ", " << static_cast<const void*>(num_config) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglChooseConfigFn(dpy, attrib_list, configs, config_size, num_config);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint* value) {
  GL_SERVICE_LOG("eglGetConfigAttrib" << "("  << dpy << ", " << config << ", " << attribute << ", " << static_cast<const void*>(value) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglGetConfigAttribFn(dpy, config, attribute, value);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLImageKHR GL_BINDING_CALL Debug_eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreateImageKHR" << "("  << dpy << ", " << ctx << ", " << target << ", " << buffer << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLImageKHR result = g_driver_egl.debug_fn.eglCreateImageKHRFn(dpy, ctx, target, buffer, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image) {
  GL_SERVICE_LOG("eglDestroyImageKHR" << "("  << dpy << ", " << image << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglDestroyImageKHRFn(dpy, image);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSurface GL_BINDING_CALL Debug_eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreateWindowSurface" << "("  << dpy << ", " << config << ", " << win << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLSurface result = g_driver_egl.debug_fn.eglCreateWindowSurfaceFn(dpy, config, win, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSurface GL_BINDING_CALL Debug_eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreatePbufferSurface" << "("  << dpy << ", " << config << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLSurface result = g_driver_egl.debug_fn.eglCreatePbufferSurfaceFn(dpy, config, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSurface GL_BINDING_CALL Debug_eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreatePixmapSurface" << "("  << dpy << ", " << config << ", " << pixmap << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLSurface result = g_driver_egl.debug_fn.eglCreatePixmapSurfaceFn(dpy, config, pixmap, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglDestroySurface(EGLDisplay dpy, EGLSurface surface) {
  GL_SERVICE_LOG("eglDestroySurface" << "("  << dpy << ", " << surface << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglDestroySurfaceFn(dpy, surface);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint* value) {
  GL_SERVICE_LOG("eglQuerySurface" << "("  << dpy << ", " << surface << ", " << attribute << ", " << static_cast<const void*>(value) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglQuerySurfaceFn(dpy, surface, attribute, value);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglBindAPI(EGLenum api) {
  GL_SERVICE_LOG("eglBindAPI" << "("  << api << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglBindAPIFn(api);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLenum GL_BINDING_CALL Debug_eglQueryAPI(void) {
  GL_SERVICE_LOG("eglQueryAPI" << "("  << ")");
  EGLenum result = g_driver_egl.debug_fn.eglQueryAPIFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglWaitClient(void) {
  GL_SERVICE_LOG("eglWaitClient" << "("  << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglWaitClientFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglReleaseThread(void) {
  GL_SERVICE_LOG("eglReleaseThread" << "("  << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglReleaseThreadFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSurface GL_BINDING_CALL Debug_eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, void* buffer, EGLConfig config, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreatePbufferFromClientBuffer" << "("  << dpy << ", " << buftype << ", " << static_cast<const void*>(buffer) << ", " << config << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLSurface result = g_driver_egl.debug_fn.eglCreatePbufferFromClientBufferFn(dpy, buftype, buffer, config, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) {
  GL_SERVICE_LOG("eglSurfaceAttrib" << "("  << dpy << ", " << surface << ", " << attribute << ", " << value << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglSurfaceAttribFn(dpy, surface, attribute, value);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
  GL_SERVICE_LOG("eglBindTexImage" << "("  << dpy << ", " << surface << ", " << buffer << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglBindTexImageFn(dpy, surface, buffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
  GL_SERVICE_LOG("eglReleaseTexImage" << "("  << dpy << ", " << surface << ", " << buffer << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglReleaseTexImageFn(dpy, surface, buffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglSwapInterval(EGLDisplay dpy, EGLint interval) {
  GL_SERVICE_LOG("eglSwapInterval" << "("  << dpy << ", " << interval << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglSwapIntervalFn(dpy, interval);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLContext GL_BINDING_CALL Debug_eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreateContext" << "("  << dpy << ", " << config << ", " << share_context << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLContext result = g_driver_egl.debug_fn.eglCreateContextFn(dpy, config, share_context, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglDestroyContext(EGLDisplay dpy, EGLContext ctx) {
  GL_SERVICE_LOG("eglDestroyContext" << "("  << dpy << ", " << ctx << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglDestroyContextFn(dpy, ctx);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) {
  GL_SERVICE_LOG("eglMakeCurrent" << "("  << dpy << ", " << draw << ", " << read << ", " << ctx << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglMakeCurrentFn(dpy, draw, read, ctx);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLContext GL_BINDING_CALL Debug_eglGetCurrentContext(void) {
  GL_SERVICE_LOG("eglGetCurrentContext" << "("  << ")");
  EGLContext result = g_driver_egl.debug_fn.eglGetCurrentContextFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSurface GL_BINDING_CALL Debug_eglGetCurrentSurface(EGLint readdraw) {
  GL_SERVICE_LOG("eglGetCurrentSurface" << "("  << readdraw << ")");
  EGLSurface result = g_driver_egl.debug_fn.eglGetCurrentSurfaceFn(readdraw);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLDisplay GL_BINDING_CALL Debug_eglGetCurrentDisplay(void) {
  GL_SERVICE_LOG("eglGetCurrentDisplay" << "("  << ")");
  EGLDisplay result = g_driver_egl.debug_fn.eglGetCurrentDisplayFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint* value) {
  GL_SERVICE_LOG("eglQueryContext" << "("  << dpy << ", " << ctx << ", " << attribute << ", " << static_cast<const void*>(value) << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglQueryContextFn(dpy, ctx, attribute, value);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglWaitGL(void) {
  GL_SERVICE_LOG("eglWaitGL" << "("  << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglWaitGLFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglWaitNative(EGLint engine) {
  GL_SERVICE_LOG("eglWaitNative" << "("  << engine << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglWaitNativeFn(engine);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
  GL_SERVICE_LOG("eglSwapBuffers" << "("  << dpy << ", " << surface << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglSwapBuffersFn(dpy, surface);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) {
  GL_SERVICE_LOG("eglCopyBuffers" << "("  << dpy << ", " << surface << ", " << target << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglCopyBuffersFn(dpy, surface, target);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static __eglMustCastToProperFunctionPointerType GL_BINDING_CALL Debug_eglGetProcAddress(const char* procname) {
  GL_SERVICE_LOG("eglGetProcAddress" << "("  << procname << ")");
  __eglMustCastToProperFunctionPointerType result = g_driver_egl.debug_fn.eglGetProcAddressFn(procname);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height) {
  GL_SERVICE_LOG("eglPostSubBufferNV" << "("  << dpy << ", " << surface << ", " << x << ", " << y << ", " << width << ", " << height << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglPostSubBufferNVFn(dpy, surface, x, y, width, height);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void** value) {
  GL_SERVICE_LOG("eglQuerySurfacePointerANGLE" << "("  << dpy << ", " << surface << ", " << attribute << ", " << value << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglQuerySurfacePointerANGLEFn(dpy, surface, attribute, value);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLSyncKHR GL_BINDING_CALL Debug_eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint* attrib_list) {
  GL_SERVICE_LOG("eglCreateSyncKHR" << "("  << dpy << ", " << type << ", " << static_cast<const void*>(attrib_list) << ")");
  EGLSyncKHR result = g_driver_egl.debug_fn.eglCreateSyncKHRFn(dpy, type, attrib_list);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLint GL_BINDING_CALL Debug_eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout) {
  GL_SERVICE_LOG("eglClientWaitSyncKHR" << "("  << dpy << ", " << sync << ", " << flags << ", " << timeout << ")");
  EGLint result = g_driver_egl.debug_fn.eglClientWaitSyncKHRFn(dpy, sync, flags, timeout);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static EGLBoolean GL_BINDING_CALL Debug_eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync) {
  GL_SERVICE_LOG("eglDestroySyncKHR" << "("  << dpy << ", " << sync << ")");
  EGLBoolean result = g_driver_egl.debug_fn.eglDestroySyncKHRFn(dpy, sync);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}
}  // extern "C"

void DriverEGL::InitializeDebugBindings() {
  if (!debug_fn.eglGetErrorFn) {
    debug_fn.eglGetErrorFn = fn.eglGetErrorFn;
    fn.eglGetErrorFn = Debug_eglGetError;
  }
  if (!debug_fn.eglGetDisplayFn) {
    debug_fn.eglGetDisplayFn = fn.eglGetDisplayFn;
    fn.eglGetDisplayFn = Debug_eglGetDisplay;
  }
  if (!debug_fn.eglInitializeFn) {
    debug_fn.eglInitializeFn = fn.eglInitializeFn;
    fn.eglInitializeFn = Debug_eglInitialize;
  }
  if (!debug_fn.eglTerminateFn) {
    debug_fn.eglTerminateFn = fn.eglTerminateFn;
    fn.eglTerminateFn = Debug_eglTerminate;
  }
  if (!debug_fn.eglQueryStringFn) {
    debug_fn.eglQueryStringFn = fn.eglQueryStringFn;
    fn.eglQueryStringFn = Debug_eglQueryString;
  }
  if (!debug_fn.eglGetConfigsFn) {
    debug_fn.eglGetConfigsFn = fn.eglGetConfigsFn;
    fn.eglGetConfigsFn = Debug_eglGetConfigs;
  }
  if (!debug_fn.eglChooseConfigFn) {
    debug_fn.eglChooseConfigFn = fn.eglChooseConfigFn;
    fn.eglChooseConfigFn = Debug_eglChooseConfig;
  }
  if (!debug_fn.eglGetConfigAttribFn) {
    debug_fn.eglGetConfigAttribFn = fn.eglGetConfigAttribFn;
    fn.eglGetConfigAttribFn = Debug_eglGetConfigAttrib;
  }
  if (!debug_fn.eglCreateImageKHRFn) {
    debug_fn.eglCreateImageKHRFn = fn.eglCreateImageKHRFn;
    fn.eglCreateImageKHRFn = Debug_eglCreateImageKHR;
  }
  if (!debug_fn.eglDestroyImageKHRFn) {
    debug_fn.eglDestroyImageKHRFn = fn.eglDestroyImageKHRFn;
    fn.eglDestroyImageKHRFn = Debug_eglDestroyImageKHR;
  }
  if (!debug_fn.eglCreateWindowSurfaceFn) {
    debug_fn.eglCreateWindowSurfaceFn = fn.eglCreateWindowSurfaceFn;
    fn.eglCreateWindowSurfaceFn = Debug_eglCreateWindowSurface;
  }
  if (!debug_fn.eglCreatePbufferSurfaceFn) {
    debug_fn.eglCreatePbufferSurfaceFn = fn.eglCreatePbufferSurfaceFn;
    fn.eglCreatePbufferSurfaceFn = Debug_eglCreatePbufferSurface;
  }
  if (!debug_fn.eglCreatePixmapSurfaceFn) {
    debug_fn.eglCreatePixmapSurfaceFn = fn.eglCreatePixmapSurfaceFn;
    fn.eglCreatePixmapSurfaceFn = Debug_eglCreatePixmapSurface;
  }
  if (!debug_fn.eglDestroySurfaceFn) {
    debug_fn.eglDestroySurfaceFn = fn.eglDestroySurfaceFn;
    fn.eglDestroySurfaceFn = Debug_eglDestroySurface;
  }
  if (!debug_fn.eglQuerySurfaceFn) {
    debug_fn.eglQuerySurfaceFn = fn.eglQuerySurfaceFn;
    fn.eglQuerySurfaceFn = Debug_eglQuerySurface;
  }
  if (!debug_fn.eglBindAPIFn) {
    debug_fn.eglBindAPIFn = fn.eglBindAPIFn;
    fn.eglBindAPIFn = Debug_eglBindAPI;
  }
  if (!debug_fn.eglQueryAPIFn) {
    debug_fn.eglQueryAPIFn = fn.eglQueryAPIFn;
    fn.eglQueryAPIFn = Debug_eglQueryAPI;
  }
  if (!debug_fn.eglWaitClientFn) {
    debug_fn.eglWaitClientFn = fn.eglWaitClientFn;
    fn.eglWaitClientFn = Debug_eglWaitClient;
  }
  if (!debug_fn.eglReleaseThreadFn) {
    debug_fn.eglReleaseThreadFn = fn.eglReleaseThreadFn;
    fn.eglReleaseThreadFn = Debug_eglReleaseThread;
  }
  if (!debug_fn.eglCreatePbufferFromClientBufferFn) {
    debug_fn.eglCreatePbufferFromClientBufferFn = fn.eglCreatePbufferFromClientBufferFn;
    fn.eglCreatePbufferFromClientBufferFn = Debug_eglCreatePbufferFromClientBuffer;
  }
  if (!debug_fn.eglSurfaceAttribFn) {
    debug_fn.eglSurfaceAttribFn = fn.eglSurfaceAttribFn;
    fn.eglSurfaceAttribFn = Debug_eglSurfaceAttrib;
  }
  if (!debug_fn.eglBindTexImageFn) {
    debug_fn.eglBindTexImageFn = fn.eglBindTexImageFn;
    fn.eglBindTexImageFn = Debug_eglBindTexImage;
  }
  if (!debug_fn.eglReleaseTexImageFn) {
    debug_fn.eglReleaseTexImageFn = fn.eglReleaseTexImageFn;
    fn.eglReleaseTexImageFn = Debug_eglReleaseTexImage;
  }
  if (!debug_fn.eglSwapIntervalFn) {
    debug_fn.eglSwapIntervalFn = fn.eglSwapIntervalFn;
    fn.eglSwapIntervalFn = Debug_eglSwapInterval;
  }
  if (!debug_fn.eglCreateContextFn) {
    debug_fn.eglCreateContextFn = fn.eglCreateContextFn;
    fn.eglCreateContextFn = Debug_eglCreateContext;
  }
  if (!debug_fn.eglDestroyContextFn) {
    debug_fn.eglDestroyContextFn = fn.eglDestroyContextFn;
    fn.eglDestroyContextFn = Debug_eglDestroyContext;
  }
  if (!debug_fn.eglMakeCurrentFn) {
    debug_fn.eglMakeCurrentFn = fn.eglMakeCurrentFn;
    fn.eglMakeCurrentFn = Debug_eglMakeCurrent;
  }
  if (!debug_fn.eglGetCurrentContextFn) {
    debug_fn.eglGetCurrentContextFn = fn.eglGetCurrentContextFn;
    fn.eglGetCurrentContextFn = Debug_eglGetCurrentContext;
  }
  if (!debug_fn.eglGetCurrentSurfaceFn) {
    debug_fn.eglGetCurrentSurfaceFn = fn.eglGetCurrentSurfaceFn;
    fn.eglGetCurrentSurfaceFn = Debug_eglGetCurrentSurface;
  }
  if (!debug_fn.eglGetCurrentDisplayFn) {
    debug_fn.eglGetCurrentDisplayFn = fn.eglGetCurrentDisplayFn;
    fn.eglGetCurrentDisplayFn = Debug_eglGetCurrentDisplay;
  }
  if (!debug_fn.eglQueryContextFn) {
    debug_fn.eglQueryContextFn = fn.eglQueryContextFn;
    fn.eglQueryContextFn = Debug_eglQueryContext;
  }
  if (!debug_fn.eglWaitGLFn) {
    debug_fn.eglWaitGLFn = fn.eglWaitGLFn;
    fn.eglWaitGLFn = Debug_eglWaitGL;
  }
  if (!debug_fn.eglWaitNativeFn) {
    debug_fn.eglWaitNativeFn = fn.eglWaitNativeFn;
    fn.eglWaitNativeFn = Debug_eglWaitNative;
  }
  if (!debug_fn.eglSwapBuffersFn) {
    debug_fn.eglSwapBuffersFn = fn.eglSwapBuffersFn;
    fn.eglSwapBuffersFn = Debug_eglSwapBuffers;
  }
  if (!debug_fn.eglCopyBuffersFn) {
    debug_fn.eglCopyBuffersFn = fn.eglCopyBuffersFn;
    fn.eglCopyBuffersFn = Debug_eglCopyBuffers;
  }
  if (!debug_fn.eglGetProcAddressFn) {
    debug_fn.eglGetProcAddressFn = fn.eglGetProcAddressFn;
    fn.eglGetProcAddressFn = Debug_eglGetProcAddress;
  }
  if (!debug_fn.eglPostSubBufferNVFn) {
    debug_fn.eglPostSubBufferNVFn = fn.eglPostSubBufferNVFn;
    fn.eglPostSubBufferNVFn = Debug_eglPostSubBufferNV;
  }
  if (!debug_fn.eglQuerySurfacePointerANGLEFn) {
    debug_fn.eglQuerySurfacePointerANGLEFn = fn.eglQuerySurfacePointerANGLEFn;
    fn.eglQuerySurfacePointerANGLEFn = Debug_eglQuerySurfacePointerANGLE;
  }
  if (!debug_fn.eglCreateSyncKHRFn) {
    debug_fn.eglCreateSyncKHRFn = fn.eglCreateSyncKHRFn;
    fn.eglCreateSyncKHRFn = Debug_eglCreateSyncKHR;
  }
  if (!debug_fn.eglClientWaitSyncKHRFn) {
    debug_fn.eglClientWaitSyncKHRFn = fn.eglClientWaitSyncKHRFn;
    fn.eglClientWaitSyncKHRFn = Debug_eglClientWaitSyncKHR;
  }
  if (!debug_fn.eglDestroySyncKHRFn) {
    debug_fn.eglDestroySyncKHRFn = fn.eglDestroySyncKHRFn;
    fn.eglDestroySyncKHRFn = Debug_eglDestroySyncKHR;
  }
  g_debugBindingsInitialized = true;
}

void DriverEGL::UpdateDebugExtensionBindings() {
  if (debug_fn.eglQuerySurfacePointerANGLEFn != fn.eglQuerySurfacePointerANGLEFn &&
      fn.eglQuerySurfacePointerANGLEFn != Debug_eglQuerySurfacePointerANGLE) {
    debug_fn.eglQuerySurfacePointerANGLEFn = fn.eglQuerySurfacePointerANGLEFn;
    fn.eglQuerySurfacePointerANGLEFn = Debug_eglQuerySurfacePointerANGLE;
  }
  if (debug_fn.eglCreateSyncKHRFn != fn.eglCreateSyncKHRFn &&
      fn.eglCreateSyncKHRFn != Debug_eglCreateSyncKHR) {
    debug_fn.eglCreateSyncKHRFn = fn.eglCreateSyncKHRFn;
    fn.eglCreateSyncKHRFn = Debug_eglCreateSyncKHR;
  }
  if (debug_fn.eglClientWaitSyncKHRFn != fn.eglClientWaitSyncKHRFn &&
      fn.eglClientWaitSyncKHRFn != Debug_eglClientWaitSyncKHR) {
    debug_fn.eglClientWaitSyncKHRFn = fn.eglClientWaitSyncKHRFn;
    fn.eglClientWaitSyncKHRFn = Debug_eglClientWaitSyncKHR;
  }
  if (debug_fn.eglDestroySyncKHRFn != fn.eglDestroySyncKHRFn &&
      fn.eglDestroySyncKHRFn != Debug_eglDestroySyncKHR) {
    debug_fn.eglDestroySyncKHRFn = fn.eglDestroySyncKHRFn;
    fn.eglDestroySyncKHRFn = Debug_eglDestroySyncKHR;
  }
  if (debug_fn.eglPostSubBufferNVFn != fn.eglPostSubBufferNVFn &&
      fn.eglPostSubBufferNVFn != Debug_eglPostSubBufferNV) {
    debug_fn.eglPostSubBufferNVFn = fn.eglPostSubBufferNVFn;
    fn.eglPostSubBufferNVFn = Debug_eglPostSubBufferNV;
  }
  if (debug_fn.eglCreateImageKHRFn != fn.eglCreateImageKHRFn &&
      fn.eglCreateImageKHRFn != Debug_eglCreateImageKHR) {
    debug_fn.eglCreateImageKHRFn = fn.eglCreateImageKHRFn;
    fn.eglCreateImageKHRFn = Debug_eglCreateImageKHR;
  }
  if (debug_fn.eglDestroyImageKHRFn != fn.eglDestroyImageKHRFn &&
      fn.eglDestroyImageKHRFn != Debug_eglDestroyImageKHR) {
    debug_fn.eglDestroyImageKHRFn = fn.eglDestroyImageKHRFn;
    fn.eglDestroyImageKHRFn = Debug_eglDestroyImageKHR;
  }
  if (debug_fn.eglCreateImageKHRFn != fn.eglCreateImageKHRFn &&
      fn.eglCreateImageKHRFn != Debug_eglCreateImageKHR) {
    debug_fn.eglCreateImageKHRFn = fn.eglCreateImageKHRFn;
    fn.eglCreateImageKHRFn = Debug_eglCreateImageKHR;
  }
  if (debug_fn.eglDestroyImageKHRFn != fn.eglDestroyImageKHRFn &&
      fn.eglDestroyImageKHRFn != Debug_eglDestroyImageKHR) {
    debug_fn.eglDestroyImageKHRFn = fn.eglDestroyImageKHRFn;
    fn.eglDestroyImageKHRFn = Debug_eglDestroyImageKHR;
  }
  if (debug_fn.eglCreateSyncKHRFn != fn.eglCreateSyncKHRFn &&
      fn.eglCreateSyncKHRFn != Debug_eglCreateSyncKHR) {
    debug_fn.eglCreateSyncKHRFn = fn.eglCreateSyncKHRFn;
    fn.eglCreateSyncKHRFn = Debug_eglCreateSyncKHR;
  }
  if (debug_fn.eglClientWaitSyncKHRFn != fn.eglClientWaitSyncKHRFn &&
      fn.eglClientWaitSyncKHRFn != Debug_eglClientWaitSyncKHR) {
    debug_fn.eglClientWaitSyncKHRFn = fn.eglClientWaitSyncKHRFn;
    fn.eglClientWaitSyncKHRFn = Debug_eglClientWaitSyncKHR;
  }
  if (debug_fn.eglDestroySyncKHRFn != fn.eglDestroySyncKHRFn &&
      fn.eglDestroySyncKHRFn != Debug_eglDestroySyncKHR) {
    debug_fn.eglDestroySyncKHRFn = fn.eglDestroySyncKHRFn;
    fn.eglDestroySyncKHRFn = Debug_eglDestroySyncKHR;
  }
}

void DriverEGL::ClearBindings() {
  memset(this, 0, sizeof(*this));
}

EGLint EGLApiBase::eglGetErrorFn(void) {
  return driver_->fn.eglGetErrorFn();
}

EGLDisplay EGLApiBase::eglGetDisplayFn(EGLNativeDisplayType display_id) {
  return driver_->fn.eglGetDisplayFn(display_id);
}

EGLBoolean EGLApiBase::eglInitializeFn(EGLDisplay dpy, EGLint* major, EGLint* minor) {
  return driver_->fn.eglInitializeFn(dpy, major, minor);
}

EGLBoolean EGLApiBase::eglTerminateFn(EGLDisplay dpy) {
  return driver_->fn.eglTerminateFn(dpy);
}

const char* EGLApiBase::eglQueryStringFn(EGLDisplay dpy, EGLint name) {
  return driver_->fn.eglQueryStringFn(dpy, name);
}

EGLBoolean EGLApiBase::eglGetConfigsFn(EGLDisplay dpy, EGLConfig* configs, EGLint config_size, EGLint* num_config) {
  return driver_->fn.eglGetConfigsFn(dpy, configs, config_size, num_config);
}

EGLBoolean EGLApiBase::eglChooseConfigFn(EGLDisplay dpy, const EGLint* attrib_list, EGLConfig* configs, EGLint config_size, EGLint* num_config) {
  return driver_->fn.eglChooseConfigFn(dpy, attrib_list, configs, config_size, num_config);
}

EGLBoolean EGLApiBase::eglGetConfigAttribFn(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint* value) {
  return driver_->fn.eglGetConfigAttribFn(dpy, config, attribute, value);
}

EGLImageKHR EGLApiBase::eglCreateImageKHRFn(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint* attrib_list) {
  return driver_->fn.eglCreateImageKHRFn(dpy, ctx, target, buffer, attrib_list);
}

EGLBoolean EGLApiBase::eglDestroyImageKHRFn(EGLDisplay dpy, EGLImageKHR image) {
  return driver_->fn.eglDestroyImageKHRFn(dpy, image);
}

EGLSurface EGLApiBase::eglCreateWindowSurfaceFn(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint* attrib_list) {
  return driver_->fn.eglCreateWindowSurfaceFn(dpy, config, win, attrib_list);
}

EGLSurface EGLApiBase::eglCreatePbufferSurfaceFn(EGLDisplay dpy, EGLConfig config, const EGLint* attrib_list) {
  return driver_->fn.eglCreatePbufferSurfaceFn(dpy, config, attrib_list);
}

EGLSurface EGLApiBase::eglCreatePixmapSurfaceFn(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint* attrib_list) {
  return driver_->fn.eglCreatePixmapSurfaceFn(dpy, config, pixmap, attrib_list);
}

EGLBoolean EGLApiBase::eglDestroySurfaceFn(EGLDisplay dpy, EGLSurface surface) {
  return driver_->fn.eglDestroySurfaceFn(dpy, surface);
}

EGLBoolean EGLApiBase::eglQuerySurfaceFn(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint* value) {
  return driver_->fn.eglQuerySurfaceFn(dpy, surface, attribute, value);
}

EGLBoolean EGLApiBase::eglBindAPIFn(EGLenum api) {
  return driver_->fn.eglBindAPIFn(api);
}

EGLenum EGLApiBase::eglQueryAPIFn(void) {
  return driver_->fn.eglQueryAPIFn();
}

EGLBoolean EGLApiBase::eglWaitClientFn(void) {
  return driver_->fn.eglWaitClientFn();
}

EGLBoolean EGLApiBase::eglReleaseThreadFn(void) {
  return driver_->fn.eglReleaseThreadFn();
}

EGLSurface EGLApiBase::eglCreatePbufferFromClientBufferFn(EGLDisplay dpy, EGLenum buftype, void* buffer, EGLConfig config, const EGLint* attrib_list) {
  return driver_->fn.eglCreatePbufferFromClientBufferFn(dpy, buftype, buffer, config, attrib_list);
}

EGLBoolean EGLApiBase::eglSurfaceAttribFn(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value) {
  return driver_->fn.eglSurfaceAttribFn(dpy, surface, attribute, value);
}

EGLBoolean EGLApiBase::eglBindTexImageFn(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
  return driver_->fn.eglBindTexImageFn(dpy, surface, buffer);
}

EGLBoolean EGLApiBase::eglReleaseTexImageFn(EGLDisplay dpy, EGLSurface surface, EGLint buffer) {
  return driver_->fn.eglReleaseTexImageFn(dpy, surface, buffer);
}

EGLBoolean EGLApiBase::eglSwapIntervalFn(EGLDisplay dpy, EGLint interval) {
  return driver_->fn.eglSwapIntervalFn(dpy, interval);
}

EGLContext EGLApiBase::eglCreateContextFn(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint* attrib_list) {
  return driver_->fn.eglCreateContextFn(dpy, config, share_context, attrib_list);
}

EGLBoolean EGLApiBase::eglDestroyContextFn(EGLDisplay dpy, EGLContext ctx) {
  return driver_->fn.eglDestroyContextFn(dpy, ctx);
}

EGLBoolean EGLApiBase::eglMakeCurrentFn(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) {
  return driver_->fn.eglMakeCurrentFn(dpy, draw, read, ctx);
}

EGLContext EGLApiBase::eglGetCurrentContextFn(void) {
  return driver_->fn.eglGetCurrentContextFn();
}

EGLSurface EGLApiBase::eglGetCurrentSurfaceFn(EGLint readdraw) {
  return driver_->fn.eglGetCurrentSurfaceFn(readdraw);
}

EGLDisplay EGLApiBase::eglGetCurrentDisplayFn(void) {
  return driver_->fn.eglGetCurrentDisplayFn();
}

EGLBoolean EGLApiBase::eglQueryContextFn(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint* value) {
  return driver_->fn.eglQueryContextFn(dpy, ctx, attribute, value);
}

EGLBoolean EGLApiBase::eglWaitGLFn(void) {
  return driver_->fn.eglWaitGLFn();
}

EGLBoolean EGLApiBase::eglWaitNativeFn(EGLint engine) {
  return driver_->fn.eglWaitNativeFn(engine);
}

EGLBoolean EGLApiBase::eglSwapBuffersFn(EGLDisplay dpy, EGLSurface surface) {
  return driver_->fn.eglSwapBuffersFn(dpy, surface);
}

EGLBoolean EGLApiBase::eglCopyBuffersFn(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target) {
  return driver_->fn.eglCopyBuffersFn(dpy, surface, target);
}

__eglMustCastToProperFunctionPointerType EGLApiBase::eglGetProcAddressFn(const char* procname) {
  return driver_->fn.eglGetProcAddressFn(procname);
}

EGLBoolean EGLApiBase::eglPostSubBufferNVFn(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height) {
  return driver_->fn.eglPostSubBufferNVFn(dpy, surface, x, y, width, height);
}

EGLBoolean EGLApiBase::eglQuerySurfacePointerANGLEFn(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void** value) {
  return driver_->fn.eglQuerySurfacePointerANGLEFn(dpy, surface, attribute, value);
}

EGLSyncKHR EGLApiBase::eglCreateSyncKHRFn(EGLDisplay dpy, EGLenum type, const EGLint* attrib_list) {
  return driver_->fn.eglCreateSyncKHRFn(dpy, type, attrib_list);
}

EGLint EGLApiBase::eglClientWaitSyncKHRFn(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout) {
  return driver_->fn.eglClientWaitSyncKHRFn(dpy, sync, flags, timeout);
}

EGLBoolean EGLApiBase::eglDestroySyncKHRFn(EGLDisplay dpy, EGLSyncKHR sync) {
  return driver_->fn.eglDestroySyncKHRFn(dpy, sync);
}

}  // namespace gfx
