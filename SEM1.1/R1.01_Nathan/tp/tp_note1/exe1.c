/*
* Nathan THUAULT 1B1 11 octobre 2023
* Pescription de traitement en fonction de la température et de la durée d'hospitalisation
*/

#include <stdio.h>
#include <stdlib.h>


// Initialisation des constantes

const int LIMITE_DUREE_1 = 2;
const int LIMITE_DUREE_2 = 5;

const float LIMITE_TEMPE_1 = 38.5;
const float LIMITE_TEMPE_2 = 39.5;

int main()
{
    // Declaration des variables

    float tempe;
    int duree;

    // Saisie des variables
    
    printf("Saisir la température : ");
    scanf("%f",&tempe);
    printf("Saisir la durée : ");
    scanf("%d",&duree);

    // Raisonnement par les conditions

    if(duree <= LIMITE_DUREE_1)
    {
        if(tempe <= LIMITE_TEMPE_1)
        {
            printf("Fin de traitement\n"); // Affichage de la prescription
        }
        else if (tempe <= LIMITE_TEMPE_2)
        {
            printf("Poursuite du traitement\n");
        }
        else
        {
            printf("Poursuite du traitement\n");
        }
    }
    else if(duree <= LIMITE_DUREE_2)
    {
        if(tempe <= LIMITE_TEMPE_1)
        {
            printf("Fin de traitement\n");
        }
        else if (tempe <= LIMITE_TEMPE_2)
        {
            printf("Poursuite du traitement\n");
        }
        else
        {
            printf("Changement de traitement\n");
        }
    }
    else
    {
        if(tempe <= LIMITE_TEMPE_1)
        {
            printf("A surveiller\n");
        }
        else if (tempe <= LIMITE_TEMPE_2)
        {
            printf("Analyses complémentaires\n");
        }
        else
        {
            printf("Analyses complémentaires\n");
        }
    }

    return EXIT_SUCCESS;
}