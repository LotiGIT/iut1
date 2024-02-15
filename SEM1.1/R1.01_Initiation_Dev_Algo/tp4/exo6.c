#include <stdlib.h>
#include <stdio.h>

void ligneTirets();         
void ligneCourante ();
void corps();


int main()
{
    int hauteur;
    int tirets;
   printf("Combien de hauteur ?");
   scanf("%d", &hauteur);
   while (hauteur > 40 || hauteur <= 0)
   {
    printf("Erreurs ! Combien de hauteur ?");
   scanf("%d", &hauteur);
   }
   
   corps(hauteur);
   ligneTirets(hauteur+1);
   printf("\n");


   return EXIT_SUCCESS;
}


void ligneTirets(int larg)
{
    int i;
    for ( i = 0; i < larg; i++)
    {
        printf("-");
    }
    
}

void ligneCourante(int numLigne)
{
    int i;
    printf("I");
    for ( i = 0; i < numLigne ; i++)
    {
        printf(" ");
    }
    printf("\\");
    printf("\n");
}

void corps(int hauteur)
{
    int i;
    for ( i = 0; i < hauteur; i++)
    {
        ligneCourante(i);
    }
    
}