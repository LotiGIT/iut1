#include <stdio.h>
#include <stdlib.h>

void plusPetit(int,int);

int main()
{
    int nb1;
    int nb2;
    scanf("%d",&nb1);
    scanf("%d",&nb2);
    plusPetit(nb1,nb2);
    return EXIT_SUCCESS;
}

void plusPetit(int nb1, int nb2)
{
    if (nb1 < nb2)
    {
        printf("%d\n",nb1);
    }
    else if (nb1 > nb2)
    {
        printf("%d\n",nb2);
    }
    else
    {
        printf("Valeurs égales\n");
    }
}