#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LIGNE 10
#define COLONNE 20


typedef int tab2dim[LIGNE][COLONNE];

void init(tab2dim t_tab2dim);
void afficher(tab2dim t_tab2dim);
bool existe(tab2dim t_tab2dim, int val);


int main()
{
    tab2dim tablo;
    int val;
    init(tablo);
    afficher(tablo);
    existe(tablo, val);
}

void init(tab2dim t_tab2dim)
{
    for (int i = 0; i < LIGNE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            t_tab2dim[i][j] = i + j;
        }
    }
}

void afficher(tab2dim t_tab2dim)
{
        for (int i = 0; i < LIGNE; i++)
        {
            for (int j = 0; j < COLONNE; j++)
            {
                printf("%2d", t_tab2dim[i][j]);
            }
            printf("\n");
        }
}

bool existe(tab2dim t_tab2dim, int val)
{
    bool trouve;
    trouve = false;
    int i, j;
    i=0;
    while (!trouve && i<LIGNE)
    {
        j=0;
        while (!trouve && j<COLONNE)
        {
            if (t_tab2dim[i][j] ==val)
            {
                trouve=true;
            }
            else
            {
                j++; // on change de colonne dans la ligne i
            }
        }
        i++; // on change de ligne
    }
    return trouve;
}