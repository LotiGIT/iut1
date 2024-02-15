#include <stdio.h>
#include <stdlib.h>

void ligne(int);

int main()
{
    for (int i = 0; i < 10; i++)
    {
        ligne(i);
    }
    
    return EXIT_SUCCESS;
}

void ligne(int nb)
{
    int multiplication;

    for (int i = 0; i < nb; i++)
    {
        printf("    ");
    }

    for (int i = nb; i < 10; i++)
    {
        multiplication = nb*i;
        printf(" %2d ",multiplication);
    }
    printf("\n");
}