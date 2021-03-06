// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

#include <string>
#include "gpu/command_buffer/common/gles2_cmd_utils.h"
#include "ui/gl/gl_bindings.h"
#include "ui/gl/gl_context.h"
#include "ui/gl/gl_implementation.h"
#include "ui/gl/gl_wgl_api_implementation.h"

using gpu::gles2::GLES2Util;

namespace gfx {

static bool g_debugBindingsInitialized;
DriverWGL g_driver_wgl;


void DriverWGL::InitializeBindings() {
  fn.wglCreateContextFn = reinterpret_cast<wglCreateContextProc>(GetGLCoreProcAddress("wglCreateContext"));
  fn.wglCreateLayerContextFn = reinterpret_cast<wglCreateLayerContextProc>(GetGLCoreProcAddress("wglCreateLayerContext"));
  fn.wglCopyContextFn = reinterpret_cast<wglCopyContextProc>(GetGLCoreProcAddress("wglCopyContext"));
  fn.wglDeleteContextFn = reinterpret_cast<wglDeleteContextProc>(GetGLCoreProcAddress("wglDeleteContext"));
  fn.wglGetCurrentContextFn = reinterpret_cast<wglGetCurrentContextProc>(GetGLCoreProcAddress("wglGetCurrentContext"));
  fn.wglGetCurrentDCFn = reinterpret_cast<wglGetCurrentDCProc>(GetGLCoreProcAddress("wglGetCurrentDC"));
  fn.wglMakeCurrentFn = reinterpret_cast<wglMakeCurrentProc>(GetGLCoreProcAddress("wglMakeCurrent"));
  fn.wglShareListsFn = reinterpret_cast<wglShareListsProc>(GetGLCoreProcAddress("wglShareLists"));
  fn.wglSwapIntervalEXTFn = reinterpret_cast<wglSwapIntervalEXTProc>(GetGLCoreProcAddress("wglSwapIntervalEXT"));
  fn.wglSwapLayerBuffersFn = reinterpret_cast<wglSwapLayerBuffersProc>(GetGLCoreProcAddress("wglSwapLayerBuffers"));
  fn.wglGetExtensionsStringARBFn = reinterpret_cast<wglGetExtensionsStringARBProc>(GetGLCoreProcAddress("wglGetExtensionsStringARB"));
  fn.wglGetExtensionsStringEXTFn = reinterpret_cast<wglGetExtensionsStringEXTProc>(GetGLCoreProcAddress("wglGetExtensionsStringEXT"));
  fn.wglChoosePixelFormatARBFn = reinterpret_cast<wglChoosePixelFormatARBProc>(GetGLCoreProcAddress("wglChoosePixelFormatARB"));
  fn.wglCreatePbufferARBFn = reinterpret_cast<wglCreatePbufferARBProc>(GetGLCoreProcAddress("wglCreatePbufferARB"));
  fn.wglGetPbufferDCARBFn = reinterpret_cast<wglGetPbufferDCARBProc>(GetGLCoreProcAddress("wglGetPbufferDCARB"));
  fn.wglReleasePbufferDCARBFn = reinterpret_cast<wglReleasePbufferDCARBProc>(GetGLCoreProcAddress("wglReleasePbufferDCARB"));
  fn.wglDestroyPbufferARBFn = reinterpret_cast<wglDestroyPbufferARBProc>(GetGLCoreProcAddress("wglDestroyPbufferARB"));
  fn.wglQueryPbufferARBFn = reinterpret_cast<wglQueryPbufferARBProc>(GetGLCoreProcAddress("wglQueryPbufferARB"));
}

void DriverWGL::InitializeExtensionBindings(
    GLContext* context) {
  DCHECK(context && context->IsCurrent(NULL));
  ext.b_WGL_EXT_swap_control = context->HasExtension("WGL_EXT_swap_control");
  if (ext.b_WGL_EXT_swap_control) {
    fn.wglSwapIntervalEXTFn = reinterpret_cast<wglSwapIntervalEXTProc>(GetGLProcAddress("wglSwapIntervalEXT"));
  }
  ext.b_WGL_EXT_extensions_string = context->HasExtension("WGL_EXT_extensions_string");
  if (ext.b_WGL_EXT_extensions_string) {
    fn.wglGetExtensionsStringEXTFn = reinterpret_cast<wglGetExtensionsStringEXTProc>(GetGLProcAddress("wglGetExtensionsStringEXT"));
  }
  ext.b_WGL_ARB_extensions_string = context->HasExtension("WGL_ARB_extensions_string");
  if (ext.b_WGL_ARB_extensions_string) {
    fn.wglGetExtensionsStringARBFn = reinterpret_cast<wglGetExtensionsStringARBProc>(GetGLProcAddress("wglGetExtensionsStringARB"));
  }
  ext.b_WGL_ARB_pixel_format = context->HasExtension("WGL_ARB_pixel_format");
  if (ext.b_WGL_ARB_pixel_format) {
    fn.wglChoosePixelFormatARBFn = reinterpret_cast<wglChoosePixelFormatARBProc>(GetGLProcAddress("wglChoosePixelFormatARB"));
  }
  ext.b_WGL_ARB_pbuffer = context->HasExtension("WGL_ARB_pbuffer");
  if (ext.b_WGL_ARB_pbuffer) {
    fn.wglCreatePbufferARBFn = reinterpret_cast<wglCreatePbufferARBProc>(GetGLProcAddress("wglCreatePbufferARB"));
    fn.wglGetPbufferDCARBFn = reinterpret_cast<wglGetPbufferDCARBProc>(GetGLProcAddress("wglGetPbufferDCARB"));
    fn.wglReleasePbufferDCARBFn = reinterpret_cast<wglReleasePbufferDCARBProc>(GetGLProcAddress("wglReleasePbufferDCARB"));
    fn.wglDestroyPbufferARBFn = reinterpret_cast<wglDestroyPbufferARBProc>(GetGLProcAddress("wglDestroyPbufferARB"));
    fn.wglQueryPbufferARBFn = reinterpret_cast<wglQueryPbufferARBProc>(GetGLProcAddress("wglQueryPbufferARB"));
  }
  if (g_debugBindingsInitialized)
    UpdateDebugExtensionBindings();
}

extern "C" {

static HGLRC GL_BINDING_CALL Debug_wglCreateContext(HDC hdc) {
  GL_SERVICE_LOG("wglCreateContext" << "("  << hdc << ")");
  HGLRC result = g_driver_wgl.debug_fn.wglCreateContextFn(hdc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HGLRC GL_BINDING_CALL Debug_wglCreateLayerContext(HDC hdc, int iLayerPlane) {
  GL_SERVICE_LOG("wglCreateLayerContext" << "("  << hdc << ", " << iLayerPlane << ")");
  HGLRC result = g_driver_wgl.debug_fn.wglCreateLayerContextFn(hdc, iLayerPlane);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) {
  GL_SERVICE_LOG("wglCopyContext" << "("  << hglrcSrc << ", " << hglrcDst << ", " << mask << ")");
  BOOL result = g_driver_wgl.debug_fn.wglCopyContextFn(hglrcSrc, hglrcDst, mask);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglDeleteContext(HGLRC hglrc) {
  GL_SERVICE_LOG("wglDeleteContext" << "("  << hglrc << ")");
  BOOL result = g_driver_wgl.debug_fn.wglDeleteContextFn(hglrc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HGLRC GL_BINDING_CALL Debug_wglGetCurrentContext() {
  GL_SERVICE_LOG("wglGetCurrentContext" << "("  << ")");
  HGLRC result = g_driver_wgl.debug_fn.wglGetCurrentContextFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HDC GL_BINDING_CALL Debug_wglGetCurrentDC() {
  GL_SERVICE_LOG("wglGetCurrentDC" << "("  << ")");
  HDC result = g_driver_wgl.debug_fn.wglGetCurrentDCFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglMakeCurrent(HDC hdc, HGLRC hglrc) {
  GL_SERVICE_LOG("wglMakeCurrent" << "("  << hdc << ", " << hglrc << ")");
  BOOL result = g_driver_wgl.debug_fn.wglMakeCurrentFn(hdc, hglrc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglShareLists(HGLRC hglrc1, HGLRC hglrc2) {
  GL_SERVICE_LOG("wglShareLists" << "("  << hglrc1 << ", " << hglrc2 << ")");
  BOOL result = g_driver_wgl.debug_fn.wglShareListsFn(hglrc1, hglrc2);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglSwapIntervalEXT(int interval) {
  GL_SERVICE_LOG("wglSwapIntervalEXT" << "("  << interval << ")");
  BOOL result = g_driver_wgl.debug_fn.wglSwapIntervalEXTFn(interval);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglSwapLayerBuffers(HDC hdc, UINT fuPlanes) {
  GL_SERVICE_LOG("wglSwapLayerBuffers" << "("  << hdc << ", " << fuPlanes << ")");
  BOOL result = g_driver_wgl.debug_fn.wglSwapLayerBuffersFn(hdc, fuPlanes);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static const char* GL_BINDING_CALL Debug_wglGetExtensionsStringARB(HDC hDC) {
  GL_SERVICE_LOG("wglGetExtensionsStringARB" << "("  << hDC << ")");
  const char* result = g_driver_wgl.debug_fn.wglGetExtensionsStringARBFn(hDC);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static const char* GL_BINDING_CALL Debug_wglGetExtensionsStringEXT() {
  GL_SERVICE_LOG("wglGetExtensionsStringEXT" << "("  << ")");
  const char* result = g_driver_wgl.debug_fn.wglGetExtensionsStringEXTFn();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglChoosePixelFormatARB(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats) {
  GL_SERVICE_LOG("wglChoosePixelFormatARB" << "("  << dc << ", " << static_cast<const void*>(int_attrib_list) << ", " << static_cast<const void*>(float_attrib_list) << ", " << max_formats << ", " << static_cast<const void*>(formats) << ", " << static_cast<const void*>(num_formats) << ")");
  BOOL result = g_driver_wgl.debug_fn.wglChoosePixelFormatARBFn(dc, int_attrib_list, float_attrib_list, max_formats, formats, num_formats);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HPBUFFERARB GL_BINDING_CALL Debug_wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList) {
  GL_SERVICE_LOG("wglCreatePbufferARB" << "("  << hDC << ", " << iPixelFormat << ", " << iWidth << ", " << iHeight << ", " << static_cast<const void*>(piAttribList) << ")");
  HPBUFFERARB result = g_driver_wgl.debug_fn.wglCreatePbufferARBFn(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HDC GL_BINDING_CALL Debug_wglGetPbufferDCARB(HPBUFFERARB hPbuffer) {
  GL_SERVICE_LOG("wglGetPbufferDCARB" << "("  << hPbuffer << ")");
  HDC result = g_driver_wgl.debug_fn.wglGetPbufferDCARBFn(hPbuffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static int GL_BINDING_CALL Debug_wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC) {
  GL_SERVICE_LOG("wglReleasePbufferDCARB" << "("  << hPbuffer << ", " << hDC << ")");
  int result = g_driver_wgl.debug_fn.wglReleasePbufferDCARBFn(hPbuffer, hDC);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglDestroyPbufferARB(HPBUFFERARB hPbuffer) {
  GL_SERVICE_LOG("wglDestroyPbufferARB" << "("  << hPbuffer << ")");
  BOOL result = g_driver_wgl.debug_fn.wglDestroyPbufferARBFn(hPbuffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int* piValue) {
  GL_SERVICE_LOG("wglQueryPbufferARB" << "("  << hPbuffer << ", " << iAttribute << ", " << static_cast<const void*>(piValue) << ")");
  BOOL result = g_driver_wgl.debug_fn.wglQueryPbufferARBFn(hPbuffer, iAttribute, piValue);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}
}  // extern "C"

void DriverWGL::InitializeDebugBindings() {
  if (!debug_fn.wglCreateContextFn) {
    debug_fn.wglCreateContextFn = fn.wglCreateContextFn;
    fn.wglCreateContextFn = Debug_wglCreateContext;
  }
  if (!debug_fn.wglCreateLayerContextFn) {
    debug_fn.wglCreateLayerContextFn = fn.wglCreateLayerContextFn;
    fn.wglCreateLayerContextFn = Debug_wglCreateLayerContext;
  }
  if (!debug_fn.wglCopyContextFn) {
    debug_fn.wglCopyContextFn = fn.wglCopyContextFn;
    fn.wglCopyContextFn = Debug_wglCopyContext;
  }
  if (!debug_fn.wglDeleteContextFn) {
    debug_fn.wglDeleteContextFn = fn.wglDeleteContextFn;
    fn.wglDeleteContextFn = Debug_wglDeleteContext;
  }
  if (!debug_fn.wglGetCurrentContextFn) {
    debug_fn.wglGetCurrentContextFn = fn.wglGetCurrentContextFn;
    fn.wglGetCurrentContextFn = Debug_wglGetCurrentContext;
  }
  if (!debug_fn.wglGetCurrentDCFn) {
    debug_fn.wglGetCurrentDCFn = fn.wglGetCurrentDCFn;
    fn.wglGetCurrentDCFn = Debug_wglGetCurrentDC;
  }
  if (!debug_fn.wglMakeCurrentFn) {
    debug_fn.wglMakeCurrentFn = fn.wglMakeCurrentFn;
    fn.wglMakeCurrentFn = Debug_wglMakeCurrent;
  }
  if (!debug_fn.wglShareListsFn) {
    debug_fn.wglShareListsFn = fn.wglShareListsFn;
    fn.wglShareListsFn = Debug_wglShareLists;
  }
  if (!debug_fn.wglSwapIntervalEXTFn) {
    debug_fn.wglSwapIntervalEXTFn = fn.wglSwapIntervalEXTFn;
    fn.wglSwapIntervalEXTFn = Debug_wglSwapIntervalEXT;
  }
  if (!debug_fn.wglSwapLayerBuffersFn) {
    debug_fn.wglSwapLayerBuffersFn = fn.wglSwapLayerBuffersFn;
    fn.wglSwapLayerBuffersFn = Debug_wglSwapLayerBuffers;
  }
  if (!debug_fn.wglGetExtensionsStringARBFn) {
    debug_fn.wglGetExtensionsStringARBFn = fn.wglGetExtensionsStringARBFn;
    fn.wglGetExtensionsStringARBFn = Debug_wglGetExtensionsStringARB;
  }
  if (!debug_fn.wglGetExtensionsStringEXTFn) {
    debug_fn.wglGetExtensionsStringEXTFn = fn.wglGetExtensionsStringEXTFn;
    fn.wglGetExtensionsStringEXTFn = Debug_wglGetExtensionsStringEXT;
  }
  if (!debug_fn.wglChoosePixelFormatARBFn) {
    debug_fn.wglChoosePixelFormatARBFn = fn.wglChoosePixelFormatARBFn;
    fn.wglChoosePixelFormatARBFn = Debug_wglChoosePixelFormatARB;
  }
  if (!debug_fn.wglCreatePbufferARBFn) {
    debug_fn.wglCreatePbufferARBFn = fn.wglCreatePbufferARBFn;
    fn.wglCreatePbufferARBFn = Debug_wglCreatePbufferARB;
  }
  if (!debug_fn.wglGetPbufferDCARBFn) {
    debug_fn.wglGetPbufferDCARBFn = fn.wglGetPbufferDCARBFn;
    fn.wglGetPbufferDCARBFn = Debug_wglGetPbufferDCARB;
  }
  if (!debug_fn.wglReleasePbufferDCARBFn) {
    debug_fn.wglReleasePbufferDCARBFn = fn.wglReleasePbufferDCARBFn;
    fn.wglReleasePbufferDCARBFn = Debug_wglReleasePbufferDCARB;
  }
  if (!debug_fn.wglDestroyPbufferARBFn) {
    debug_fn.wglDestroyPbufferARBFn = fn.wglDestroyPbufferARBFn;
    fn.wglDestroyPbufferARBFn = Debug_wglDestroyPbufferARB;
  }
  if (!debug_fn.wglQueryPbufferARBFn) {
    debug_fn.wglQueryPbufferARBFn = fn.wglQueryPbufferARBFn;
    fn.wglQueryPbufferARBFn = Debug_wglQueryPbufferARB;
  }
  g_debugBindingsInitialized = true;
}

void DriverWGL::UpdateDebugExtensionBindings() {
  if (debug_fn.wglSwapIntervalEXTFn != fn.wglSwapIntervalEXTFn &&
      fn.wglSwapIntervalEXTFn != Debug_wglSwapIntervalEXT) {
    debug_fn.wglSwapIntervalEXTFn = fn.wglSwapIntervalEXTFn;
    fn.wglSwapIntervalEXTFn = Debug_wglSwapIntervalEXT;
  }
  if (debug_fn.wglGetExtensionsStringEXTFn != fn.wglGetExtensionsStringEXTFn &&
      fn.wglGetExtensionsStringEXTFn != Debug_wglGetExtensionsStringEXT) {
    debug_fn.wglGetExtensionsStringEXTFn = fn.wglGetExtensionsStringEXTFn;
    fn.wglGetExtensionsStringEXTFn = Debug_wglGetExtensionsStringEXT;
  }
  if (debug_fn.wglGetExtensionsStringARBFn != fn.wglGetExtensionsStringARBFn &&
      fn.wglGetExtensionsStringARBFn != Debug_wglGetExtensionsStringARB) {
    debug_fn.wglGetExtensionsStringARBFn = fn.wglGetExtensionsStringARBFn;
    fn.wglGetExtensionsStringARBFn = Debug_wglGetExtensionsStringARB;
  }
  if (debug_fn.wglChoosePixelFormatARBFn != fn.wglChoosePixelFormatARBFn &&
      fn.wglChoosePixelFormatARBFn != Debug_wglChoosePixelFormatARB) {
    debug_fn.wglChoosePixelFormatARBFn = fn.wglChoosePixelFormatARBFn;
    fn.wglChoosePixelFormatARBFn = Debug_wglChoosePixelFormatARB;
  }
  if (debug_fn.wglCreatePbufferARBFn != fn.wglCreatePbufferARBFn &&
      fn.wglCreatePbufferARBFn != Debug_wglCreatePbufferARB) {
    debug_fn.wglCreatePbufferARBFn = fn.wglCreatePbufferARBFn;
    fn.wglCreatePbufferARBFn = Debug_wglCreatePbufferARB;
  }
  if (debug_fn.wglGetPbufferDCARBFn != fn.wglGetPbufferDCARBFn &&
      fn.wglGetPbufferDCARBFn != Debug_wglGetPbufferDCARB) {
    debug_fn.wglGetPbufferDCARBFn = fn.wglGetPbufferDCARBFn;
    fn.wglGetPbufferDCARBFn = Debug_wglGetPbufferDCARB;
  }
  if (debug_fn.wglReleasePbufferDCARBFn != fn.wglReleasePbufferDCARBFn &&
      fn.wglReleasePbufferDCARBFn != Debug_wglReleasePbufferDCARB) {
    debug_fn.wglReleasePbufferDCARBFn = fn.wglReleasePbufferDCARBFn;
    fn.wglReleasePbufferDCARBFn = Debug_wglReleasePbufferDCARB;
  }
  if (debug_fn.wglDestroyPbufferARBFn != fn.wglDestroyPbufferARBFn &&
      fn.wglDestroyPbufferARBFn != Debug_wglDestroyPbufferARB) {
    debug_fn.wglDestroyPbufferARBFn = fn.wglDestroyPbufferARBFn;
    fn.wglDestroyPbufferARBFn = Debug_wglDestroyPbufferARB;
  }
  if (debug_fn.wglQueryPbufferARBFn != fn.wglQueryPbufferARBFn &&
      fn.wglQueryPbufferARBFn != Debug_wglQueryPbufferARB) {
    debug_fn.wglQueryPbufferARBFn = fn.wglQueryPbufferARBFn;
    fn.wglQueryPbufferARBFn = Debug_wglQueryPbufferARB;
  }
}

void DriverWGL::ClearBindings() {
  memset(this, 0, sizeof(*this));
}

HGLRC WGLApiBase::wglCreateContextFn(HDC hdc) {
  return driver_->fn.wglCreateContextFn(hdc);
}

HGLRC WGLApiBase::wglCreateLayerContextFn(HDC hdc, int iLayerPlane) {
  return driver_->fn.wglCreateLayerContextFn(hdc, iLayerPlane);
}

BOOL WGLApiBase::wglCopyContextFn(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) {
  return driver_->fn.wglCopyContextFn(hglrcSrc, hglrcDst, mask);
}

BOOL WGLApiBase::wglDeleteContextFn(HGLRC hglrc) {
  return driver_->fn.wglDeleteContextFn(hglrc);
}

HGLRC WGLApiBase::wglGetCurrentContextFn() {
  return driver_->fn.wglGetCurrentContextFn();
}

HDC WGLApiBase::wglGetCurrentDCFn() {
  return driver_->fn.wglGetCurrentDCFn();
}

BOOL WGLApiBase::wglMakeCurrentFn(HDC hdc, HGLRC hglrc) {
  return driver_->fn.wglMakeCurrentFn(hdc, hglrc);
}

BOOL WGLApiBase::wglShareListsFn(HGLRC hglrc1, HGLRC hglrc2) {
  return driver_->fn.wglShareListsFn(hglrc1, hglrc2);
}

BOOL WGLApiBase::wglSwapIntervalEXTFn(int interval) {
  return driver_->fn.wglSwapIntervalEXTFn(interval);
}

BOOL WGLApiBase::wglSwapLayerBuffersFn(HDC hdc, UINT fuPlanes) {
  return driver_->fn.wglSwapLayerBuffersFn(hdc, fuPlanes);
}

const char* WGLApiBase::wglGetExtensionsStringARBFn(HDC hDC) {
  return driver_->fn.wglGetExtensionsStringARBFn(hDC);
}

const char* WGLApiBase::wglGetExtensionsStringEXTFn() {
  return driver_->fn.wglGetExtensionsStringEXTFn();
}

BOOL WGLApiBase::wglChoosePixelFormatARBFn(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats) {
  return driver_->fn.wglChoosePixelFormatARBFn(dc, int_attrib_list, float_attrib_list, max_formats, formats, num_formats);
}

HPBUFFERARB WGLApiBase::wglCreatePbufferARBFn(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList) {
  return driver_->fn.wglCreatePbufferARBFn(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
}

HDC WGLApiBase::wglGetPbufferDCARBFn(HPBUFFERARB hPbuffer) {
  return driver_->fn.wglGetPbufferDCARBFn(hPbuffer);
}

int WGLApiBase::wglReleasePbufferDCARBFn(HPBUFFERARB hPbuffer, HDC hDC) {
  return driver_->fn.wglReleasePbufferDCARBFn(hPbuffer, hDC);
}

BOOL WGLApiBase::wglDestroyPbufferARBFn(HPBUFFERARB hPbuffer) {
  return driver_->fn.wglDestroyPbufferARBFn(hPbuffer);
}

BOOL WGLApiBase::wglQueryPbufferARBFn(HPBUFFERARB hPbuffer, int iAttribute, int* piValue) {
  return driver_->fn.wglQueryPbufferARBFn(hPbuffer, iAttribute, piValue);
}

}  // namespace gfx
