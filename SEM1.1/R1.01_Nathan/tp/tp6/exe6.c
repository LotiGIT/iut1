#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generer(int borne);
int comparer(int,int);
int jeu(int);

int main()
{
    int nbSecret, nbEssai;
    nbSecret = generer(30);

    nbEssai = jeu(nbSecret);
    printf("Il vous a fallu %d essai(s)\n",nbEssai);

    return EXIT_SUCCESS;
}

int jeu(int nbSecret)
{
    int nbEssai, prop, comparaison;
    nbEssai = 1;

    do
    {
        printf("Proposition n°%d : ",nbEssai);
        scanf("%d",&prop);

        comparaison = comparer(nbSecret,prop);

        switch (comparaison)
        {
        case 0:
            printf("Felicitations, vous avez trouve le nombre secret !\n");
            break;
        case 1:
            printf("Le nombre secret est superieur\n");
            break;
        case -1:
            printf("Le nombre secret est inferieur\n");
            break;
        default:
            printf("Erreur\n");
            break;
        }
        nbEssai++;
    } while (comparaison!=0);
    nbEssai--;

    return nbEssai;
}

int comparer(int val1, int val2)
{
    if (val1 == val2)
    {
        return 0;
    }
    else if (val1 > val2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int generer(int borne)
{
    srand(time(NULL));
    return rand() % borne;
}