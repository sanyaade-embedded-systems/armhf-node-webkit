// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

  virtual HGLRC lCreateContext(HDC hdc) = 0;
  virtual HGLRC lCreateLayerContext(HDC hdc, int iLayerPlane) = 0;
  virtual BOOL lCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) = 0;
  virtual BOOL lDeleteContext(HGLRC hglrc) = 0;
  virtual HGLRC lGetCurrentContext() = 0;
  virtual HDC lGetCurrentDC() = 0;
  virtual BOOL lMakeCurrent(HDC hdc, HGLRC hglrc) = 0;
  virtual BOOL lShareLists(HGLRC hglrc1, HGLRC hglrc2) = 0;
  virtual BOOL lSwapIntervalEXT(int interval) = 0;
  virtual BOOL lSwapLayerBuffers(HDC hdc, UINT fuPlanes) = 0;
  virtual const char* lGetExtensionsStringARB(HDC hDC) = 0;
  virtual const char* lGetExtensionsStringEXT() = 0;
  virtual BOOL lChoosePixelFormatARB(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats) = 0;
  virtual HPBUFFERARB lCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList) = 0;
  virtual HDC lGetPbufferDCARB(HPBUFFERARB hPbuffer) = 0;
  virtual int lReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC) = 0;
  virtual BOOL lDestroyPbufferARB(HPBUFFERARB hPbuffer) = 0;
  virtual BOOL lQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int* piValue) = 0;

