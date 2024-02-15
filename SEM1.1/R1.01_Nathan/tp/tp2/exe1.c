/**
* @brief mon premier programme C
*/
#include <stdio.h>
#include <stdlib.h>

const float ESSENCE_KM = 1.2;
const int ESSENCE_JOUR = 10;

const float DIESEL_KM = 1.0;
const float DIESEL_JOUR = 15;

int main()
{
    // Declaration des variables
    int km, jours;
    float prix_e, prix_d;

    // Saisie de donnees
    printf("km :");
    scanf("%d",&km);
    printf("Nombre de jours :");
    scanf("%d",&jours);

    prix_e = ESSENCE_KM*km + jours*ESSENCE_JOUR;
    prix_d = DIESEL_KM*km + jours*DIESEL_JOUR;

    if(prix_e < prix_d)
    {
        printf("vehicule essence moins couteux");
    }
    else if(prix_e > prix_d)
    {
        printf("vehicule diesel moins couteux");
    }
    else
    {
        printf("egalite");
    }

    return 0;
}