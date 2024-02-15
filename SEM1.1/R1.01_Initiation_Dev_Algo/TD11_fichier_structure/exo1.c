#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define MAX_ANNONCES 3000
#define MAX_LIGNES 200
#define MAX_CHAINE 100

typedef char t_champ [MAX_CHAINE];
typedef char t_ligne [MAX_LIGNES];

typedef struct 
{
    int id;
    t_champ marque, designation;
    int km;
    int prix;
    int annee;
}t_annonce;

typedef struct 
{
    t_annonce tab_annonce[MAX_ANNONCES];
    int nb;
}t_stock;

const int ANNONCE_VIDE 0;

void initstock(t_annonce all);
void lectureTexte1();
void lectureTexte2();
void lectureTexte3();
void afficheAnnonce();
void afficheAnnoncesMarque();
void sauvegardeBinaire();
void lectureBinaire();
void saisieAnnonce();
void ajoutAnnonceFichierBainaire();



int main ()
{

    return EXIT_SUCCESS;
}