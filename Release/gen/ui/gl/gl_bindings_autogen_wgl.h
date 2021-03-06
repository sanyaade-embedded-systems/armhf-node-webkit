// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

#ifndef UI_GFX_GL_GL_BINDINGS_AUTOGEN_WGL_H_
#define UI_GFX_GL_GL_BINDINGS_AUTOGEN_WGL_H_

namespace gfx {

class GLContext;


typedef HGLRC (GL_BINDING_CALL *wglCreateContextProc)(HDC hdc);
typedef HGLRC (GL_BINDING_CALL *wglCreateLayerContextProc)(HDC hdc, int iLayerPlane);
typedef BOOL (GL_BINDING_CALL *wglCopyContextProc)(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
typedef BOOL (GL_BINDING_CALL *wglDeleteContextProc)(HGLRC hglrc);
typedef HGLRC (GL_BINDING_CALL *wglGetCurrentContextProc)();
typedef HDC (GL_BINDING_CALL *wglGetCurrentDCProc)();
typedef BOOL (GL_BINDING_CALL *wglMakeCurrentProc)(HDC hdc, HGLRC hglrc);
typedef BOOL (GL_BINDING_CALL *wglShareListsProc)(HGLRC hglrc1, HGLRC hglrc2);
typedef BOOL (GL_BINDING_CALL *wglSwapIntervalEXTProc)(int interval);
typedef BOOL (GL_BINDING_CALL *wglSwapLayerBuffersProc)(HDC hdc, UINT fuPlanes);
typedef const char* (GL_BINDING_CALL *wglGetExtensionsStringARBProc)(HDC hDC);
typedef const char* (GL_BINDING_CALL *wglGetExtensionsStringEXTProc)();
typedef BOOL (GL_BINDING_CALL *wglChoosePixelFormatARBProc)(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats);
typedef HPBUFFERARB (GL_BINDING_CALL *wglCreatePbufferARBProc)(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList);
typedef HDC (GL_BINDING_CALL *wglGetPbufferDCARBProc)(HPBUFFERARB hPbuffer);
typedef int (GL_BINDING_CALL *wglReleasePbufferDCARBProc)(HPBUFFERARB hPbuffer, HDC hDC);
typedef BOOL (GL_BINDING_CALL *wglDestroyPbufferARBProc)(HPBUFFERARB hPbuffer);
typedef BOOL (GL_BINDING_CALL *wglQueryPbufferARBProc)(HPBUFFERARB hPbuffer, int iAttribute, int* piValue);

struct ExtensionsWGL {
  bool b_WGL_EXT_swap_control;
  bool b_WGL_EXT_extensions_string;
  bool b_WGL_ARB_extensions_string;
  bool b_WGL_ARB_pixel_format;
  bool b_WGL_ARB_pbuffer;
};

struct ProcsWGL {
  wglCreateContextProc wglCreateContextFn;
  wglCreateLayerContextProc wglCreateLayerContextFn;
  wglCopyContextProc wglCopyContextFn;
  wglDeleteContextProc wglDeleteContextFn;
  wglGetCurrentContextProc wglGetCurrentContextFn;
  wglGetCurrentDCProc wglGetCurrentDCFn;
  wglMakeCurrentProc wglMakeCurrentFn;
  wglShareListsProc wglShareListsFn;
  wglSwapIntervalEXTProc wglSwapIntervalEXTFn;
  wglSwapLayerBuffersProc wglSwapLayerBuffersFn;
  wglGetExtensionsStringARBProc wglGetExtensionsStringARBFn;
  wglGetExtensionsStringEXTProc wglGetExtensionsStringEXTFn;
  wglChoosePixelFormatARBProc wglChoosePixelFormatARBFn;
  wglCreatePbufferARBProc wglCreatePbufferARBFn;
  wglGetPbufferDCARBProc wglGetPbufferDCARBFn;
  wglReleasePbufferDCARBProc wglReleasePbufferDCARBFn;
  wglDestroyPbufferARBProc wglDestroyPbufferARBFn;
  wglQueryPbufferARBProc wglQueryPbufferARBFn;
};

struct GL_EXPORT DriverWGL {
  void InitializeBindings();
  void InitializeExtensionBindings(GLContext* context);
  void InitializeDebugBindings();
  void ClearBindings();
  void UpdateDebugExtensionBindings();

  ProcsWGL fn;
  ProcsWGL debug_fn;
  ExtensionsWGL ext;
};

class GL_EXPORT WGLApi {
 public:
  WGLApi();
  virtual ~WGLApi();

  virtual HGLRC wglCreateContextFn(HDC hdc) = 0;
  virtual HGLRC wglCreateLayerContextFn(HDC hdc, int iLayerPlane) = 0;
  virtual BOOL wglCopyContextFn(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) = 0;
  virtual BOOL wglDeleteContextFn(HGLRC hglrc) = 0;
  virtual HGLRC wglGetCurrentContextFn() = 0;
  virtual HDC wglGetCurrentDCFn() = 0;
  virtual BOOL wglMakeCurrentFn(HDC hdc, HGLRC hglrc) = 0;
  virtual BOOL wglShareListsFn(HGLRC hglrc1, HGLRC hglrc2) = 0;
  virtual BOOL wglSwapIntervalEXTFn(int interval) = 0;
  virtual BOOL wglSwapLayerBuffersFn(HDC hdc, UINT fuPlanes) = 0;
  virtual const char* wglGetExtensionsStringARBFn(HDC hDC) = 0;
  virtual const char* wglGetExtensionsStringEXTFn() = 0;
  virtual BOOL wglChoosePixelFormatARBFn(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats) = 0;
  virtual HPBUFFERARB wglCreatePbufferARBFn(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList) = 0;
  virtual HDC wglGetPbufferDCARBFn(HPBUFFERARB hPbuffer) = 0;
  virtual int wglReleasePbufferDCARBFn(HPBUFFERARB hPbuffer, HDC hDC) = 0;
  virtual BOOL wglDestroyPbufferARBFn(HPBUFFERARB hPbuffer) = 0;
  virtual BOOL wglQueryPbufferARBFn(HPBUFFERARB hPbuffer, int iAttribute, int* piValue) = 0;
};

}  // namespace gfx

#define wglCreateContext ::gfx::g_current_wgl_context->wglCreateContextFn
#define wglCreateLayerContext ::gfx::g_current_wgl_context->wglCreateLayerContextFn
#define wglCopyContext ::gfx::g_current_wgl_context->wglCopyContextFn
#define wglDeleteContext ::gfx::g_current_wgl_context->wglDeleteContextFn
#define wglGetCurrentContext ::gfx::g_current_wgl_context->wglGetCurrentContextFn
#define wglGetCurrentDC ::gfx::g_current_wgl_context->wglGetCurrentDCFn
#define wglMakeCurrent ::gfx::g_current_wgl_context->wglMakeCurrentFn
#define wglShareLists ::gfx::g_current_wgl_context->wglShareListsFn
#define wglSwapIntervalEXT ::gfx::g_current_wgl_context->wglSwapIntervalEXTFn
#define wglSwapLayerBuffers ::gfx::g_current_wgl_context->wglSwapLayerBuffersFn
#define wglGetExtensionsStringARB ::gfx::g_current_wgl_context->wglGetExtensionsStringARBFn
#define wglGetExtensionsStringEXT ::gfx::g_current_wgl_context->wglGetExtensionsStringEXTFn
#define wglChoosePixelFormatARB ::gfx::g_current_wgl_context->wglChoosePixelFormatARBFn
#define wglCreatePbufferARB ::gfx::g_current_wgl_context->wglCreatePbufferARBFn
#define wglGetPbufferDCARB ::gfx::g_current_wgl_context->wglGetPbufferDCARBFn
#define wglReleasePbufferDCARB ::gfx::g_current_wgl_context->wglReleasePbufferDCARBFn
#define wglDestroyPbufferARB ::gfx::g_current_wgl_context->wglDestroyPbufferARBFn
#define wglQueryPbufferARB ::gfx::g_current_wgl_context->wglQueryPbufferARBFn

#endif  //  UI_GFX_GL_GL_BINDINGS_AUTOGEN_WGL_H_
