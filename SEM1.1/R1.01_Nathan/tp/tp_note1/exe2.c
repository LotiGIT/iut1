/*
* Nathan THUAULT 1B1 11 octobre 2023
* Moyenne et maximum de températures sur n jours
*/

#include <stdio.h>
#include <stdlib.h>

// Initialisation des constantes

const float TEMPE_MIN = 35.0;
const float TEMPE_MAX = 43.0;

int main()
{
    // Declaration des variables
    int nbJours;
    int iteration;
    float tempe;
    float tempeMax;
    float tempeMoy;
    // Certaines variables doivent posseder des valeurs initiales
    iteration = 1;
    tempeMoy = 0;
    nbJours = -1;
    // Saisir un nombre de jours > 0

    while(nbJours <= 0)
    {
        printf("Saisir le nombre de jours : ");
        scanf("%d",&nbJours);
    }

    // Tant que iteration (le jour actuel) <= nbJours (le nombre total de jours)

    while(iteration <= nbJours)
    {
        // do while pour etre sur d'avoir une temperature de saisie avant de comparer la variable

        do
        {
            printf("Saisir la temperature du jour %d : ", iteration);
            scanf("%f",&tempe);

            if(tempe< TEMPE_MIN || tempe > TEMPE_MAX)
            {
                printf("Erreur ! Recommencez.\n");
            }

        } while(tempe < TEMPE_MIN || tempe > TEMPE_MAX);

        // Si c'est la premiere iteration on peut initialiser le max sur cette temperature

        if(iteration == 1)
        {
            tempeMax = tempe;
        }
        else if(tempeMax < tempe)
        {
            tempeMax = tempe;
        }

        tempeMoy = tempeMoy + tempe;
        iteration++;
    }

    tempeMoy = tempeMoy / nbJours; // nbJours strictement positif

    // Affichage du resultat

    printf("Temperature max du patient sur les %d jours : %3.1f\n", nbJours, tempeMax);
    printf("Temperature moyenne du patient sur les %d jours : %3.1f\n", nbJours, tempeMoy);

    return EXIT_SUCCESS;
}