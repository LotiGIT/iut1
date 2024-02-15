#include <stdio.h>
#include <stdlib.h>

int factorielle (int x);
void test();

int main ()
{
   /*int x;
    printf("Entrer un nombre : ");
    scanf("%d", &x);
    printf("Factorielle de : %d = %d \n", x, factorielle(x));*/ 
    test ();
    
}

int factorielle (int x)
{
    int i;
    int fact;

    fact = 1; 

    if (x >= 0)
    {
        for ( i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
}

void test(){
printf("valeur attendue : %d valeur obtenue : %d\n",1,factorielle(0));
printf("valeur attendue : %d valeur obtenue : %d\n",1,factorielle(1));
printf("valeur attendue : %d valeur obtenue : %d\n",2,factorielle(2));
printf("valeur attendue : %d valeur obtenue : %d\n",6,factorielle(3));
printf("valeur attendue : %d valeur obtenue : %d\n",5040,factorielle(7));
}