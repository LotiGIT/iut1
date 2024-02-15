/**
@brief Que fait ce programme ? là est la question ...
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, somme, nbvaleurs, valeurs;
    printf("Nombre de valeurs : ");
    scanf("%d", &nbvaleurs);
    float moyenne;
    if (nbvaleurs == 0)
    {
        printf("Impossible de calculer une moyenne avec 0 valeurs. Veuillez ressaisir un nombe de valeur valide");
    }
    else {
        i = 1;
        somme = 0;
        nbvaleurs = 1 ;
        while (i <= nbvaleurs)
        {
            printf("Saisissez la valeur %d : ", nbvaleurs);
            scanf("%d", &valeurs);
            somme = somme + valeurs;
            i++;

        }
        printf("résultat : %d\n", somme);
        moyenne = somme / (nbvaleurs*1.0);
        printf("La moyenne est de : %f \n", moyenne);
    }

    return EXIT_SUCCESS;
}