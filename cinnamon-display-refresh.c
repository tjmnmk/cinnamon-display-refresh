#define GNOME_DESKTOP_USE_UNSTABLE_API

#include <glib.h>
#include <libcinnamon-desktop/gnome-rr.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
  GnomeRRScreen *screen;
  GError *error;
  error = NULL;

  gtk_init(&argc, &argv);

  screen = gnome_rr_screen_new(gdk_screen_get_default(), &error);
  g_assert(error == NULL);
  gnome_rr_screen_refresh(screen, &error);
  g_assert(error == NULL);

  return 0;
}
