#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nombre;
    int i = 2;
    int estPremier = 1;

    printf("Entrez un entier naturel : ");

    do
    {
        scanf("%d",&nombre);
    } while (nombre < 0);
    
    while(i < (nombre/2)+1 && estPremier == 1)
    {
        if (nombre%i == 0)
        {
            estPremier = 0;
        }

        i++;
    }
    
    if(estPremier == 1 && nombre != 1)
    {
        printf("%d est un nombre premier\n", nombre);
    }
    else if (estPremier == 0 || nombre == 1)
    {
        printf("%d n'est pas un nombre permier\n", nombre);
    }

    return 0;
}