#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAILLE 10


typedef float t_vecteur[TAILLE];
typedef float t_matrice[TAILLE][TAILLE];

void afficherVecteur(t_vecteur vect);
void afficherMatrice(t_matrice mEvolution);
void produitVectMat(t_vecteur vInitial, t_matrice mEvolution, t_vecteur vResultat);
void copiervecteur(t_vecteur vInitial,t_vecteur vResultat);

int main()
{

    t_vecteur vInit={35, 25, 20, 20};
    t_matrice mEvo={
    {0.9, 0.06, 0.08, 0.05}, 
    {0.03, 0.8, 0.02, 0.03}, 
    {0.02, 0.03, 0.75, 0.04}, 
    {0.05, 0.11, 0.15, 0.88}};
    
    afficherVecteur(vInit);
    afficherMatrice(mEvo);
}

void afficherVecteur(t_vecteur vect)
{
    int nb = 4;
    for (int i = 0; i <nb; i++)
    {
        printf("%2.2f  ", vect[i]);
    }
    printf("\n");
    
}

void afficherMatrice(t_matrice mEvolution)
{
    int nb;
    nb=4;
    for (int i = 0; i <nb; i++)
    {
        for (int j = 0; j < nb; j++)
        {
            printf("%2.2f  ", mEvolution[i][j]);
        }
        printf("\n");
    }
    
}

void produitVectMat(t_vecteur vInitial, t_matrice mEvolution, t_vecteur vResultat)
{
    int nb;
    nb = 4;
    float res;
    res= 0;

   for (int i = 0; i < nb; i++)
   {
        for (int p = 0; p < nb; p++)
        {
            res = res + (vInitial[i]* mEvolution[i][p]);
            
        }
        vResultat[i] = res;
        res= 0;
   }
   
}

void copiervecteur(t_vecteur vInitial,t_vecteur vResultat)
{
    int nb;
    nb = 4;

    for (int i = 0; i < nb; i++)
    {
        vResultat[i] = vInitial[i];
    }
    
}


