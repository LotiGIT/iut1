#include <stdio.h>
#include <stdlib.h>


#define N 5
typedef int vecteur[N] ;

void remplirVecteur (vecteur v);
void afficherVecteur (vecteur v);
void sommeVecteur (vecteur v1, vecteur v2, vecteur vSomme);


int main()
{
    vecteur v1;
    vecteur v2;
    vecteur vSomme;

    remplirVecteur(v1);
    remplirVecteur(v2);
    sommeVecteur(v1, v2, vSomme);
    afficherVecteur(vSomme);

    return EXIT_SUCCESS;


}


void remplirVecteur(vecteur v )
{
    int chiffre;
    int i;

    printf("Remplir la case : ");
    for (i=0; i<N; i++)
    {
        scanf("%d", &chiffre);
        v[i] = chiffre;
    }
    
}

void afficherVecteur(vecteur v)
{
    int i;

    printf("Coefficients du vecteurs : ");
    for ( i = 0; i < N; i++)
    {
        printf("%3d,", v[i]);
    }
    
}

void sommeVecteur(vecteur v1, vecteur v2, vecteur vSomme)
{
    int i;
    for (i = 0; i < N; i++)
    {
        vSomme[i] = v1[i] + v2[i];
    }
    
    
}