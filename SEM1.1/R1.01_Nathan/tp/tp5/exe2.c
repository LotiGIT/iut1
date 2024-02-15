#include <stdio.h>
#include <stdlib.h>

void suiteMaxMin(int*,int*);

const int DRAPEAU = 0;

int main()
{
    int max, min;
    suiteMaxMin(&max,&min);
    printf("Maximum : %d Minimum : %d\n",max,min);
    return EXIT_SUCCESS;
}

void suiteMaxMin(int* max, int* min)
{
    int val;

    printf("Entrez une valeur : ");
    scanf("%d",&val);
    
    *max = val;
    *min = val;

    while ((val != DRAPEAU))
    {
        if (val >= 0)
        {
            if (*max < val)
            {
                *max = val;
            }
            else if (*min > val)
            {
                *min = val;
            }
        }
        else
        {
            printf("Attention, vous devez saisir une valeur positive !\n");
        }
        
        printf("Entrez une valeur : ");
        scanf("%d",&val);
    }

    if (*max == DRAPEAU && *min == DRAPEAU)
    {
        *max = -1;
        *min = -1;
    }
}

/*
TESTS
Nombres negatifs
Aucune valeur
*/