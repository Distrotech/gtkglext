/* GtkGLExt - OpenGL Extension to GTK+
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

#ifndef __GTK_GL_WIDGET_PARAM_H__
#define __GTK_GL_WIDGET_PARAM_H__

#include <gdk/gdk.h>

#include <gdk/gdkgl.h>

G_BEGIN_DECLS

typedef struct _GtkGLWidgetParam GtkGLWidgetParam;

#define GTK_TYPE_GL_WIDGET_PARAM (gtk_gl_widget_param_get_type ())

struct _GtkGLWidgetParam
{
  GdkGLConfig *glconfig;
  gint render_type;
  GdkGLContext *share_list;
  gboolean direct;
  gint *attrib_list;
};

GType gtk_gl_widget_param_get_type (void);

G_END_DECLS

#endif /* __GTK_GL_WIDGET_PARAM_H__ */
