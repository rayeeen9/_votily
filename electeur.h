#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
struct date
{
    int day;
    char month[30];
    int year;
};
typedef struct date date;
struct election
{
    int id ;
    int nbre_habitant ;
    char municipalite[50];
    date date ;
    int nbr_conseillers;
};
typedef struct election election;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, election );
int modifier( char *, int, election );
int supprimer(char *, int );
election chercher(char *, int);

#endif // POINT_H_INCLUDED
