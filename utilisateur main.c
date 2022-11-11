#include "Date.h"
#include"utilisateur.h"
#include<stdio.h>
#include<string.h>
int main()
{
utilisateur u1[50];
utilisateur u2[50];
int x=ajouter_utilisateur("utilisateur.txt",u1);
/*
    if(x==1)
        printf("\n ajout d'un utilisateur avec succés");
    else printf("\n echec ajout");
        */
    x=modifier_utilisateur("utilisateur.txt",u2 );

    if(x==1)
        printf("\n modification d'un utilisateur avec succés");
    else printf("\n echec modification");
    x=supprimer_utilisateur("utilisateur.txt" );
    if(x==1)
        printf("\n suppression d'un utilisateur avec succés");
    else printf("\n echec Suppression");
    afficher_utilisateur("utilisateur.txt");
    return 0;
}
