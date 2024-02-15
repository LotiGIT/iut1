#define N 5

#include <stdio.h>
#include <stdlib.h>

typedef int unTableau[N];

int somme(unTableau);

int main()
{
    unTableau tab = {5,8,2,3,4};
    printf("VA : %d VO : %d\n",22,somme(tab));

    return EXIT_SUCCESS;
}

int somme(unTableau tab)
{
    int somme;
    somme = 0;

    for(int i = 0; i < N; i++)
    {
        somme += tab[i];
    }

    return somme;
}