#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const float TAUX = 0.20;
const char COND_ARRET[2] = "*";

int main()
{
    char nom[18];
    float salaireBrut;
    float salaireNet;
    float salaireMoyen = 0;
    int iteration = 0;

    scanf("%s",nom);
    
    while(strcmp(nom,COND_ARRET) != 0)
    {
        scanf("%f",&salaireBrut);
    
        salaireNet = salaireBrut - salaireBrut * TAUX;
        salaireMoyen = salaireMoyen + salaireNet;
        printf("Nom : %s",nom);
        printf(" salaire : %5.3f\n",salaireNet);
        iteration++;
        scanf("%s",nom);
    }

    if (iteration != 0)
    {
        salaireMoyen = salaireMoyen / iteration;
        printf("Salaire moyen : %5.2f\n",salaireMoyen);
    }

    return 0;
}