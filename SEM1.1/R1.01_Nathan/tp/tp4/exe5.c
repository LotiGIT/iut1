#include <stdio.h>
#include <stdlib.h>

void ligneTirets(int);
void ligneCourantes(int);
void corps(int,int);

int main()
{
    int hauteur;
    int largeur;

    printf("Hauteur : ");
    scanf("%d",&hauteur);
    printf("Largeur : ");
    scanf("%d",&largeur);

    ligneTirets(largeur);
    corps(hauteur,largeur);
    ligneTirets(largeur);
    return EXIT_SUCCESS;
}

void ligneTirets(int largeur)
{
    for (int i = 0; i < largeur; i++)
    {
        printf("-");
    }
    printf("\n");
}

void ligneCourantes(int largeur)
{
    printf("I");
    for (int i = 0; i < largeur-2; i++)
    {
        printf(" ");
    }
    printf("I\n");
}

void corps(int hauteur, int largeur)
{
    for (int i = 0; i < hauteur; i++)
    {
        ligneCourantes(largeur);
    }
}