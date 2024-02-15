#include <stdio.h>
#include <stdlib.h>

void corps(int nbI, int tirets);
void ligne(int nbtirets);
void ligneCourante(int larg);

int main ()
{
    int tirets;
    int nbI;

    printf("combien de largeur ?");
    scanf("%d", &tirets);
    printf("combien de hauteur ?");
    scanf("%d", &nbI);
    ligne(tirets);
    corps(nbI, tirets);
    ligne(tirets);
    
}

void ligne (int nbtirets) /* affiche la ligne de tirets*/
{
    int i;
    for ( i = 0; i < nbtirets; i++)
    {
        printf("-");
    }
    printf("\n");
}

void corps (int nbI, int larg) 
{
    int i;
    for ( i = 0; i < nbI; i++)
    {
        ligneCourante(larg);
    }
    
}

void ligneCourante(int larg)
{
    int n;
    char I = 'I';
    printf("%c", I);
    for ( n = 0; n < larg-2 ; n++)
    {
        printf(" ");
    }
    printf("%c\n", I);
    
}