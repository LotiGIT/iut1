#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int n;
    int i;
    int res;

    res = 1;
    i = 1;

    printf("Nombre : ");
    scanf("%d",&x);
    printf("Puissance : ");
    scanf("%d",&n);

    while (i <= n)
    {
        res = res * x;
        i = i + 1;
    }

    printf("%d puissance %d egal %d\n",x,n,res);

    return 0;
}