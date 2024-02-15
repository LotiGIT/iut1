#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const float TARIF_A = 8.50;
const float TARIF_B = 10.50;
const float TARIF_C = 15.00;
const float TARIF_D = 21.00;

const int SEUIL_1 = 80;
const int SEUIL_2 = 120;

int main()
{
    int surface;
    float tarif;
    char elec[4];

    tarif = 0;

    printf("Saisir la surface : ");
    scanf("%d",&surface);
    printf("Saisir oui si vous aviez l'electricite sinon saisir non : ");
    scanf("%s",elec);

    if(strcmp(elec,"non") == 0)
    {
        if (surface <= SEUIL_1)
        {
            tarif = TARIF_A;
        }
        else if (surface <= SEUIL_2)
        {
            tarif = TARIF_B;
        }
        else if (surface > SEUIL_2)
        {
            tarif = TARIF_D;
        }
    }
    else if (strcmp(elec,"oui") == 0)
    {
        if (surface <= SEUIL_1)
        {
            tarif = TARIF_B;
        }
        else if (surface <= SEUIL_2)
        {
            tarif = TARIF_C;
        }
        else if (surface > SEUIL_2)
        {
            tarif = TARIF_D;
        }
    }
    else
    {
        printf("Erreur dans la saisie");
    }
    

    printf("Le tarif sera de %4.2f euros", tarif);

    return EXIT_SUCCESS;
}