#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 198 // 22 équipes de 9 coureurs = 198 coureurs

const int DRAPEAU = -1;

typedef struct {
    int c_numero;
    int c_temps;
} t_concurrent;

typedef t_concurrent t_tabconc[MAX];

void insere(t_concurrent c, t_tabconc tc, int n);
void permuter(t_concurrent* c1, t_concurrent* c2);
void affiche_classement(t_tabconc tc, int n);

int main()
{
    t_tabconc tableauConcurrent;
    t_concurrent concu;
    int nbConcurrent = 0;

    do
    {
        printf("Numero : ");
        scanf("%d", &concu.c_numero);
        if (concu.c_numero != DRAPEAU)
        {
            nbConcurrent++;
            printf("Temps : ");
            scanf("%d", &concu.c_temps);
            insere(concu, tableauConcurrent, nbConcurrent);
        }
    } while (concu.c_numero != DRAPEAU);
    affiche_classement(tableauConcurrent, nbConcurrent);
    
    return EXIT_SUCCESS;
}

void affiche_classement(t_tabconc tc, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Place %d : numero %d temps : %d\n", i+1, tc[i].c_numero, tc[i].c_temps);
    }  
}

void insere(t_concurrent c, t_tabconc tc, int n)
{
    int i;
    bool fini;

    i = n-1;

    fini = false;

    tc[i] = c;

    while (!fini && i > 0)
    {
        if (tc[i].c_temps < tc[i-1].c_temps)
        {
            permuter(&tc[i], &tc[i-1]);
        }
        else
        {
            fini = true;
        }
        i--;
    }
}

void permuter(t_concurrent* c1, t_concurrent* c2)
{
    t_concurrent temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

