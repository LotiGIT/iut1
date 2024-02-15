#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const char COND_ARRET[2] = "*";

int main()
{

    char nom [25];
    int i=2;
    float temp1;
    float temp2;
    int nbPatientTot=0;
    float calcul;
    int patAug=0;
    int patBai = 0;
    int patCons = 0;


    
    printf("Nom du patient ? ");
    scanf("%s", nom);
    nbPatientTot = nbPatientTot ++;
    while ((i > 0) && (strcmp(nom,COND_ARRET) != 0))
    {
        printf("température J-2 ? ");
        scanf("%f", &temp1);
        printf("température J-1 ? ");
        scanf("%f", &temp2);

        if (temp2 > temp1)
        {
            calcul = (temp2*100)/temp1;
            patAug ++;
        }
        if (temp2 < temp1)
        {
            calcul = (temp2*100)/temp1;
            patBai ++;
        }
        if (temp2 = temp1)
        {
            
            patCons ++;
        }
        
    }

    printf("Sur %d patients : \n", nbPatientTot);
    printf("%d patients ont la température qui augmente de %.1f%%: \n", patAug, calcul);

}