#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void traiterUnEmploye (char nom [19], float salBrut, float *totSalNets);
void afficherMoyenne(float totSalNet, int nbSal);

int main()
{
    char nom [19];
    float salaireBrut;
    float totalNet;
    totalNet = 0;
    int nbSal;
    nbSal = 0;

    printf("Entrer le nom : ");
    scanf("%s", nom);
    while (strcmp(nom, "*") !=0)
    {
        printf("Salaire Brut : ");
        scanf("%f", &salaireBrut);
        traiterUnEmploye(nom, salaireBrut, &totalNet);
        printf("Entrer le nom : ");
        scanf("%s", nom);
        nbSal ++;
    }

    afficherMoyenne(totalNet, nbSal);
    return EXIT_SUCCESS;
    

}

void traiterUnEmploye (char nom [19], float salBrut, float *totSalNets)
{

    float salNet; 
    salNet = 0;

    salNet = salBrut - (salBrut*0.2);
    *totSalNets = salNet*1.0 + *totSalNets;
    printf("%s a un salaire net de %.2f€\n", nom, salNet);
   
   
}

void afficherMoyenne(float totSalNet, int nbSal)
{
    float salMoy;
    salMoy = 0;
    if(nbSal != 0)
    {
        salMoy = totSalNet / nbSal;
        printf("Moynne de %f", salMoy);
    }
    else
    {
        printf("Erreur\n");
    }
    

}