#define N 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int tabEntiers[N];

int rechDichoIteratif(int,tabEntiers);
int rechDichoRecur(int valeur, tabEntiers tablo, int deb, int fin);

int main()
{
    tabEntiers tablo = {0,1,2,3,4,5,6,7,8,9};

    printf("%d\n",rechDichoIteratif(2,tablo));
    printf("%d\n",rechDichoRecur(2,tablo,0,N-1));

    return EXIT_SUCCESS;
}

int rechDichoRecur(int valeur, tabEntiers tablo, int deb, int fin)
{
    int milieu, res;

    milieu = (deb + fin)/2;
    res = -1;
    if (deb > fin)
    {
        res = -1;
    }
    else
    {
        if(tablo[milieu] == valeur)
        {
            res = milieu;
        }
        else if(tablo[milieu] < valeur)
        {
            deb = milieu + 1;
            res = rechDichoRecur(valeur,tablo,deb,fin);
        }
        else
        {
            fin = milieu - 1;
            res = rechDichoRecur(valeur,tablo,deb,fin);
        }
    }
    
    return res;
}

int rechDichoIteratif(int valeur, tabEntiers tablo)
{
    int deb, milieu, fin, res;
    bool trouve;
    
    trouve = false;
    deb = 0;
    fin = N-1;
    milieu = N/2;
    res = -1;


    while(deb <= fin && !trouve)
    {        
        if(tablo[milieu] == valeur)
        {
            res = milieu;
            trouve = true;
        }
        else if(tablo[milieu] < valeur)
        {
            deb = milieu + 1;
        }
        else
        {
            fin = milieu - 1;
        }
      
        milieu = (deb + fin)/2;
    }

    return res;
}