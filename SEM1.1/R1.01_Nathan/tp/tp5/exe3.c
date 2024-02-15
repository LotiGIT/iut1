//# define TAILLE_NOM 18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void traiterUnEmploye(char nom[], float salaireBrut, float* totalSalaires);
void afficherMoyenne(float,int);

const float TAUX = 0.20;
const char COND_ARRET[2] = "*";

int main()
{
    char nom[18];
    float salaireBrut;
    float totalSalaires = 0;
    int iteration = 0;

    printf("Saisir nom : ");
    scanf("%s",nom);
    
    while(strcmp(nom,COND_ARRET) != 0)
    {
        printf("Saisir salaire : ");
        scanf("%f",&salaireBrut);
        if (salaireBrut >= 0)
        {
            traiterUnEmploye(nom,salaireBrut,&totalSalaires);
            iteration++;
        }
        else
        {
            printf("Vous devez saisir un salaire >= 0\n");
        }
        
        
        printf("Saisir nom : ");
        scanf("%s",nom);
    }
    afficherMoyenne(totalSalaires,iteration);
    return EXIT_SUCCESS;
}

void traiterUnEmploye(char nom[], float salaireBrut, float* totalSalaires)
{
    float salaireNet;

    salaireNet = salaireBrut - salaireBrut * TAUX;
    printf("Nom : %s",nom);
    printf(" salaire : %5.3f\n",salaireNet);

    *totalSalaires = *totalSalaires + salaireNet;
}

void afficherMoyenne(float totalSalaires, int nbEmploy)
{
    if (nbEmploy > 0)
    {
        float moyenne;
        moyenne = totalSalaires / nbEmploy;
        printf("Moyenne des salaires : %5.2f\n", moyenne);
    }
    else if (nbEmploy == 0)
    {
        printf("Aucun nom d'employe n'a ete saisi\n");
    }
    
}

/*
TESTS
Salaire positif
Salaire negatif
Saisie * des la premiere iteration => liste vide
*/