#include<stdio.h>
typedef struct date
{
int jour;
int mois;
int annee;
}Date;
typedef struct
{
char nom[20];
char prenom[20];
int  cin;
Date date_naissance;
int mot_de_passe;
char role[30];
}utilisateur;
int ajouter_utilisateur(char *,filename);
int modifier_utilisateur(char *,int,filename);
int supprimer_utilisateur(char *,int,filename);
void afficher_utilisateur(char *,filename);
