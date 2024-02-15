#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10 

const int nombreSport = 4;

typedef float t_vecteur[TAILLE];
typedef float t_matrice[TAILLE][TAILLE];

void afficherVecteur(t_vecteur vect, int nb);
void afficherMatrice(t_matrice mEvolution, int nb);
void produitVectMat(t_vecteur vInitial, t_matrice mEvolution, t_vecteur vResultat, int nb);
void copierVecteur(t_vecteur vInitial, t_vecteur vResultat, int nb);

int main()
{
    t_vecteur vInitial = {35, 25, 20, 20};
    t_vecteur vResultat;
    t_matrice mEvolution = {
        {0.9, 0.06, 0.08, 0.05},
        {0.03, 0.8, 0.02, 0.03},
        {0.02, 0.03, 0.75, 0.04},
        {0.05, 0.11, 0.15, 0.88}};

    afficherVecteur(vInitial,nombreSport);
    afficherMatrice(mEvolution,nombreSport);

    produitVectMat(vInitial, mEvolution, vResultat, nombreSport);
    afficherVecteur(vResultat,nombreSport);

    for (int i = 0; i < 30; i++)
    {
        produitVectMat(vInitial, mEvolution, vResultat, nombreSport);
        copierVecteur(vResultat,vInitial,nombreSport);        
    }
    
    afficherVecteur(vResultat,nombreSport);
}

void copierVecteur(t_vecteur vInitial, t_vecteur vResultat, int nb)
{
    for (int i = 0; i < nb; i++)
    {
        vResultat[i] = vInitial[i];
    }
}

void produitVectMat(t_vecteur vInitial, t_matrice mEvolution, t_vecteur vResultat, int nb)
{
    float resultatProduit;
    for (int i = 0; i < nb; i++)
    {
        resultatProduit = 0;
        for (int j = 0; j < nb; j++)
        {
            resultatProduit += vInitial[j]*mEvolution[i][j];
        }
        vResultat[i] = resultatProduit;
    }    
}

void afficherMatrice(t_matrice mEvolution, int nb)
{
    printf("---Matrice---\n");
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < nb; j++)
        {
            printf("%2.2f ", mEvolution[i][j]);
        }
        printf("\n");
    }
    printf("-------------\n");
}

void afficherVecteur(t_vecteur vect, int nb)
{
    printf("---Vecteur---\n");
    for (int i = 0; i < nb; i++)
    {
        printf("%2.2f ", vect[i]);
    }
    printf("\n-------------\n");
}
