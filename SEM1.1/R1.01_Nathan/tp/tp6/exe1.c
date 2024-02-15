#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fcalcul(int,int);
void test();

int main()
{
    int val1, val2;
    float hypo;

    //test();

    printf("Valeur 1 : ");
    scanf("%d",&val1);
    printf("Valeur 2 : ");
    scanf("%d",&val2);
    
    hypo = fcalcul(val1,val2);
    printf("L'hypothenuse est : %f\n", hypo);
    
    return EXIT_SUCCESS;
}

float fcalcul(int v1, int v2)
{
    float hypo;
    
    hypo = v1*v1+v2*v2;
    hypo = sqrtf(hypo);
    
    return hypo;
}

void test()
{
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",5.0,fcalcul(3,4));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",1.414,fcalcul(1,1));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",0.0,fcalcul(0,0));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",3.606,fcalcul(2,3));
    printf("valeur attendue : %.3f valeur obtenue : %.3f\n",10.630,fcalcul(7,8));
}