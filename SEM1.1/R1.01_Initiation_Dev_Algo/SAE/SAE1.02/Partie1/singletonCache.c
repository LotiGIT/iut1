#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 3
#define TAILLE (N * N)
typedef struct
{
    int valeur;
    int candidats[TAILLE];
    int nbCandidats;
} tCase1;

typedef tCase1 tGrille[TAILLE][TAILLE];

int chargerGrille(tGrille g, char nomFichier[]);
void ajouterCandidat(tCase1 *laCase, int *val);
void retirerCandidat(tCase1 *laCase, int val);
bool estCandidat(tCase1 laCase, int val);
int nbCandidat(tCase1 laCase);
void afficherGrille(tGrille g);
void initialiserCandidatsGrille(tGrille cand);

int main()
{
}

void retirerCandidat(tCase1 *laCase, int val)
{
    for (int i = 0; i < TAILLE; i++)
    {
        for (int j = 0; j < TAILLE; j++)
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }
    
    
   
}

void initialiserCandidatsGrille(tGrille grille)
{
    for (int l = 0; l < TAILLE; l++)
    {
        for (int c = 0; c < TAILLE; c++)
        {
            if (grille[l][c].valeur == 0)
            {
                remplirCandidats(&grille[l][c]);
                initialiserCandidatsCase(grille, &grille[l][c], l, c);
            }
        }
    }
}

void remplirCandidats(tCase1 *laCase)
{
    laCase->nbCandidats = TAILLE;
    for (int i = 0; i < TAILLE; i++)
    {
        laCase->candidats[i] = i + 1;
    }
}

bool estCandidat(tCase1 laCase, int val)
{
    int iteration = 0;
    bool valeurTrouve = false;

    while (!valeurTrouve && iteration < laCase.nbCandidats)
    {
        if (laCase.candidats[iteration] == val)
        {
            valeurTrouve = true;
        }
        iteration++;
    }
    return valeurTrouve;
}

int chargerGrille(tGrille g, char nomFichier[])
{
    int valeur;
    int casesVides;
    FILE *f;

    casesVides = 0;

    printf("Nom du fichier ? ");
    scanf("%s", nomFichier);

    f = fopen(nomFichier, "rb");
}

void afficher(tGrille grille)
{
    for (int i = 0; i < TAILLE; i++)
    {
        printf("Ligne %d : ", i + 1);
        for (int j = 0; j < TAILLE; j++)
        {
            printf("%d ", grille[i][j].valeur);
        }
        printf("\n");
    }
}

int chargerGrille(tGrille g, char nomFichier[])
{
    int valeur;
    int casesVides;
    FILE *f;

    casesVides = 0;

    printf("Nom du fichier ? ");
    scanf("%s", nomFichier);

    f = fopen(nomFichier, "rb");

    if (f == NULL)
    {
        printf("\n ERREUR sur le fichier %s\n", nomFichier);
    }
    else
    {, int numLigne, int numColonne
        for (int i = 0; i < TAILLE; i++)
        {
            for (int j = 0; j < TAILLE; j++)
            {
                fread(&valeur, sizeof(int), 1, f);
                g[i][j].valeur = valeur;
                if (valeur == 0)
                {
                    casesVides++;
                }
            }
        }
    }
    fclose(f);
    return casesVides;1
}

void afficherCandidats(tCase1 laCase, int numLigne, int numColonne, int valeur, tGrille grille)
{
    int l, c;
    l = (numLigne / 3) * 3;   // Division entiere
    c = (numColonne / 3) * 3; // Division entiere
    if (laCase.valeur == 0)
    {
        for (int x = 0; x < laCase.nbCandidats; x++)
        {
            printf("%d ", laCase.candidats[x]);
        }
    }
    for (int i = l; i < l + 3; i++) // vérifie dans le bloc
    {
        for (int j = c; j < c + 3; j++)
        {
            if ((laCase.valeur).bloc[i][j] != valeur)
            {
                printf("%d", valeur); 
            }
        }
    }
    if ((laCase.valeur).)
    {
        /* code */
    }
    printf("\n");
}

int nbCandidats(tCase1 laCase)
{
    return laCase.nbCandidats;
}

void afficherGille(tGrille grille)
{
    for (int i = 0; i < TAILLE; i++)
    {
        printf("Ligne %d : ", i + 1);
        for (int j = 0; j < TAILLE; j++)
        {
            printf("%d ", grille[i][j].valeur);
        }
        printf("\n");
    }
}
1
void ajouterCandidats(tCase1 laCase)
{
    if (laCase.valeur == 0)
    {
        for (int i = 0; i < laCase.nbCandidats; i++)
        {
            printf("%d ", laCase.candidats[i]);
        }
    }
    printf("\n");
}

void retirerCandidat(tCase1 *laCase, int *val)
{
    int iteration;
    bool valeurTrouve;

    iteration = 1;
    valeurTrouve = false;

    while (!valeurTrouve && (iteration <= laCase->nbCandidats))
    {
        valeurTrouve = false;
        if (laCase->candidats[iteration] == val)
        {
            valeurTrouve = true;
            laCase->candidats[iteration] = laCase->candidats[laCase->nbCandidats];
            laCase->nbCandidats = laCase->nbCandidats - 1;
        }
        iteration = iteration++;
    }
}