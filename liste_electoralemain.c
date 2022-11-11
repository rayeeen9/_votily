#include "liste_electorale.h"

int ajouter(char * filename, liste_electorale l )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s\n",l.id1,l.id2,l.id3,l.idtete,l.orientation);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, liste_electorale nouv )
{
    int tr=0;
    liste_electorale l;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s\n",&l.id1,&l.id2,&l.id3,&l.idtete,&l.orientation)!=EOF)
        {
            if(l.id== id)
            {
                fprintf(f2,"%d %d %d %d %s\n",nouv.id1,nouv.id2,nouv.id3,nouv.idtete,nouv.orientation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s \n",l.id1,l.id2,l.id3,l.idtete,l.orientation);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    liste_electorale l;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s\n",&l.id1,l.id2,&l.id3,&l.idtete,&l.orientation)!=EOF)
        {
            if(l.id== id)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %s \n",l.id1,l.id2,l.id3,l.idtete,l.orientation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
int liste_electorale chercher(char * filename, int id)
{
    liste_electorale l;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s\n",&l.id1,l.id2,&l.id3,&l.idtete,l.orientation)!=EOF)
        {
            if(l.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        l.id=-1;
    return l;

}
