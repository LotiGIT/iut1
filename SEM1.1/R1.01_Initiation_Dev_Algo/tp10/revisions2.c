#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NM 12

typedef char t_chaine9[10];
typedef struct
{
    t_chaine9 c_nom;
    int c_nbJours;
} t_mois;
typedef t_mois t_tabMois[NM];

t_tabMois tMois = {{"janvier", 31},
                   {"fevrier", 28},
                   {"mars", 31},
                   {"avril", 30},
                   {"mai", 31},
                   {"juin", 30},
                   {"juillet", 31},
                   {"aout", 31},
                   {"septembre", 30},
                   {"octobre", 31},
                   {"novembre", 30},
                   {"decembre", 31}};

void affiche(t_chaine9 nomMois);
int nombreJours(t_chaine9 nomMois);

int main()
{
    t_chaine9 nomMois;
    printf("Nom du mois : ");
    scanf("%s", nomMois);

    nombreJours(nomMois);
    // affiche(nomMois);

    return EXIT_SUCCESS;
}

void affiche(t_chaine9 nomMois)
{
    // for (int i = 0; i < NM; i++)
    // {

    //     if (tMois[i].c_nbJours == 31)
    //     {
    //         printf("%s", tMois[i].c_nom);
    //         printf("\n");
    //     }
    // }
    for (int i = 0; i < NM; i++)
    {

    }
}

int nombreJours(t_chaine9 nomMois)
{
    bool trouve;
    trouve = false;
    int i;
    i = 0;

    while (!trouve && i < NM)
    {

        if (strcmp(tMois[i].c_nom, nomMois) == 0)
        {
            trouve = true;
        }
        else
        {
            i++;
        }
    }
    if (trouve==true)
    {
        printf("%d \n", tMois[i].c_nbJours);
    }
    else
    {
        printf("erreur");
    }
    
    return -1;
}