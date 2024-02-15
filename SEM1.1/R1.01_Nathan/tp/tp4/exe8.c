#include <stdio.h>
#include <stdlib.h>

void suiteMaxMin();

const int DRAPEAU = -1;

int main()
{
    suiteMaxMin();
    return EXIT_SUCCESS;
}

void suiteMaxMin()
{
    int val;
    int max;
    int min;

    printf("Entrez une valeur : ");
    scanf("%d",&val);
    
    max = val;
    min = val;

    while ((val != -1))
    {
        if (val >= 0)
        {
            if (max < val)
            {
                max = val;
            }
            else if (min > val)
            {
                min = val;
            }
        }
        else
        {
            printf("Attention, vous devez saisir une valeur positive !\n");
        }
        
        printf("Entrez une valeur : ");
        scanf("%d",&val);
    }

    if (max == -1 && min == -1)
    {
        printf("Aucune valeur saisie\n");
    }
    else
    {
        printf("Maximum : %d Minimum : %d\n",max,min);
    }
}