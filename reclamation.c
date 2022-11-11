#include "reclamation.h"

int ajoute(char * filename, reclamation p )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
        fclose(f);
        return 1;
    }
    else return 0;
}
int edit( char * filename, int id, reclamation nouv )
{
    int tr=0;
    reclamation p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%d %s %d %d\n",nouv.id,nouv.couleur,nouv.x,nouv.y);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supp(char * filename, int id)
{
    int tr=0;
    reclamation p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
reclamation chercher(char * filename, int id)
{
    reclamation p;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}
