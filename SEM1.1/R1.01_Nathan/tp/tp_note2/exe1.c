#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAILLE 100
typedef int ensemble[TAILLE];

const int INVALIDE = -1;

void testeIntersection();
void intersection(ensemble,ensemble,ensemble);
bool ajouter(ensemble,int);
bool supprimer(ensemble,int);
bool appartient(ensemble,int);
void estVide(ensemble,bool*);
void affiche(ensemble);
int cardinal(ensemble);
void init(ensemble);

int main()
{
    ensemble ens;
    bool vide;
    int i, card;
    
    init(ens);

    for (i = 2; i <= 10; i+=2)
    {
        ajouter(ens,i);
    }

    affiche(ens);

    card = cardinal(ens);
    printf("Cardinal de l'ensemble : %d\n", card);

    supprimer(ens,6);

    card = cardinal(ens);
    printf("Cardinal de l'ensemble : %d\n", card);

    estVide(ens,&vide);
    
    if (vide)
    {
        printf("L'ensemble est vide\n");
    }
    else
    {
        printf("L'ensemble n'est pas vide\n");
    }
    
    testeIntersection();

    return EXIT_SUCCESS;
}

void testeIntersection()
{
    int i;
    ensemble e1;
    init(e1);
    
    for (i = 1; i < 4; i++)
    {
        e1[i] = i;
    }
    

    ensemble e2 = {2,3};
    init(e2);
    e2[0] = 2;
    e2[1] = 3;

    ensemble interAtt; 
    init(interAtt);
    interAtt[0] = 2;
    interAtt[1] = 3;

    ensemble e4;
    init(e4);
    e4[0] = 7;
    e4[1] = 8;
    e4[2] = 9;
    
    ensemble e5;
    init(e5);

    ensemble e6;
    init(e6);
    e6[0] = 1;
    e6[1] = 2;
    e6[2] = 3;

    ensemble interObt;
    
    init(interObt);
    intersection(e1,e2,interObt);

    printf("Valeur attendue : ");
    affiche(interAtt);
    printf("Valeur obtenue : ");
    affiche(interObt);

    init(interAtt);
    init(interObt);
    intersection(e1,e4,interObt);
    printf("Valeur attendue : ");
    affiche(interAtt);
    printf("Valeur obtenue : ");
    affiche(interObt);

    init(interAtt);
    init(interObt);
    intersection(e5,e6,interObt);
    printf("Valeur attendue : ");
    affiche(interAtt);
    printf("Valeur obtenue : ");
    affiche(interObt);
    
}

void intersection(ensemble e1, ensemble e2, ensemble inter)
{
    int i, j;
    
    for (i = 0; i < TAILLE; i++)
    {
        for (j = 0; j < TAILLE; j++)
        {
            if (e1[i] != INVALIDE && e1[i] == e2[j])
            {
                inter[i] = e1[i];
            }
        }
    }
}

bool ajouter(ensemble ens, int entier)
{
    int i;
    bool ajoutReal;

    i = 0;
    ajoutReal = appartient(ens, entier);

    while (!ajoutReal && i < TAILLE)
    {
        if (ens[i] == INVALIDE)
        {
            ens[i] = entier;
            ajoutReal = true;
        }
        i++;
    }

    return ajoutReal;
}

bool supprimer(ensemble ens, int entier)
{
    int i;
    bool present;

    i = 0;
    present = false;

    while (!present && i < TAILLE)
    {
        if (ens[i] == entier)
        {
            ens[i] = INVALIDE;
            present = true;
        }
        i++;
    }
    return present;
}

bool appartient(ensemble ens, int e)
{
    int i;
    bool present;
    
    i = 0;
    present = false;
    
    while (!present && i < TAILLE)
    {
        if (ens[i] == e)
        {
            present = true;
        }
        i++;
    }
    return present;
}

void estVide(ensemble ens, bool* vide)
{
    int card;
    card = cardinal(ens);
    if (card > 0)
    {
        *vide = false;
    }
    else
    {
        *vide = true;
    }
}

void affiche(ensemble ens)
{
    int i;
    bool vide;
    estVide(ens,&vide);
    if (vide)
    {
        printf("Ensemble vide\n");
    }
    else
    {
        for (i = 0; i < TAILLE; i++)
        {
            if (ens[i] != INVALIDE)
            {
                printf("%d ",ens[i]);
            }
        }
        printf("\n");
    }
}

int cardinal(ensemble ens)
{
    int i, nbElem;
    nbElem = 0;
    for (i = 0; i < TAILLE; i++)
    {
        if (ens[i] != INVALIDE)
        {
            nbElem++;
        }
    }
    return nbElem;
}

void init(ensemble ens)
{
    int i;
    for (i = 0; i < TAILLE; i++)
    {
        ens[i] = INVALIDE;
    }
}