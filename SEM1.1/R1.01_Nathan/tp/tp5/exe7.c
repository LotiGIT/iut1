#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculFigure(float* aire);

const float PI = 3.14159;

int main()
{
    float aire;
    calculFigure(&aire);
    if (aire == -1)
    {
        printf("Figure non conforme\n");
    }
    else
    {
        printf("Aire : %f\n",aire);
    }
    
    return EXIT_SUCCESS;
}

void calculFigure(float* aire)
{
    char figure [10];

    printf("Saisir la figure : ");
    scanf("%s",figure);

    if (strcmp(figure,"carre") == 0)
    {
        int cote;
        printf("Saisissez la longueur d'un cote : ");
        scanf("%d",&cote);
        *aire = cote*cote;
    }
    else if (strcmp(figure,"rectangle") == 0)
    {
        int longueur;
        int largeur;
        printf("Saisissez la longueur : ");
        scanf("%d",&longueur);
        printf("Saisissez la largeur : ");
        scanf("%d",&largeur);
        *aire = longueur*largeur;
    }
    else if (strcmp(figure,"cercle") == 0)
    {
        int rayon;
        printf("Saisissez le rayon : ");
        scanf("%d",&rayon);
        *aire = PI*rayon*rayon;
    }
    else
    {
        *aire = -1;
    }
}