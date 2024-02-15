#include <stdlib.h>
#include <stdio.h>

void division (int a, int b, int * quotient, int * reste);

int main()
{
    int x;
    int y;
    int q;
    int r;

    
    printf("valeur de x ? :");
    scanf("%d", &x);
    printf("valeur de y ? :");
    scanf("%d", &y);
    division(x, y, &q, &r);
    printf("%d\n", q);
    printf("%d\n", r);

}

void division (int a, int b, int * quotient, int * reste)
{
    (*quotient) = a / b;
    (*reste) =  a%b;
}