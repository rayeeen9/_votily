#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char couleur [20];
    int id, x,y;
} reclamation;
//le type de  retour int c'est pour indiquer si la tache a �t� r�alis�e avec succ�s ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajout(char *, point );
int edit( char *, int, point );
int supp(char *, int );
reclamation chercher(char *, int);

#endif // RECLAMATION_H_INCLUDED
