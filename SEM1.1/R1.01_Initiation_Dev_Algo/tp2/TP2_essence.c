#include <stdio.h>
#include <stdlib.h>


const int prixjourneeessence=10 ;
const int prixjourneediesel = 15 ;
const float prixkmsessence = 1.2;
const float prixkmsdiesel = 1.0;


int main ()
{
    int nbkilometres, nbjours;
    printf ("Combien de kilomètres parcourus ? :");
    scanf ("%d", &nbkilometres);
    printf("Combien de jours es-tu parti ? :");
    scanf ("%d", &nbjours);
    float resE = (nbkilometres*prixkmsessence)+(prixjourneeessence*nbjours);
    float resD = (nbkilometres*prixkmsdiesel)+(prixjourneediesel*nbjours);

    printf("Coût essence : %.2f€\n", resE);
    printf("Coût diesel  : %.2f€\n", resD);

    if(resD<resE)
    {
        printf("Véhicule diesel moins coûteux");
    }
    else if (resD == resE)
    {
        printf("égalité");
    }
    else 
    {
        printf("véhicule essence moins coûteux");
    }
    return (EXIT_SUCCESS);
}