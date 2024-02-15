#include <stdio.h>
#include <stdlib.h>

#define TAILLE 21

const int DRAPEAU = -1;

typedef int t_note[TAILLE];

void update(t_note nb, int val);
void init(t_note nb);
void afficherTab(t_note nb);

int main()
{
    t_note nb;
    int val;

    init(nb);
    
    do
    {
        scanf("%d",&val);

        if (val != DRAPEAU)
        {
            update(nb,val);
        }

    }while(val != DRAPEAU);

    afficherTab(nb);

    return EXIT_SUCCESS;
}

void update(t_note nb, int val)
{
    nb[val] = nb[val] + 1;
}

void init(t_note nb)
{
    for(int i = 0; i < TAILLE; i++)
    {
        nb[i] = 0;
    }
}

void afficherTab(t_note nb)
{
    for(int i = 0; i < TAILLE; i++)
    {
        if(nb[i] > 0)
        {
            printf("Occurence de %d : %d\n",i,nb[i]);
        }
    }
}