#include"utilisateur.h"
#include<stdio.h>
int ajouter_ utilisateur(char *filename,utilisateur u)
{
FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %s %d %d %d \n",u.nom,u.prenom,u.cin, u.mot_de_passe,u.role,u.date_naissance.jour,u.date_naissance.mois,u.date_naissance.annee );
        fclose(f);
        return 1;
    }
    else return 0;
int modifier( char * filename, int cin, utilisateur nouv )
{
    int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
    while(fscanf(f,"%s %s %d %d %s %d %d %d\n",&u.nom,&u.prenom,&u.cin, &u.mot_de_passe,&u.role,&u.date_naissance.jour,&u.date_naissance.mois,&u.date_naissance.annee)!=EOF)
        {
            if(u.cin== cin)
            {
                fprintf(f2,"%s %s %d %d %s %d %d %d \n",nouv.nom,nouv.prenom, nouv.cin,nouv.mot_de_passe,nouv.role,nouv.date_naissance.jour, nouv.date_naissance.mois,nouv.date_naissance.annee);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %s %d %d %d\n",u.nom,u.prenom,u.cin, u.mot_de_passe,&u.role,u.date_naissance.jour,u.date_naissance.mois,u.date_naissance.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int cin)
{
    int tr=0;
    utilisateur u;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %s %d %d %d\n",&u.nom,&u.prenom,&u.cin, &u.mot_de_passe,&u.role,&u.date_naissance.jour,&u.date_naissance.mois,&u.date_naissance.annee)!=EOF)
        {
            if(u.cin== cin)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %s %d %d %d \n",nouv.nom,nouv.prenom, nouv.cin,nouv.mot_de_passe,nouv.role,nouv.date_naissance.jour, nouv.date_naissance.mois,nouv.date_naissance.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
utilisateur afficher(char * filename, int cin)
{
    utilisateur u;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
 fprintf(f2,"%s %s %d %d %s %d %d %d\n",u.nom,u.prenom,u.cin, u.mot_de_passe,&u.role,u.date_naissance.jour,u.date_naissance.mois,u.date_naissance.annee);
fclose(f);
