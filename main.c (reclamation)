#include <stdio.h>
#include <string.h>
#include"reclamation.h"
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *ajouter;
  GtkWidget *fontselectiondialog1;
  GtkWidget *fontselectiondialog2;
  GtkWidget *colorselectiondialog1;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  ajouter = create_ajouter ();
  gtk_widget_show (ajouter);
  fontselectiondialog1 = create_fontselectiondialog1 ();
  gtk_widget_show (fontselectiondialog1);
  fontselectiondialog2 = create_fontselectiondialog2 ();
  gtk_widget_show (fontselectiondialog2);
  colorselectiondialog1 = create_colorselectiondialog1 ();
  gtk_widget_show (colorselectiondialog1);

  gtk_main ();

int main()
{
    point p1= {"rouge",1,0,0},p2= {"noir",2,1,1},p3;
    int x=ajouter("reclamation.txt", p1);
    /*
    if(x==1)
        printf("\najout de point avec succ�s");
    else printf("\nechec ajout");
        */
    x=modifier("reclamation.txt",1,p2 );

    if(x==1)
        printf("\nModification de point avec succ�s");
    else printf("\nechec Modification");
    x=supprimer("reclamation.txt",1 );
    if(x==1)
        printf("\nSuppression de point avec succ�s");
    else printf("\nechec Suppression");
    p3=chercher("reclamation.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}
