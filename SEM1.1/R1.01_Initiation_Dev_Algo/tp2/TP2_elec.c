#include <stdio.h>
#include <stdlib.h>


const float prix10 = 0.1;
const float prix15 = 0.15;
const float prix20 = 0.2;
const float TVA = 1.2;
const int location = 15;
const int SEUIL1 = 100;
const int SEUIL2 = 150;


int main ()
{
   int nbkWh;
   printf("Quantité de kWh consommée ? :");
   scanf("%d", &nbkWh);
   float TARIF1 = (nbkWh*prix10+location)

    if (nbkWh <= 100)
    {
        float prix = (nbkWh*prix10+location)*TVA;
        printf("Tu payes : %.2f €\n", prix);
    }
    else if (nbkWh > 100 && nbkWh <= 150)
    {
        float prix = (nbkWh*prix10+(nbkWh(-100)*prix15+location))*TVA;
        printf("Tu payes : %.2f €\n", prix);
    }
    else if (nbkWh > 150)
    {
        float prix =((nbkWh*prix10+(nbkWh(-100)*prix15+location))+((nbkWh-150)*prix20+location))*TVA;
        printf("Tu payes : %.2f €\n", prix);
    }
    return(EXIT_SUCCESS);


    
}