#include <stdio.h>
#include <stdlib.h>

int facto(int);
void test();

int main()
{
    int valeur;
    
    //test();
    
    printf("Saisir une valeur : ");
    scanf("%d",&valeur);
    
    valeur = facto(valeur);
    printf("Factorielle : %d\n",valeur);

    return EXIT_SUCCESS;
}

int facto(int valeur)
{
    int resultat = 1;
    int iteration = 1;

    if (valeur == 0 && valeur == 1)
    {
        resultat = 1;
    }
    else
    {
        while(iteration <= valeur)
        {
            resultat = resultat * iteration;
            iteration++;
        }
    }

    return resultat;
}

void test()
{
    printf("valeur attendue : %d valeur obtenue : %d\n",1,facto(0));
    printf("valeur attendue : %d valeur obtenue : %d\n",1,facto(1));
    printf("valeur attendue : %d valeur obtenue : %d\n",2,facto(2));
    printf("valeur attendue : %d valeur obtenue : %d\n",6,facto(3));
    printf("valeur attendue : %d valeur obtenue : %d\n",5040,facto(7));
}