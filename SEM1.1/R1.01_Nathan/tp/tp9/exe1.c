#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIGNE 10
#define COLONNE 20

typedef int tab2dim [LIGNE][COLONNE];

bool existe(tab2dim,int);
void afficher(tab2dim);
void init(tab2dim);

int main()
{
    tab2dim tableau;
    int test;
    
    init(tableau);
    afficher(tableau);
    
    test = 0;
    printf("%d : %d\n",test,existe(tableau,test));
    
    test = 9;
    printf("%d : %d\n",test,existe(tableau,test));

    test = 19;
    printf("%d : %d\n",test,existe(tableau,test));
    
    test = 28;
    printf("%d : %d\n",test,existe(tableau,test));

    test = 29;
    printf("%d : %d\n",test,existe(tableau,test));

    return EXIT_SUCCESS;
}

bool existe(tab2dim tableau, int valeurCherche)
{
    int l,c;
    bool trouve;
    
    l = 0;
    c = 0;
    trouve = false;

    while (!trouve && l < LIGNE)
    {
        while (!trouve && c < COLONNE)
        {
            if (tableau[l][c] == valeurCherche)
            {
                trouve = true;
            }
            c++;
        }
        l++;
        c = 0;
    }
    return trouve;
}

void afficher(tab2dim tableau)
{
    for (int i = 0; i < LIGNE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            printf("%2d ",tableau[i][j]);
        }
        printf("\n");
    }
}

void init(tab2dim tableau)
{
    for (int i = 0; i < LIGNE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            tableau[i][j] = i+j;
        }
    }
}