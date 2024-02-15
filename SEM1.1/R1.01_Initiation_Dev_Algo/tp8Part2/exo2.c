#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

typedef int tablo[N];
void selection(tablo t);
void affiche(tablo letablo);

int main()
{
    tablo tab={4, 1, 5, 9, 10, 11, 7, 3, 8, 6};
    selection(tab);
    affiche(tab);
    return EXIT_SUCCESS;
}

void selection(tablo t)
{
    int i, a, indmin, j;
    a=0;
    j=0;
    i=0;

    while(i < N)
    {
        indmin =  i;
        j=i;
        while (j < N)
        {
            if ( t[j]< t[indmin])
            {
                indmin = j;
            }
            j++;  
        }
        a = t[i];
        t[i]=t[indmin];
        t[indmin]=a;
        i++;
    }  
   
}

void affiche(tablo letablo)
{
    for (int i = 0; i < N; i++)
    {
        printf("%2d",letablo[i]);
    }
}
