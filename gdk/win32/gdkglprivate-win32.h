/* GdkGLExt - OpenGL Extension to GDK
 * Copyright (C) 2002  Naofumi Yasufuku
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.
 */

#ifndef __GDK_GL_PRIVATE_WIN32_H__
#define __GDK_GL_PRIVATE_WIN32_H__

#include <gdk/gdkprivate.h>

#include <gdk/gdkglprivate.h>
#include <gdk/win32/gdkglwin32.h>

G_BEGIN_DECLS

int _gdk_win32_gl_config_find_pixel_format (HDC                          hdc,
					    CONST PIXELFORMATDESCRIPTOR* req_pfd,
					    PIXELFORMATDESCRIPTOR*       found_pfd);

GdkGLContext *_gdk_win32_gl_context_new (GdkGLDrawable *gldrawable,
					 GdkGLConfig   *glconfig,
					 GdkGLContext  *share_list,
					 gboolean       direct,
					 gint           render_type);

HDC     _gdk_win32_gl_pixmap_hdc_get     (GdkGLDrawable *gldrawable);
void    _gdk_win32_gl_pixmap_hdc_release (GdkGLDrawable *gldrawable);

#define GDK_GL_PIXMAP_HDC_GET(gldrawable)     (_gdk_win32_gl_pixmap_hdc_get (gldrawable))
#define GDK_GL_PIXMAP_HDC_RELEASE(gldrawable) ((void)0)

HDC     _gdk_win32_gl_window_hdc_get     (GdkGLDrawable *gldrawable);
void    _gdk_win32_gl_window_hdc_release (GdkGLDrawable *gldrawable);

#define GDK_GL_WINDOW_HDC_GET(gldrawable)     (_gdk_win32_gl_window_hdc_get (gldrawable))
#define GDK_GL_WINDOW_HDC_RELEASE(gldrawable) (_gdk_win32_gl_window_hdc_release (gldrawable))

G_END_DECLS

#endif /* __GDK_GL_PRIVATE_WIN32_H__ */
