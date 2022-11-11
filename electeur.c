# _votily#include <stdio.h>
#include <string.h>
#include"electeur.h"

int main()
{
    point p1= {"rouge",1,0,0},p2= {"noir",2,1,1},p3;
    int x=ajouter("electeur.h", p1);
    /*
    if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("a",1,p2 );

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
    x=supprimer("electeur.h",1 );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");
    p3=chercher("electeur.h",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}
