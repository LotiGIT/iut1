#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define N 3
#define TAILLE (N*N)
typedef struct 
{
    int valeur;
    bool candidats[TAILLE + 1];
    int nbCandidats;
} tCase2;

typedef tCase2 tGrille[TAILLE][TAILLE];

void ajouterCandidat(tCase2* laCase, int* val);
void retirerCandidat(tCase2* laCase, int* val);
int estCandidat(tCase2 laCase, int val);
int nbCandidat(tCase2 laCase);

int main()
{
    tGrille g;
    bool progression;
    int nbCasesVides;

    nbCasesVides = chargerGrille(g);
    initialiserCandidats(g);
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


void ajouterCandidat(tCase2* laCase, int* val)
{

}

void retirerCandidat(tCase2* laCase, int* val)
{

}

int estCandidat(tCase2 laCase, int val)
{

    return ;
}


int nbCandidat(tCase2 laCase)
{

    return ;
}

