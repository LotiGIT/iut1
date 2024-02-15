#include <stdlib.h>
#include <stdio.h>

#define N 10
typedef int tabEntiers[N];

int recherche_dicho_iteratif(int valeur, tabEntiers tablo);
int recherche_dicho_recursif(int valeur, tabEntiers tablo,int debut, int fin);

int main ()
{
    int debut;
    debut = 0;

    int fin;
    fin = N -1;

    tabEntiers tablo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", recherche_dicho_recursif(0, tablo, debut, fin));
    

    return EXIT_SUCCESS;
}

int recherche_dicho_iteratif(int valeur, tabEntiers tablo)
{
    int milieu, debut, fin;
    debut = 0;
    fin = N -1;
    milieu = N/2;

    while(debut <= fin)
    {
        if (tablo[milieu] < valeur)
        {
            debut = milieu +1;
        }
        else if(tablo[milieu] > valeur)
        {
            fin = milieu -1;
        }
        else
        {
            return milieu;
        }
        milieu = (debut + fin)/2;
    }
    return -1;
}

int recherche_dicho_recursif(int valeur, tabEntiers tablo, int debut, int fin)
{    
    int milieu;


    if (debut > fin)
    {
        return -1;
    }
    else
    {
        milieu = (debut + fin)/2;
        if (tablo[milieu]==valeur)
        {
            return milieu;
        }
        else if (tablo[milieu]>valeur)
        {
            return recherche_dicho_recursif(valeur, tablo, debut, milieu -1);
        }
        else
        {
            return recherche_dicho_recursif(valeur, tablo, milieu +1, fin);
        }
    }
}

