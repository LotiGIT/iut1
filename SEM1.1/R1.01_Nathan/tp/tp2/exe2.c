#include <stdio.h>
#include <stdlib.h>

const int FORFAIT = 1500;
const float TVA = 1.20;

const int ECH1 = 100;
const int ECH1_taux = 10;

const int ECH2 = 150;
const int ECH2_taux = 15;

const int ECH3_taux = 20;

int main()
{
    int conso;
    float facturation;

    printf("Consommation :");
    scanf("%d",&conso);

    if(conso <= ECH1)
    {
        facturation = (FORFAIT + conso*ECH1_taux);
    }
    else if(conso <= ECH2)
    {
        facturation = FORFAIT + ECH1*ECH1_taux;
        conso-=ECH1;
        facturation += (conso*ECH2_taux);
    }
    else if(conso > ECH2)
    {
        facturation = FORFAIT + ECH1*ECH1_taux + (ECH2-ECH1)*ECH2_taux;
        conso-=ECH2;
        facturation += (conso*ECH3_taux);
    }
    else
    {
        printf("Valeur de consommation rentrée erronée");
    }

    facturation = facturation * TVA;
    facturation = facturation/100.0; // conversion euro
    
    printf("%5.2f euros", facturation);

    return 0;
}