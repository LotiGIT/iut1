#include <stdio.h>
#include <stdlib.h>

float somme(float,float);
float division(float,float);
float soustraction(float,float);
float multiplication(float,float);

int main()
{
    float res;
    
    res = soustraction(somme(4.2,multiplication(5.3,somme(division(somme(4.5,1.3),2.0),1.1))),1.0);

    printf("Resultat attendu : 24.4 Resultat : %.1f\n", res);

    return EXIT_SUCCESS;
}

float somme(float val1, float val2)
{
    return val1 + val2;
}

float division(float val1, float val2)
{
    return val1/val2;
}

float soustraction(float val1, float val2)
{
    return val1 - val2;
}

float multiplication(float val1, float val2)
{
    return val1*val2;
}