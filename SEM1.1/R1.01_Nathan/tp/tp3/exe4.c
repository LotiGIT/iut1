#include <stdio.h>
#include <stdlib.h>

const int conditionArret = -1;

int main()
{
    int valeur = 0;
    int iteration = 0;
    float moyenne = 0;



    while(valeur != conditionArret)
    {
        scanf("%d",&valeur);
        if (valeur != conditionArret)
        {
            moyenne = moyenne + valeur;
            iteration++;
        }      
    }

    if(iteration != 0)
    {
        moyenne = moyenne / iteration;
        printf("%4.2f\n", moyenne);
    }
    else
    {
        printf("Pas de valeur");
    }

    return 0;
}