#define N 5

#include <stdio.h>
#include <stdlib.h>

typedef int vecteur[N];

void remplirVecteur (vecteur v);
void afficherVecteur (vecteur v);
void sommeVecteur(vecteur v1, vecteur v2, vecteur somme);

int main()
{
    vecteur v1, v2, somme;
    remplirVecteur(v1);
    remplirVecteur(v2);

    sommeVecteur(v1,v2, somme);
    afficherVecteur(somme);

    return EXIT_SUCCESS;
}

void sommeVecteur(vecteur v1, vecteur v2, vecteur somme)
{
    
    for(int i = 0; i < N; i++)
    {
        somme[i] = v1[i] + v2[i];
    }
}

void remplirVecteur(vecteur v)
{
    int val;
    for(int i = 0; i < N; i++)
    {
        printf("Valeur n°%d : ",i);
        scanf("%d",&val);
        v[i] = val;
    }
}

void afficherVecteur(vecteur v)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d ",v[i]);
    }
        printf("\n");
}