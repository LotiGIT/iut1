#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define N 3
#define TAILLE (N*N)
typedef struct 
{
    int valeur;
    int candidats[TAILLE];
    int nbCandidats;
} tCase1;

typedef tCase1 tGrille[TAILLE][TAILLE];

void chargerGrille(tGrille g);
void ajouterCandidat(tCase1* laCase, int* val);
void retirerCandidat(tCase1* laCase, int* val);
int estCandidat(tCase1 laCase, int val);
int nbCandidat(tCase1 laCase);
void afficherGrille(tGrille g);
void initialiserCandidats(tCase1 cand);

int main()
{
    tGrille g;
    tCase1 cand;
    bool progression;
    int nbCasesVides;

    chargerGrille(g) = nbCasesVides;
    initialiserCandidats(cand);
    progression = true;

    while(nbCasesVides!=0 && progression)
    {
        progression = false;

        for ()
        {

        }
    }
    return EXIT_SUCCESS;
}

void ajouterCandidat(tCase1* laCase, int* val)
{

}

void retirerCandidat(tCase1* laCase, int* val)
{
    int iteration;
    bool valeurTrouve;

    iteration = 1;
    valeurTrouve = false;

    while (!valeurTrouve && (iteration <= laCase->nbCandidats))
    {
        valeurTrouve = false;
        if (laCase->candidats[iteration]==val)
        {
            valeurTrouve = true;
            laCase->candidats[iteration] = laCase->candidats[laCase->nbCandidats];
            laCase->nbCandidats = laCase->nbCandidats-1;
        }
        iteration = iteration++;
    }
    
}

int estCandidat(tCase1 laCase, int val)
{

    return ;
}


int nbCandidat(tCase1 laCase)
{

    return ;
}

void chargerGrille(tGrille g) 
{
    char nomFichier[30];
    FILE *f;

    printf("Nom du fichier ? ");
    scanf("%s", nomFichier);

    f = fopen(nomFichier, "rb");

    if (f == NULL)
    {
        printf("\n ERREUR sur le fichier %s\n", nomFichier);
    }
    else
    {
        fread(g, sizeof(int), TAILLE * TAILLE, f);
    }
    fclose(f);
}


void initialiserCandidats(tCase1 cand)
{
    
    
}