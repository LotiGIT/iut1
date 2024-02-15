#include <stdio.h>
#include <stdlib.h>

#define N 5
typedef int unTableau[N];
int somme(unTableau tablo);


int main()
{
    int res;
    res = 0;
    unTableau monTableau = {5,8,2,3,4};
    res = somme(monTableau);
    printf("Résultat de la somme %d\n", res);
    return EXIT_SUCCESS;
}
    
    
int somme(unTableau tablo)
{
    int res;
    int i;
    res = 0;

    for ( i = 0; i < N; i++)
    {
        res = res + tablo[i];
    }
    return res;
}