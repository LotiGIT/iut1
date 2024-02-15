#include <stdio.h>
#include <stdlib.h>

const int ENFANT_A = 7;
const int ENFANT_B = 8;
const int ENFANT_C = 9;
const int ENFANT_D = 10;

const int ADULTE_A = 12;
const int ADULTE_B = 14;
const int ADULTE_C = 16;
const int ADULTE_D = 18;

int main ()
{
    char periode;
    int nb_adulte, nb_enfant, prix_total;

    printf("Saisir la période (a,b,c ou d) : ");
    scanf("%c",&periode);
    printf("Saisir le nombre d'adultes : ");
    scanf("%d",&nb_adulte);
    printf("Saisir le nombre d'enfants : ");
    scanf("%d",&nb_enfant);

    switch (periode)
    {
    case 'a':
        prix_total = nb_enfant*ENFANT_A + nb_adulte*ADULTE_A;
        break;
    case 'b':
        prix_total = nb_enfant*ENFANT_A + nb_adulte*ENFANT_A;
        break;

    default:
        break;
    }

    return 0;
}