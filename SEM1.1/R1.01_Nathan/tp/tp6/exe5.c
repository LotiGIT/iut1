#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int aleaInfBorne(int borne);

int main()
{
    printf("%d\n",aleaInfBorne(5));
    return EXIT_SUCCESS;
}

int aleaInfBorne(int borne)
{
    srand(time(NULL));
    return rand() % borne;
}
