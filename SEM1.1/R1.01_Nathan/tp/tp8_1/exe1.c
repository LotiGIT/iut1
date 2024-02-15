#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef int tabEntiers[N];

int rechSeq(int,tabEntiers);

int main()
{
    tabEntiers tablo = {12,5,8,13,21,7};

    printf("%d\n",rechSeq(21,tablo));

    return EXIT_SUCCESS;
}

int rechSeq(int valeur, tabEntiers tablo)
{
    int i;
    
    i = 0;

    while(i < N)
    {
        if(tablo[i] == valeur)
        {
            return i;
        }
        i++;
    }

    return -1;
}