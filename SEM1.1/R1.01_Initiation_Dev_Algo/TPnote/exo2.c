#include <stdlib.h>
#include <stdio.h>


const float MIN = 35.0;
const float MAX = 43.0;

int main()
{
    int nbjours;
    float temp;
    int i = 1;
    float somme;
    float moyenne;
    float max;
    float min;

    printf("Nombre de jours ?");
    scanf("%d", &nbjours);

    max = 0;
    min = 37.5;
    while (nbjours <= 0 )
    {
        printf("Nombre de jours ?");
        scanf("%d", &nbjours);
    }
    

    while (i <= nbjours)
    {
        printf("temperature jour %d ?", i);
        scanf("%f", &temp);
        if (((temp < MIN) || (temp > MAX)))
        {
            printf("Erreur ! Recommencez.\n");
            printf("temperature jour %d ?", i);
            scanf("%f", &temp);

        }
        else if (temp > max)
        {
            max = temp;
        }
        else if (temp < min)
        {
            min = temp;
        }
        
        i++;
    }
    somme = somme + temp;
    moyenne = somme / nbjours;
    printf("temperature max du patient sur les %d jours %.1f: \n", nbjours, max);
    printf("temperature min du patient sur les %d jours %.1f: \n", nbjours, min);
    printf("temperature moyenne du patient sur les %d jours : %.1f\n", nbjours, moyenne);
    return 0;
    
}


