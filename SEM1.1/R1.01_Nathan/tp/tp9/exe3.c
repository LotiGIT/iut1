#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NBCAT 6
#define NBTR 5

bool saisieNom();

int main()
{
    bool continu;
    continu = saisieNom(); 
    
    return EXIT_SUCCESS;
}

bool saisieNom()
{
    char nom [10];
    int valeurSaisie;
    printf("Nom : ");
    scanf("%s", nom);

    if (strcmp(nom,"*") != 0)
    {
        do
        {
            printf("Categorie : ");
            scanf("%d", &valeurSaisie);
        } while (valeurSaisie < 1 || valeurSaisie);
        
    }
}