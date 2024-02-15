#include <stdio.h>
#include <stdlib.h>

void ligneTirets(int);
void ligneCourantes(int);
void corps(int);

int main()
{
    int hauteur;
    int base;

    printf("Hauteur : ");
    scanf("%d",&hauteur);

    base = hauteur+1;

    corps(hauteur);
    ligneTirets(base);

    return EXIT_SUCCESS;
}

void ligneTirets(int base)
{
    for (int i = 0; i < base; i++)
    {
        printf("-");
    }
    printf("\n");
}

void ligneCourantes(int largeur)
{
    printf("I");
    for (int i = 0; i < largeur; i++)
    {
        printf(" ");
    }
    printf("\\\n");
}

void corps(int hauteur)
{
    for (int i = 0; i < hauteur; i++)
    {
        ligneCourantes(i);
    }
}