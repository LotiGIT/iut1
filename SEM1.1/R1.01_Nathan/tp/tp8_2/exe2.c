#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

typedef int tab [N];

void tri_selection(tab);
void afficherTableau(tab);

int main()
{
    tab tableau = {12,6,7,14,10,11,8,19,15,9};
    tab tableau2 = {4,1,8,9,8,11,10,3,8,6};
    tri_selection(tableau);
    printf("\n");
    tri_selection(tableau2);

    return EXIT_SUCCESS;
}

void tri_selection(tab tableau)
{
    int valeurMinimum;
    int indexMinimum;
    int permutation;

    for (int i = 0; i < N-1; i++)
    {
        indexMinimum = i;
        valeurMinimum = tableau[i];
        for (int j = i+1; j < N; j++)
        {
            if (valeurMinimum > tableau[j])
            {
                valeurMinimum = tableau[j];
                indexMinimum = j;
            }
        }
        if (indexMinimum != i)
        {
            permutation = tableau[i];
            tableau[i] = valeurMinimum;
            tableau[indexMinimum] = permutation;
        }
        printf("%d : ",i);
        afficherTableau(tableau);
    }
}

void afficherTableau(tab tableau)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ",tableau[i]);
    }
    printf("\n");
}