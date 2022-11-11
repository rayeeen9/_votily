#ifndef LISTE_ELECTORALE_H_INCLUDED
#define LISTE_ELECTORALE_H_INCLUDED

typedef struct {
int id1;
int id2;
int id3;
int idtete;
char orientation [10];


}liste_electorale;

int ajouter(char * filename, liste_electorale l )
int modifier( char * filename, int id, liste_electorale nouv )
int supprimer(char * filename, int id)
int liste_electorale chercher(char * filename, int id)

#endif // LISTE_ELECTORALE_H_INCLUDED
