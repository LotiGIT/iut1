#include <stdio.h>

int main(){

    int a = 10;
    int *pa = &a;

    printf(" a = %d ( adresse est : %p)", a, &a);
    printf(" => %p\n", pa);
    printf("La valeur stockée à l'adresse %p est %d\n", pa, *pa);

    return 0;

}


