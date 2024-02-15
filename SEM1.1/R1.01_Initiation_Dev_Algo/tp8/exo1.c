#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define N 10
typedef int tabEntiers[N];
int rechSeq(tabEntiers tablo, int  val);

int main (){

    int a;
    int val = 11;
    tabEntiers tablo = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};

    a = rechSeq(tablo, val);
    printf("%d\n", a);
    
    
}

int rechSeq(tabEntiers tablo, int  val)
{
    int i;
    i = 0;
    bool trouve;
    trouve = false;
    while( !trouve && i < N)
    {
        if( val == tablo[i]) // si la valeur est égal à ce qu'il y a dans la case i
        {
            trouve = true;
        }
        else 
        {
            i = i +1;
        }      
    }
    if (trouve == true)
    {
        return i;
    }
    else 
    {
        return -1;
    }
    
}