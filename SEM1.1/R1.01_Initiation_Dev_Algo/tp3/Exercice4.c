// Exercice 4

#include <stdio.h>
#include <stdlib.h>

const int FIN = -1;

int main()
{
    int compteur, valeurs, somme;
    float moyenne;
    somme = 0;

    printf("Entrez vos valeurs :");
    scanf("%d", &valeurs);

    while(valeurs != FIN)
    {
        
        somme = somme + valeurs;
        compteur = compteur +1;
        scanf("%d", &valeurs);
        
    }
    if(compteur != 0)
    {
        moyenne = somme / (compteur*1.0);
        printf("La moyenne est de : %.2f \n", moyenne);
    }
    else
    { 
        printf("ERREUR \n");
    }

    return EXIT_SUCCESS;
}

// dans l'exo 5 inclure la bibliothèque <limit.h>