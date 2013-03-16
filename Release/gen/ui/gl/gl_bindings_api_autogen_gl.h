// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

  virtual void glActiveTextureFn(GLenum texture) OVERRIDE;
  virtual void glAttachShaderFn(GLuint program, GLuint shader) OVERRIDE;
  virtual void glBeginQueryFn(GLenum target, GLuint id) OVERRIDE;
  virtual void glBeginQueryARBFn(GLenum target, GLuint id) OVERRIDE;
  virtual void glBindAttribLocationFn(GLuint program, GLuint index, const char* name) OVERRIDE;
  virtual void glBindBufferFn(GLenum target, GLuint buffer) OVERRIDE;
  virtual void glBindFragDataLocationFn(GLuint program, GLuint colorNumber, const char* name) OVERRIDE;
  virtual void glBindFragDataLocationIndexedFn(GLuint program, GLuint colorNumber, GLuint index, const char* name) OVERRIDE;
  virtual void glBindFramebufferEXTFn(GLenum target, GLuint framebuffer) OVERRIDE;
  virtual void glBindRenderbufferEXTFn(GLenum target, GLuint renderbuffer) OVERRIDE;
  virtual void glBindTextureFn(GLenum target, GLuint texture) OVERRIDE;
  virtual void glBlendColorFn(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) OVERRIDE;
  virtual void glBlendEquationFn( GLenum mode ) OVERRIDE;
  virtual void glBlendEquationSeparateFn(GLenum modeRGB, GLenum modeAlpha) OVERRIDE;
  virtual void glBlendFuncFn(GLenum sfactor, GLenum dfactor) OVERRIDE;
  virtual void glBlendFuncSeparateFn(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) OVERRIDE;
  virtual void glBlitFramebufferEXTFn(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) OVERRIDE;
  virtual void glBlitFramebufferANGLEFn(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) OVERRIDE;
  virtual void glBufferDataFn(GLenum target, GLsizei size, const void* data, GLenum usage) OVERRIDE;
  virtual void glBufferSubDataFn(GLenum target, GLint offset, GLsizei size, const void* data) OVERRIDE;
  virtual GLenum glCheckFramebufferStatusEXTFn(GLenum target) OVERRIDE;
  virtual void glClearFn(GLbitfield mask) OVERRIDE;
  virtual void glClearColorFn(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) OVERRIDE;
  virtual void glClearDepthFn(GLclampd depth) OVERRIDE;
  virtual void glClearDepthfFn(GLclampf depth) OVERRIDE;
  virtual void glClearStencilFn(GLint s) OVERRIDE;
  virtual void glColorMaskFn(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) OVERRIDE;
  virtual void glCompileShaderFn(GLuint shader) OVERRIDE;
  virtual void glCompressedTexImage2DFn(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data) OVERRIDE;
  virtual void glCompressedTexSubImage2DFn(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data) OVERRIDE;
  virtual void glCopyTexImage2DFn(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) OVERRIDE;
  virtual void glCopyTexSubImage2DFn(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) OVERRIDE;
  virtual GLuint glCreateProgramFn(void) OVERRIDE;
  virtual GLuint glCreateShaderFn(GLenum type) OVERRIDE;
  virtual void glCullFaceFn(GLenum mode) OVERRIDE;
  virtual void glDeleteBuffersARBFn(GLsizei n, const GLuint* buffers) OVERRIDE;
  virtual void glDeleteFramebuffersEXTFn(GLsizei n, const GLuint* framebuffers) OVERRIDE;
  virtual void glDeleteProgramFn(GLuint program) OVERRIDE;
  virtual void glDeleteQueriesFn(GLsizei n, const GLuint* ids) OVERRIDE;
  virtual void glDeleteQueriesARBFn(GLsizei n, const GLuint* ids) OVERRIDE;
  virtual void glDeleteRenderbuffersEXTFn(GLsizei n, const GLuint* renderbuffers) OVERRIDE;
  virtual void glDeleteShaderFn(GLuint shader) OVERRIDE;
  virtual void glDeleteTexturesFn(GLsizei n, const GLuint* textures) OVERRIDE;
  virtual void glDepthFuncFn(GLenum func) OVERRIDE;
  virtual void glDepthMaskFn(GLboolean flag) OVERRIDE;
  virtual void glDepthRangeFn(GLclampd zNear, GLclampd zFar) OVERRIDE;
  virtual void glDepthRangefFn(GLclampf zNear, GLclampf zFar) OVERRIDE;
  virtual void glDetachShaderFn(GLuint program, GLuint shader) OVERRIDE;
  virtual void glDisableFn(GLenum cap) OVERRIDE;
  virtual void glDisableVertexAttribArrayFn(GLuint index) OVERRIDE;
  virtual void glDrawArraysFn(GLenum mode, GLint first, GLsizei count) OVERRIDE;
  virtual void glDrawBufferFn(GLenum mode) OVERRIDE;
  virtual void glDrawBuffersARBFn(GLsizei n, const GLenum* bufs) OVERRIDE;
  virtual void glDrawElementsFn(GLenum mode, GLsizei count, GLenum type, const void* indices) OVERRIDE;
  virtual void glEGLImageTargetTexture2DOESFn(GLenum target, GLeglImageOES image) OVERRIDE;
  virtual void glEGLImageTargetRenderbufferStorageOESFn(GLenum target, GLeglImageOES image) OVERRIDE;
  virtual void glEnableFn(GLenum cap) OVERRIDE;
  virtual void glEnableVertexAttribArrayFn(GLuint index) OVERRIDE;
  virtual void glEndQueryFn(GLenum target) OVERRIDE;
  virtual void glEndQueryARBFn(GLenum target) OVERRIDE;
  virtual void glFinishFn(void) OVERRIDE;
  virtual void glFlushFn(void) OVERRIDE;
  virtual void glFramebufferRenderbufferEXTFn(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) OVERRIDE;
  virtual void glFramebufferTexture2DEXTFn(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) OVERRIDE;
  virtual void glFrontFaceFn(GLenum mode) OVERRIDE;
  virtual void glGenBuffersARBFn(GLsizei n, GLuint* buffers) OVERRIDE;
  virtual void glGenQueriesFn(GLsizei n, GLuint* ids) OVERRIDE;
  virtual void glGenQueriesARBFn(GLsizei n, GLuint* ids) OVERRIDE;
  virtual void glGenerateMipmapEXTFn(GLenum target) OVERRIDE;
  virtual void glGenFramebuffersEXTFn(GLsizei n, GLuint* framebuffers) OVERRIDE;
  virtual void glGenRenderbuffersEXTFn(GLsizei n, GLuint* renderbuffers) OVERRIDE;
  virtual void glGenTexturesFn(GLsizei n, GLuint* textures) OVERRIDE;
  virtual void glGetActiveAttribFn(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) OVERRIDE;
  virtual void glGetActiveUniformFn(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, char* name) OVERRIDE;
  virtual void glGetAttachedShadersFn(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders) OVERRIDE;
  virtual GLint glGetAttribLocationFn(GLuint program, const char* name) OVERRIDE;
  virtual void glGetBooleanvFn(GLenum pname, GLboolean* params) OVERRIDE;
  virtual void glGetBufferParameterivFn(GLenum target, GLenum pname, GLint* params) OVERRIDE;
  virtual GLenum glGetErrorFn(void) OVERRIDE;
  virtual void glGetFloatvFn(GLenum pname, GLfloat* params) OVERRIDE;
  virtual void glGetFramebufferAttachmentParameterivEXTFn(GLenum target, GLenum attachment, GLenum pname, GLint* params) OVERRIDE;
  virtual GLenum glGetGraphicsResetStatusARBFn(void) OVERRIDE;
  virtual void glGetIntegervFn(GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetProgramBinaryFn(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, GLvoid* binary) OVERRIDE;
  virtual void glGetProgramivFn(GLuint program, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetProgramInfoLogFn(GLuint program, GLsizei bufsize, GLsizei* length, char* infolog) OVERRIDE;
  virtual void glGetQueryivFn(GLenum target, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetQueryivARBFn(GLenum target, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetQueryObjecti64vFn(GLuint id, GLenum pname, GLint64* params) OVERRIDE;
  virtual void glGetQueryObjectivFn(GLuint id, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetQueryObjectui64vFn(GLuint id, GLenum pname, GLuint64* params) OVERRIDE;
  virtual void glGetQueryObjectuivFn(GLuint id, GLenum pname, GLuint* params) OVERRIDE;
  virtual void glGetQueryObjectuivARBFn(GLuint id, GLenum pname, GLuint* params) OVERRIDE;
  virtual void glGetRenderbufferParameterivEXTFn(GLenum target, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetShaderivFn(GLuint shader, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetShaderInfoLogFn(GLuint shader, GLsizei bufsize, GLsizei* length, char* infolog) OVERRIDE;
  virtual void glGetShaderPrecisionFormatFn(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) OVERRIDE;
  virtual void glGetShaderSourceFn(GLuint shader, GLsizei bufsize, GLsizei* length, char* source) OVERRIDE;
  virtual const GLubyte* glGetStringFn(GLenum name) OVERRIDE;
  virtual void glGetTexLevelParameterfvFn(GLenum target, GLint level, GLenum pname, GLfloat* params) OVERRIDE;
  virtual void glGetTexLevelParameterivFn(GLenum target, GLint level, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetTexParameterfvFn(GLenum target, GLenum pname, GLfloat* params) OVERRIDE;
  virtual void glGetTexParameterivFn(GLenum target, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetTranslatedShaderSourceANGLEFn(GLuint shader, GLsizei bufsize, GLsizei* length, char* source) OVERRIDE;
  virtual void glGetUniformfvFn(GLuint program, GLint location, GLfloat* params) OVERRIDE;
  virtual void glGetUniformivFn(GLuint program, GLint location, GLint* params) OVERRIDE;
  virtual GLint glGetUniformLocationFn(GLuint program, const char* name) OVERRIDE;
  virtual void glGetVertexAttribfvFn(GLuint index, GLenum pname, GLfloat* params) OVERRIDE;
  virtual void glGetVertexAttribivFn(GLuint index, GLenum pname, GLint* params) OVERRIDE;
  virtual void glGetVertexAttribPointervFn(GLuint index, GLenum pname, void** pointer) OVERRIDE;
  virtual void glHintFn(GLenum target, GLenum mode) OVERRIDE;
  virtual GLboolean glIsBufferFn(GLuint buffer) OVERRIDE;
  virtual GLboolean glIsEnabledFn(GLenum cap) OVERRIDE;
  virtual GLboolean glIsFramebufferEXTFn(GLuint framebuffer) OVERRIDE;
  virtual GLboolean glIsProgramFn(GLuint program) OVERRIDE;
  virtual GLboolean glIsQueryARBFn(GLuint query) OVERRIDE;
  virtual GLboolean glIsRenderbufferEXTFn(GLuint renderbuffer) OVERRIDE;
  virtual GLboolean glIsShaderFn(GLuint shader) OVERRIDE;
  virtual GLboolean glIsTextureFn(GLuint texture) OVERRIDE;
  virtual void glLineWidthFn(GLfloat width) OVERRIDE;
  virtual void glLinkProgramFn(GLuint program) OVERRIDE;
  virtual void* glMapBufferFn(GLenum target, GLenum access) OVERRIDE;
  virtual void glPixelStoreiFn(GLenum pname, GLint param) OVERRIDE;
  virtual void glPointParameteriFn(GLenum pname, GLint param) OVERRIDE;
  virtual void glPolygonOffsetFn(GLfloat factor, GLfloat units) OVERRIDE;
  virtual void glProgramBinaryFn(GLuint program, GLenum binaryFormat, const GLvoid* binary, GLsizei length) OVERRIDE;
  virtual void glProgramParameteriFn(GLuint program, GLenum pname, GLint value) OVERRIDE;
  virtual void glQueryCounterFn(GLuint id, GLenum target) OVERRIDE;
  virtual void glReadBufferFn(GLenum src) OVERRIDE;
  virtual void glReadPixelsFn(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels) OVERRIDE;
  virtual void glReleaseShaderCompilerFn(void) OVERRIDE;
  virtual void glRenderbufferStorageMultisampleEXTFn(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glRenderbufferStorageMultisampleANGLEFn(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glRenderbufferStorageEXTFn(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glSampleCoverageFn(GLclampf value, GLboolean invert) OVERRIDE;
  virtual void glScissorFn(GLint x, GLint y, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glShaderBinaryFn(GLsizei n, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length) OVERRIDE;
  virtual void glShaderSourceFn(GLuint shader, GLsizei count, const char** str, const GLint* length) OVERRIDE;
  virtual void glStencilFuncFn(GLenum func, GLint ref, GLuint mask) OVERRIDE;
  virtual void glStencilFuncSeparateFn(GLenum face, GLenum func, GLint ref, GLuint mask) OVERRIDE;
  virtual void glStencilMaskFn(GLuint mask) OVERRIDE;
  virtual void glStencilMaskSeparateFn(GLenum face, GLuint mask) OVERRIDE;
  virtual void glStencilOpFn(GLenum fail, GLenum zfail, GLenum zpass) OVERRIDE;
  virtual void glStencilOpSeparateFn(GLenum face, GLenum fail, GLenum zfail, GLenum zpass) OVERRIDE;
  virtual void glTexImage2DFn(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels) OVERRIDE;
  virtual void glTexParameterfFn(GLenum target, GLenum pname, GLfloat param) OVERRIDE;
  virtual void glTexParameterfvFn(GLenum target, GLenum pname, const GLfloat* params) OVERRIDE;
  virtual void glTexParameteriFn(GLenum target, GLenum pname, GLint param) OVERRIDE;
  virtual void glTexParameterivFn(GLenum target, GLenum pname, const GLint* params) OVERRIDE;
  virtual void glTexStorage2DEXTFn(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glTexSubImage2DFn(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels) OVERRIDE;
  virtual void glUniform1fFn(GLint location, GLfloat x) OVERRIDE;
  virtual void glUniform1fvFn(GLint location, GLsizei count, const GLfloat* v) OVERRIDE;
  virtual void glUniform1iFn(GLint location, GLint x) OVERRIDE;
  virtual void glUniform1ivFn(GLint location, GLsizei count, const GLint* v) OVERRIDE;
  virtual void glUniform2fFn(GLint location, GLfloat x, GLfloat y) OVERRIDE;
  virtual void glUniform2fvFn(GLint location, GLsizei count, const GLfloat* v) OVERRIDE;
  virtual void glUniform2iFn(GLint location, GLint x, GLint y) OVERRIDE;
  virtual void glUniform2ivFn(GLint location, GLsizei count, const GLint* v) OVERRIDE;
  virtual void glUniform3fFn(GLint location, GLfloat x, GLfloat y, GLfloat z) OVERRIDE;
  virtual void glUniform3fvFn(GLint location, GLsizei count, const GLfloat* v) OVERRIDE;
  virtual void glUniform3iFn(GLint location, GLint x, GLint y, GLint z) OVERRIDE;
  virtual void glUniform3ivFn(GLint location, GLsizei count, const GLint* v) OVERRIDE;
  virtual void glUniform4fFn(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) OVERRIDE;
  virtual void glUniform4fvFn(GLint location, GLsizei count, const GLfloat* v) OVERRIDE;
  virtual void glUniform4iFn(GLint location, GLint x, GLint y, GLint z, GLint w) OVERRIDE;
  virtual void glUniform4ivFn(GLint location, GLsizei count, const GLint* v) OVERRIDE;
  virtual void glUniformMatrix2fvFn(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) OVERRIDE;
  virtual void glUniformMatrix3fvFn(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) OVERRIDE;
  virtual void glUniformMatrix4fvFn(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) OVERRIDE;
  virtual GLboolean glUnmapBufferFn(GLenum target) OVERRIDE;
  virtual void glUseProgramFn(GLuint program) OVERRIDE;
  virtual void glValidateProgramFn(GLuint program) OVERRIDE;
  virtual void glVertexAttrib1fFn(GLuint indx, GLfloat x) OVERRIDE;
  virtual void glVertexAttrib1fvFn(GLuint indx, const GLfloat* values) OVERRIDE;
  virtual void glVertexAttrib2fFn(GLuint indx, GLfloat x, GLfloat y) OVERRIDE;
  virtual void glVertexAttrib2fvFn(GLuint indx, const GLfloat* values) OVERRIDE;
  virtual void glVertexAttrib3fFn(GLuint indx, GLfloat x, GLfloat y, GLfloat z) OVERRIDE;
  virtual void glVertexAttrib3fvFn(GLuint indx, const GLfloat* values) OVERRIDE;
  virtual void glVertexAttrib4fFn(GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w) OVERRIDE;
  virtual void glVertexAttrib4fvFn(GLuint indx, const GLfloat* values) OVERRIDE;
  virtual void glVertexAttribPointerFn(GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* ptr) OVERRIDE;
  virtual void glViewportFn(GLint x, GLint y, GLsizei width, GLsizei height) OVERRIDE;
  virtual void glGenFencesNVFn(GLsizei n, GLuint* fences) OVERRIDE;
  virtual void glDeleteFencesNVFn(GLsizei n, const GLuint* fences) OVERRIDE;
  virtual void glSetFenceNVFn(GLuint fence, GLenum condition) OVERRIDE;
  virtual GLboolean glTestFenceNVFn(GLuint fence) OVERRIDE;
  virtual void glFinishFenceNVFn(GLuint fence) OVERRIDE;
  virtual GLboolean glIsFenceNVFn(GLuint fence) OVERRIDE;
  virtual void glGetFenceivNVFn(GLuint fence, GLenum pname, GLint* params) OVERRIDE;
  virtual GLsync glFenceSyncFn(GLenum condition, GLbitfield flags) OVERRIDE;
  virtual void glDeleteSyncFn(GLsync sync) OVERRIDE;
  virtual void glGetSyncivFn(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length,GLint* values) OVERRIDE;
  virtual void glDrawArraysInstancedANGLEFn(GLenum mode, GLint first, GLsizei count, GLsizei primcount) OVERRIDE;
  virtual void glDrawElementsInstancedANGLEFn(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount) OVERRIDE;
  virtual void glVertexAttribDivisorANGLEFn(GLuint index, GLuint divisor) OVERRIDE;
  virtual void glGenVertexArraysOESFn(GLsizei n, GLuint* arrays) OVERRIDE;
  virtual void glDeleteVertexArraysOESFn(GLsizei n, const GLuint* arrays) OVERRIDE;
  virtual void glBindVertexArrayOESFn(GLuint array) OVERRIDE;
  virtual GLboolean glIsVertexArrayOESFn(GLuint array) OVERRIDE;
  virtual void glDiscardFramebufferEXTFn(GLenum target, GLsizei numAttachments, const GLenum* attachments) OVERRIDE;

