// based on code from mea

#include <EGL/egl.h>

EGLDisplay EGLAPIENTRY eglGetDisplay(EGLNativeDisplayType nativeDisplay) {
	return NULL;
}
EGLBoolean EGLAPIENTRY eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor) {
	//RETURN_EGL_SUCCESS(disp, EGL_TRUE);
	return true;
}
EGLBoolean EGLAPIENTRY eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value) {
}
EGLBoolean EGLAPIENTRY eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value) {
}
EGLContext EGLAPIENTRY eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_list, const EGLint *attrib_list) {
}
EGLBoolean EGLAPIENTRY eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx) {
}
EGLSurface EGLAPIENTRY eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType window, const EGLint *attrib_list) {
}
#include <GLES/gl.h>

GL_API void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param) {
}
GL_API const GLubyte * GL_APIENTRY glGetString (GLenum name) {
}
GL_API void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height) {
}
GL_API void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height) {
}
GL_API void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GL_API void GL_APIENTRY glClear (GLbitfield mask) {
}
GL_API void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GL_API void GL_APIENTRY glLineWidth (GLfloat width) {
}
GL_API void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices) {
}
GL_API void GL_APIENTRY glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GL_API void GL_APIENTRY glEnableClientState (GLenum array) {
}
GL_API void GL_APIENTRY glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
}
GL_API void GL_APIENTRY glDepthRangef (GLclampf zNear, GLclampf zFar) {
}
GL_API void GL_APIENTRY glPopMatrix (void) {
}
GL_API void GL_APIENTRY glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GL_API void GL_APIENTRY glDisableClientState (GLenum array) {
}
GL_API void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask) {}
GL_API void GL_APIENTRY glEnable (GLenum cap) {}
GL_API void GL_APIENTRY glDisable (GLenum cap) {}
GL_API void GL_APIENTRY glLoadIdentity (void) {}
GL_API void GL_APIENTRY glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){}
GL_API void GL_APIENTRY glLoadMatrixf (const GLfloat *m){}
GL_API void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count){}
GL_API void GL_APIENTRY glCullFace (GLenum mode) {}
GL_API void GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha){}
GL_API void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass){}
GL_API void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean *params){}
GL_API void GL_APIENTRY glClearDepthf (GLclampf depth){}
GL_API void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units){}
GL_API void GL_APIENTRY glTranslatef (GLfloat x, GLfloat y, GLfloat z){}
GL_API void GL_APIENTRY glDepthFunc (GLenum func){}
GL_API void GL_APIENTRY glDepthMask (GLboolean flag){}
GL_API GLenum GL_APIENTRY glGetError (void){}
GL_API void GL_APIENTRY glGetIntegerv (GLenum pname, GLint *params){}
GL_API void GL_APIENTRY glPolygonOffsetx (GLfixed factor, GLfixed units){}
GL_API void GL_APIENTRY glPushMatrix (void){}
GL_API void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels){}
GL_API void GL_APIENTRY glShadeModel (GLenum mode){}
GL_API void GL_APIENTRY glPolygonOffsetxOES (GLfixed factor, GLfixed units){}
GL_API void GL_APIENTRY glClearDepthfOES (GLclampf depth){}
EGLAPI EGLint EGLAPIENTRY eglGetError(void){}
GL_API void GL_APIENTRY glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha){}
GL_API void GL_APIENTRY glOrthof (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar){}
GL_API void GL_APIENTRY glBindTexture (GLenum target, GLuint texture){}
GL_API void GL_APIENTRY glClearColorx (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha){}
GL_API void GL_APIENTRY glClearStencil (GLint s){}
GL_API void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint *textures){}
GL_API void GL_APIENTRY glMatrixMode (GLenum mode){}
GL_API void GL_APIENTRY glStencilMask (GLuint mask){}
GL_API void GL_APIENTRY glAlphaFunc (GLenum func, GLclampf ref){}
GL_API void GL_APIENTRY glClipPlanef (GLenum plane, const GLfloat *equation){}
GL_API void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor){}
GL_API void GL_APIENTRY glFinish (void){}
GL_API void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels){}
GL_API void GL_APIENTRY glTexEnvf (GLenum target, GLenum pname, GLfloat param){}
GL_API void GL_APIENTRY glActiveTexture (GLenum texture){}
GL_API void GL_APIENTRY glClientActiveTexture (GLenum texture){}

