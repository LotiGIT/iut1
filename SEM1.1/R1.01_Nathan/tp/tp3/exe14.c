#include <stdio.h>
#include <stdlib.h>

const int conditionArret = -1;

int main()
{
    int emplacement;
    int nbEmplacements;

    int superficie;
    int superficieMax;
    int superficieMin;
    
    superficie = 0;
    nbEmplacements = 0;

    printf("Saisir l'emplacement : ");
    scanf("%d",&emplacement);

    while(emplacement != conditionArret)
    {
        printf("Saisir la superficie : ");
        scanf("%d",&superficie);
        
        if (nbEmplacements == 0)
        {
            superficieMin = superficie;
            superficieMax = superficie;
        }
        
        if (superficieMin > superficie)
        {
            superficieMin = superficie;
        }
        
        if (superficieMax < superficie)
        {
            superficieMax = superficie;
        }
        
        nbEmplacements++;
        
        printf("Saisir l'emplacement : ");
        scanf("%d",&emplacement);      
    }

    printf("Il y a %d emplacements, la superficie la plus grande est %d et la plus petite %d", nbEmplacements, superficieMax, superficieMin);

    return EXIT_SUCCESS;
}