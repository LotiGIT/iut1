#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 512

typedef char chaine10[11];

typedef struct
{
    chaine10 reference;
    int dateEntStock;
} produit;

typedef struct
{
    produit tabElts[MAX];
    int nbElts;
} t_pile;

typedef t_pile stock;
const produit ELTVIDE = {"", -1};

// GESTION DE STOCK
void modifdate(int *);
void saisir(produit *adr_prod, int dateJ);
void afficher(produit prod);
void init(stock *adr_st);
void entree(produit pr, stock *adr_st);
void sortie(stock *adr_st, int dateJ);
// PRIMITIVES
void empiler(t_pile *adrPile, produit elt);
produit depiler(t_pile *adrPile);
bool estPleine(t_pile);
bool estVide(t_pile);
t_pile initialiser();
void vider(t_pile *adrPile);
produit sommet();

int main()
{
    int choix = 4;
    int dateJ = 1;
    stock stk;
    produit prod;

    init(&stk);

    while (choix != 0)
    {
        printf("1) entrée d'un produit dans le stock,\n");
        printf("2) vente d'un produit sorti du stock,\n");
        printf("3) le temps passe,\n");
        printf("0) quitter.\n");
        scanf("%d", &choix);

        if (choix == 1)
        {
            saisir(&prod, dateJ);
            entree(prod, &stk);
        }
        else if (choix == 2)
        {
            prod = depiler(&stk);
            if ((dateJ - prod.dateEntStock) <= 3)
            {
                vider(&stk);
                printf("Tous les produits sont périmés, le frigo est vidé");
            }
            
        }
        else if (choix == 3)
        {
            modifdate(&dateJ);
        }
        else
        {
            choix = 0;
        }   
    }

    return EXIT_SUCCESS;
}

produit depiler(t_pile *adrPile)
{
    produit elt;
    if (!(estVide(*adrPile)))
    {
        elt = adrPile->tabElts[adrPile->nbElts - 1];
        (adrPile->nbElts)--;
        // nettoyage de la pile
        adrPile->tabElts[adrPile->nbElts] = ELTVIDE;
    }
    else
    {
        elt = ELTVIDE;
    }
    return elt;
}

void empiler(t_pile *adrPile, produit elt)
{
    if (!estPleine(*adrPile))
    {
        adrPile->tabElts[adrPile->nbElts] = elt;
        adrPile->nbElts = adrPile->nbElts + 1;
        // Attention aux indices du tableau
    }
    else
    {
        printf("La pile est pleine");
    }
}

produit sommet(t_pile p)
{ // la pile est un paramètre d’entrée
    produit elt;
    if (!(estVide(p)))
    {
        // le sommet de la pile est à l’indice p.nbElts - 1
        elt = p.tabElts[p.nbElts - 1];
    }
    else
    {
        elt = ELTVIDE;
    }
    return elt;
}

t_pile initialiser()
{
    t_pile p;
    for (int i = 0; i < MAX; i++)
    {
        p.tabElts[i] = ELTVIDE; // tous les éléments de la pile sont initialisés
    }
    p.nbElts = 0;
    return p;
}

void sortie(stock *adr_st, int dateJ)
{
    depiler(&adr_st);
}

void entree(produit pr, stock *adr_st)
{
    empiler(adr_st, pr);
}

void init(stock *adr_st)
{
    *adr_st = initialiser();
}

void vider(t_pile *adrPile)
{
    for (int i = adrPile->nbElts - 1; i >= 0; i--)
    {
        adrPile->tabElts[i] = ELTVIDE;
    }
    adrPile->nbElts = 0;
}

bool estPleine(t_pile pile)
{
    return pile.nbElts == MAX;
}

bool estVide(t_pile pile)
{
    return pile.nbElts == 0;
}

void modifdate(int *adr_datej)
{
    // tourne la page de l'éphéméride
    (*adr_datej)++;
}

void saisir(produit *adr_prod, int dateJ)
{
    printf("référence : ");
    scanf("%s", adr_prod->reference);
    adr_prod->dateEntStock = dateJ;
}

void afficher(produit prod)
{
    // affiche à l'écran le produit prod
    printf("%s %d\n", prod.reference, prod.dateEntStock);
}