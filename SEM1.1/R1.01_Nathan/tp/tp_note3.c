#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 9

typedef int tMatrice[MAX][MAX];
tMatrice laMatrice;


void init(tMatrice laMatrice);
int main()
{
    tMatrice tableau;

    init(tableau);
    return EXIT_SUCCESS;
}



void init(tMatrice laMatrice)
{
    

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            int aleatoire = rand() %10;
            laMatrice[i][j] = aleatoire;
            printf("%d ", laMatrice[i][j]);
        }
        printf("\n");
    }
}

int symetrique()
{

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (strcmp())
            {
                /* code */
            }
            
        }
    }
   return EXIT_SUCCESS;
}