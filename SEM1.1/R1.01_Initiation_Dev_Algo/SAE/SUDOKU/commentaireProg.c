/**
*
* \brief Programme de création et manipulation d'un SUDOKU.
*
* \author Eliott JANOT
*
* \version 1.0
*
* \date 25 novembre 2023
*
* Ce programme propose plusieurs opérations de manipulation
* d'entiers dans une grille de SUDOKU où ils sont implémentées
* par des listes chainées de caractères.
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>






/**
*
* \def define TAILLE
*
* \brief constante qui définit la Taille d’un tableau.
* 
*/
#define TAILLE 9

const int min = 1;
const int max = 9;
const int bloc = 2;

/**
*
* \typedef tGrille
*
* \brief type int de TAILLE entiers
*
* Le type int sert à définir une taille de tableau.
*
*
*/
typedef int tGrille[TAILLE][TAILLE]; /*résultat trouvé en multipliant le nombre de lignes par le nombres de colonnes du tableau : 31*13* */

void chargerGrille(tGrille g);
void afficherGrille(tGrille g);
void saisir(int *valeur);
bool possible(tGrille grille, int numLigne, int numColonne, int valeur);
bool grillePleine(tGrille grille1);


/*****************************************************
            * PROGRAMME PRINCIPAL *
*****************************************************/

/**
*
*       \fn main
*
*       \brief Programme principal
*       \return Le programme retourne EXIT_SUCCESS.
*      
*      
*       Programme permettant le fonctionnement du SUDOKU.
*
*
*/
int main()
{
    tGrille sudoku;
    int numLigne, numColonne, valeur;

    chargerGrille(sudoku);
   
    while (!grillePleine(sudoku))
    {
        afficherGrille(sudoku);

        printf("Indice de la case ? ");
        saisir(&numLigne);
        saisir(&numColonne);

        numColonne--;
        numLigne--;

        if (sudoku[numLigne][numColonne]!= 0)
        {
            printf("IMPOSSIBLE, la case n'est pas libre.");
        }
        else
        {
            printf("Valeur à insérer : ");
            saisir(&valeur);
            if (possible(sudoku, numLigne, numColonne, valeur))
            {
                sudoku[numLigne][numColonne] = valeur;
            }
        }
    }
    printf("Grille pleine, fin de partie");
}

/**
*
*       \fn chargerGrille(tGrille g)
*
*       \brief Charge une grille de taille g
*
*       \param g taille de la grille
*      
*       Charge en mémoire une grille de sudoku à partir d'un fichier dont le nom est lu au clavier.
*
*
*/
void chargerGrille(tGrille g)
{
    char nomFichier[30];
    FILE *f;

    printf("Nom du fichier ? ");
    scanf("%s", nomFichier);

    f = fopen(nomFichier, "rb");

    if (f == NULL)
    {
        printf("\n ERREUR sur le fichier %s\n", nomFichier);
    }
    else
    {
        fread(g, sizeof(int), TAILLE * TAILLE, f);
    }
    fclose(f);
}


/**
*
*       \fn afficherGrille(tGrille g)
*
*       \brief réalise l'affichage de la grille et son contenu
*
*       \param g grille de sudoku
*
*       Charge en mémoire une grille de sudoku à partir d'un fichier dont le nom est lu au clavier.
*
*/
void afficherGrille(tGrille g)

/*  + et - dessinent le cadre de la grille*/
/*  Sur une ligne, chaque valeur est encadrée par un espace de chaque côté*/
/*  Une case vide est remplacée par un point*/
{
    printf("    1  2  3   4  5  6   7  8  9\n");
    for (int i = 0; i < TAILLE; i++)
    {

        if (i % 3 == 0)
        {
            printf("  +---------+---------+---------+\n"); // Affiche
        }

        for (int j = 0; j < TAILLE; j++)
        {
            if (j == 0)
            {

                printf("%d ", i + 1);
            }
            if (j % 3 == 0)
            {
                printf("|");
            }

            if (g[i][j] == 0)
            {
                printf(" . ");
            }
            else
            {
                printf(" %d ", g[i][j]);
            }
        }
        printf("|");
        printf("\n");
    }
    printf("  +---------+---------+---------+\n");
}


