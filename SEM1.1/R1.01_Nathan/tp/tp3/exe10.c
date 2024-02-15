#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nombreEtudiants;
    int i = 1;
    char prenom[19];
    float noteTP;
    float noteDS;
    float moyenne;

    do
    {
        printf("Taille du groupe : ");
        scanf("%d",&nombreEtudiants);
    } while (nombreEtudiants < 0);
    
    if (nombreEtudiants == 0)
    {
        printf("Groupe vide\n");
        return 0;
    }

    while (i <= nombreEtudiants)
    {
        printf("Prenom : ");
        scanf("%s",prenom);
        printf("Note de DS : ");
        scanf("%f",&noteDS);
        printf("Note de TP : ");
        scanf("%f",&noteTP);

        moyenne = noteDS*2 + noteTP;
        moyenne = moyenne / 3;
        printf("La moyenne de %s est : %4.2f\n",prenom,moyenne);
        i = i + 1;
    }
    
    return 0;
}