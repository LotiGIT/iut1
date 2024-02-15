#include <stdlib.h>
#include <stdio.h>

void division(int,int,int*,int*);

int main()
{
    int nb1, nb2;
    int quotient, reste;

    printf("Saisir a : ");
    scanf("%d",&nb1);
    printf("Saisir b : ");
    scanf("%d",&nb2);

    if (nb2 != 0)
    {
        division(nb1,nb2,&quotient,&reste);
        printf("Quotient : %d\n",quotient);
        printf("Reste : %d\n",reste);
    }
    
    else
    {
        printf("La division par 0 n'est pas defini\n");
    }
    
    return EXIT_SUCCESS;
}

void division(int dividende, int diviseur, int* quotient, int* reste)
{
    *quotient = dividende/diviseur; // Que des int, division entiere
    *reste = dividende%diviseur;
}

/*
TESTS
dividende et diviseur > 0 => 3 4 => 0 3
dividende = 0 => 0 4 => 0 0
diviseur = 0 => 4 0 => erreur
dividende et diviseur < 0 => 1 -1 => 1 0
*/