/**
*
*       \fn saisir(int *valeur)
*
*       \brief lit au clavier une valeur
*
*       \param valeur paramètre en sortie qui contient la valeur saisie.
*
*       Permet de convertir une chaine de caractère en entier
*
*/
void saisir(int *valeur) 
/*  La saisie se répète tant que la valeur (entier compris entre 1 et 9) n'est pas valide*/
/*  Messages d'erreurs explicites*/
/*  Fonctionne avec numéros de lignes, numéro de colonne, valeur de la grille*/
{
    char ch[20];
    bool saisieKo;

    do
    {
        scanf("%s", ch);
        saisieKo = (sscanf(ch, "%d", valeur) == 0 || *valeur < min || *valeur > max);
        if (saisieKo)
        {
            printf("Erreur, ressaisir valeur : ");
        }

    } while (saisieKo);
}


/**
*
* \fn bool possible(tGrille grille, int numLigne, int numColonne, int valeur)
*
* \brief Fonction qui indique si c'est possible de rentrer une valeur.
*
* \param grille  tableau de grille
* \param numLigne  numéro de ligne
* \param numColonne  numéro de colonne
* \param valeur  saisie de valeur
* \return true si la chaine est vide, false sinon.
*
* Consiste à vérifier si une valeur ne se trouve déjà pas
* sur la même ligne, colonne ou bloc
*
*/
bool possible(tGrille grille, int numLigne, int numColonne, int valeur) /*fonction vérifie si une valeur peut être ajoutée dans la grille*/
/*  Valeur n'est pas déjà présente sur la même ligne que la case*/
/*  Valeur n'est pas déjà présente sur la même colonne que la case*/
/*  Valeur n'est pas déjà présente dans le même bloc que la case*/
/*  Message d'erreurs explicites*/
{
    int i;
    int l, c;
    bool possible;
    possible = true;

    l = (numLigne / 3) * 3;   // Division entiere
    c = (numColonne / 3) * 3; // Division entiere
    for (int i = l; i < l + 3; i++)
    {
        for (int j = c; j < c + 3; j++)
        {
            if (grille[i][j] == valeur)
            {
                possible = false;
                printf("La valeur est déjà présente dans le bloc.\n");
            }
        }
    }
    for (i = 0; i < TAILLE; i++)
    {
        if ( grille[i][numColonne] == valeur) // i se balade dans la colonne et cherche si personne n'est comme lui
        {
            possible = false; // si personne n'est comme lui alors il dit que c'est possible de s'installer
            printf("La valeur est déjà présente dans sa colonne.\n");
        }
    }
    for (int j = 0; j < TAILLE; j++)
    {
        if (grille[numLigne][j] == valeur) // j se balade dans la ligne et cherche si personne n'est comme lui
        {
            possible = false; // si personne n'est comme lui alors il dit que c'est possible de s'installer
            printf("La valeur est déjà présente dans sa ligne.\n");
        }
    }
    return possible;
}

/**
*
* \fn bool grillePleine(tGrille grille1)
*
* \brief Fonction qui indique si la grille est remplie.
*
* \param grille1  tableau de grille
* \return true si la grille est pleine, false sinon.
*
* Consiste à vérifier si la grille est
* sur la même ligne, colonne ou bloc
*
*/
bool grillePleine(tGrille grille1)
{
    int i, j;
    bool pleine;
    i = 0;
    j = 0;
    pleine = true;
    while (i < TAILLE && pleine)
    {
        while (j < TAILLE && pleine)
        {
            if (grille1[i][j] == 0)
            {
                pleine = false;
            }
            j++;
        }
        i++;
        j = 0;
    }
    return pleine;
}
