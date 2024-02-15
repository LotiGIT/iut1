// Exercice 5 tp3

#include <stdio.h>
#include <stdlib.h>

const int FIN = 0;
int main ()
{
    int nbvaleurs, valeurs, compteur, max;

    printf("Combien de valeurs ? :");
    scanf("%d", &nbvaleurs);

    if (nbvaleurs == FIN)
    {
        printf("ERREUR");
    }
    else 
    {
        
        while (compteur < nbvaleurs)
        {
            scanf("%d", &valeurs);
            compteur = compteur + 1;
            max = valeurs;
            if (valeurs > max)
            {
                max = valeurs;
            }
            else
            {
                
            }
        }
    }
    printf("La plus grande valeur est : %d \n", max);
    
}