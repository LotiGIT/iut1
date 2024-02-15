#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAILLE 100
#define FIN -1
typedef int ensemble[TAILLE];


void initialiser(ensemble tab);
void afficher(ensemble tab);
int cardinal(ensemble tab);
void estVide(ensemble tab);
bool supprimer(ensemble ens, int n);
bool ajouter(ensemble ens, int ajoute);
bool appartient(int e, ensemble ens);
void intersection(ensemble e1, ensemble e2);

int main ()
{

    ensemble tab;
    ensemble ens;
    int ajoute; 
    initialiser(tab);
    ajouter(ens, ajoute);
    afficher(tab);
    return EXIT_SUCCESS;
}




void initialiser(ensemble tab)
{
    for (int lig = 0; lig < TAILLE; lig++)
    {
        tab[lig] = FIN;
    }
}

int cardinal(ensemble tab)
{
    int nbElements;
    int i;
    nbElements = 0;
    for (i = 0; i < TAILLE; i++)
    {
        if (tab[i] != FIN)
        {
            nbElements = nbElements + 1;
        }  
    }
    return(nbElements);
}


void afficher(ensemble tab)
{
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d | ", tab[i]);
    }
}

void estVide(ensemble tab)
{
    bool aucunEl;
    aucunEl = false;

    for (int i = 0; i < TAILLE; i++)
    {
        if (tab[i] != FIN)
        {
            aucunEl = false;
        }
        else
        {
            aucunEl = true;

        }
    }
}

bool appartient(int e, ensemble ens)
{
    int i;
    i = 0;
    bool appartient;
    appartient = false;


    while( !appartient && i < TAILLE)
    {
        if (e == ens[i])
        {
            appartient = true;
            return (appartient);
        }
        else
        {
            appartient = false;
        }
        return (appartient);
    }
}


bool supprimer(ensemble ens, int n)
{
    bool supprime;
    supprime = false;

    for (int i = 0; i < TAILLE; i++)
    {
        if (ens[i] == n)
        {
            supprime = true;
        }
    }
    return (supprime);
}


bool ajouter(ensemble ens, int ajoute)
{
    bool ajout;
    ajout = false;
    int n;

    printf("Ajouter un nombre : ");
    scanf("%d", &ajoute);
    while (ajoute != FIN )
    {
        for (int i = 0; i < TAILLE; i++)
        {
            if (ens[i] != ajoute)
            {
                printf("%d", ajoute);
                ajout = true;
                return (ajout);
                
            }
        }
        
    }
    return(ajout);
}


void intersection(ensemble e1, ensemble e2)
{
    ensemble res;

    for (int i = 0; i < TAILLE; i++)
    {
       
        
    }
    
}

void testIntersection(ensemble e1, ensemble e2)
{
    
    intersection(e1, e2);
}