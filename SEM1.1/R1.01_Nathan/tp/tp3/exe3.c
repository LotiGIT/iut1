#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreValeurs;
    int iteration = 0;
    int valeur;
    float moyenne;

    printf("Nombre de valeurs (> 0) : ");
    scanf("%d",&nombreValeurs);

    while(iteration < nombreValeurs)
    {
        scanf("%d",&valeur);
        moyenne = moyenne + valeur;
        iteration++;
    }

    moyenne = moyenne / nombreValeurs;

    printf("%4.2f\n", moyenne);

    return 0;
}