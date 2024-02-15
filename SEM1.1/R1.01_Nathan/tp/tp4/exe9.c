#include <stdio.h>
#include <stdlib.h>

void ligneTirets(int);
void ligneCourantes(int,int);
void corps(int);

int main()
{
    int hauteur;
    int base;

    printf("Hauteur : ");
    scanf("%d",&hauteur);

    base = hauteur;

    corps(hauteur);
    ligneTirets(base);

    return EXIT_SUCCESS;
}

void ligneTirets(int base)
{
    printf(" ");
    for (int i = 0; i < base*2; i++)
    {
        printf("-");
    }
    printf("\n");
}

void ligneCourantes(int largeur, int largeurFinale)
{
    for (int i = largeurFinale; i > 0; i--)
    {
        printf(" ");
    }
    printf("/");
    for (int i = 0; i < largeur*2; i++)
    {
        printf(" ");
    }
    printf("\\\n");
}

void corps(int hauteur)
{
    int y = hauteur;
    for (int i = 0; i < hauteur; i++)
    {
        ligneCourantes(i, y);
        y--;
    }
}