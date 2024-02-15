#include <stdio.h>
#include <stdlib.h>


#define NB_LIGNES 21
#define FIN -1

typedef int tableau[NB_LIGNES];

void initialiser(tableau tab);
void maj(tableau tab);
void afficher(tableau tab);


int main()
{
    tableau tab;
    initialiser(tab);
    maj(tab);
    afficher(tab);
}


void initialiser(tableau tab)
{
    for (int lig = 0; lig < NB_LIGNES; lig++)
    {
        tab[lig] = 0;
    }
    
}

void maj(tableau tab)
{
    int note;
    scanf("%d", &note);
    while ((note<0 || note>20) && note != FIN)
    {
        printf("Erreur, recommencer : ");
        scanf("%d", &note);
    }
    while (note != FIN )
    {
        tab[note]= tab[note]+1;
        scanf("%d", &note);
        while ((note<0 || note>20) && note != FIN)
        {
            printf("Erreur, recommencer : ");
            scanf("%d", &note);
        }

        
    }

    printf("\n");
    
}

void afficher(int tab[])
{
    for (int i = 0; i < NB_LIGNES; i++)
    {
        printf("%d : %d \n", i, tab[i]);
    }

    printf("\n");
    
}