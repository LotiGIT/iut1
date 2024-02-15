#include <stdio.h>
#include <stdlib.h>

void ligne (int m);
int main()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        ligne(i);
        printf("\n");
    }

    
    
}

void ligne (int m)
{
    int i;
    int calcul;
   
    for (i = 0; i < m +1; i++)
    {
        calcul = m * i;
        printf("%3d ", calcul);
    }
}