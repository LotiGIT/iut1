#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define NM 12

typedef char t_chaine9[10];

typedef struct{
    t_chaine9 c_nom;
    int c_nbJours;
} t_mois;

typedef t_mois t_tabMois[NM];
const t_tabMois tMois= { 
    {"janvier",31},
    {"fevrier",28},
    {"mars",31},
    {"avril",30},
    {"mai",30},
    {"juin",30},
    {"juillet",30},
    {"aout",30},
    {"septembre",30},
    {"octobre",30},
    {"novembre",30},
    {"decembre", 31}
}; 

void affiche31();
int nombreJours(t_chaine9 nomMois);

int main()
{
    t_chaine9 nomMois;
    int nombre;
    affiche31();
    printf("Nom du mois : ");
    scanf("%s", nomMois);
    nombre = nombreJours(nomMois);
    if (nombre == -1)
    {
        printf("Erreur dans la saisie!\n");
    }
    else
    {
        printf("Il y a %d jours en %s.\n",nombre,nomMois);
    }
    
    return EXIT_SUCCESS;
}
void affiche31()
{
    for(int i=0; i<NM; i++)
    {
        if(tMois[i].c_nbJours == 31)
        {
            printf("%s ", tMois[i].c_nom);
        }
        printf("\n");
    }
}

int nombreJours(t_chaine9 nomMois)
{
    bool trouve;
    trouve=false;
    int i, nombreJours;
    i=0;
    nombreJours = -1;

    while(!trouve && i<NM)
    {
        if(strcmp(tMois[i].c_nbJours, nomMois)==0)
        {
            trouve = true;
            nombreJours = tMois[i].c_nbJours;
        }
        else
        {
            trouve = false;
        }
        i++;
    }
    return nombreJours;
}