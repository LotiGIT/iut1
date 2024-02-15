#include <stdlib.h>
#include <stdio.h>
#include <string.h>



const float T1 = 38.5;
const float T2 = 39.5;
const int JOUR2 = 2;
const int JOUR5 = 5;

 
int main ()
{
    float temp;
    int nbjours;
    


    printf("Quelle est votre température ? : ");
    scanf("%f", &temp);

    printf("Nombre de jours d'hospitalisation :");
    scanf("%d", &nbjours);

    if ((temp <= 38.5) && (nbjours <=5))
    {
        printf("C'est la fin du traitement\n");
    }
    else if ((temp > T1) && (nbjours <= JOUR5))
    {
        printf("Il faut poursuivre le traitement\n");
    }
    else if ((temp <= T2) && (nbjours <= JOUR5))
    {
        printf("Il faut poursuivre le traitement\n");
    }
    else if ((temp > T2) && (nbjours <= JOUR2))
    {
        printf("Il faut poursuivre le traitement\n");
    }
    else if ((temp > T2) && (nbjours > JOUR5))
    {
        printf("Il faut faire des analyses complémentaires\n");
    }
    else if ((temp > T1) && (nbjours > JOUR5))
    {
        printf("Il faut faire des analyses complémentaires\n");
    }
    else if ((temp <= T2) && (nbjours > JOUR5))
    {
        printf("Il faut faire des analyses complémentaires\n");
    }
    else if (((temp > T2) && ((nbjours > JOUR2) && (nbjours <= JOUR5))))
    {
        printf("Il faut changer de traitement\n");
    }
    else 
    {
        printf("Il faut surveiller\n");
    }
    return 0;
}