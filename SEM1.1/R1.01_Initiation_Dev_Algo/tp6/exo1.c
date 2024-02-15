#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fcalcul(int v1, int v2);


int main ()
{
    int a,b;
    float hypo;

    printf("Valeur de a : ");
    scanf("%d", &a);
    printf("Valeur de b : ");
    scanf("%d", &b);

    hypo = fcalcul(a,b);
    printf("Hypothénuse de : %.2f\n", hypo);

    return EXIT_SUCCESS;
}

float fcalcul(int v1, int v2)
{
    float hypo;

    hypo = sqrtf((v1*v1)+(v2*v2));

    return hypo;

}