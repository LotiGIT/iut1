#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

const char DRAPEAU[2] = "*";

typedef char t_chaine50[51];
typedef char t_chaine10[11];

typedef struct
{
    t_chaine50 c_nom; // nom de l’abonné
    t_chaine10 c_num; // numéro de cet abonné
    int c_duree;      // durée pour laquelle il est abonné
} t_abonne;

typedef t_abonne t_tabAbo[MAX] ;

void lister(char nomFic[]);
void creer(char nomFic[]);
void ajouter(char nomFic[]);
void trier(char nomFic[]);
// Sous fonctions de trier
int copierFichierDansTableau(t_chaine50 nomFic, t_tabAbo t);
void triParInsertion(t_tabAbo t, int n);
void maintientTrie(t_tabAbo t, int i);
void copierTableauDansFichier(char nomFic[], t_tabAbo t, int nb);

int main()
{
    char nomFic2[] = "ABONNES.DATA";
    int menu;

    // char nomFic2[] = "newAbonnes.DATA";
    do
    {
        printf("+----------------------------------------------------------------+\n");
        printf("| lister : 1 | ajouter : 2 | creer : 3 | trier : 4 | quitter : 5 |\n");
        printf("+----------------------------------------------------------------+\n");
        printf("Saisie : ");
        scanf("%d", &menu);
        printf("\n");
        switch (menu)
        {
        case 1:
            lister(nomFic2);
            break;
        case 2:
            ajouter(nomFic2);
            break;
        case 3:
            creer(nomFic2);
            break;
        case 4:
            trier(nomFic2);
        }
    } while (menu != 5);

    return EXIT_SUCCESS;
}

void triParInsertion(t_tabAbo t, int n)
{
     for (int i = 1; i < n; i++)
     {
          maintientTrie(t,i);
     }
}

void maintientTrie(t_tabAbo t, int i)
{
     int j;
     t_abonne cour; // Variable de l'abonnee actuellement utilisée
     
     cour = t[i];
     j = i;

     while (j > 0 && strcmp(t[j-1].c_nom,cour.c_nom) > 0)
     {
          t[j] = t[j-1];
          j--;
     }
     t[j] = cour;
}

void copierTableauDansFichier(char nomFic[], t_tabAbo t, int nb)
{
    FILE *f;

    f = fopen(nomFic, "wb");

    for (int i = 0; i < nb; i++)
    {
        // Ecriture dans le fichier
        fwrite(&t[i], sizeof(t[i]), 1, f);
    }
    fclose(f);
}

int copierFichierDansTableau(t_chaine50 nomFic, t_tabAbo t)
{
    FILE *f;
    bool eof = false;
    int i = 0;

    f = fopen(nomFic, "rb");

    do
    {
        fread(&t[i], sizeof(t[i]), 1, f);
        eof = feof(f);
    } while (!eof);
    printf("\n");
    fclose(f);

    for (int j = 0; j < 4; j++)
    {
        printf("%s %s %d\n", t[j].c_nom, t[j].c_num, t[j].c_duree);
    }
    
    printf("FIN PREMIER LISTER\n");
    return i;
}

void trier(char nomFic[])
{
    t_chaine50 tableauTrie = "tabTrie.DATA";
    t_tabAbo tab;
    int taille;
    taille = copierFichierDansTableau(nomFic, tab);
    maintientTrie(tab, taille);
    copierTableauDansFichier(tableauTrie, tab, taille);
    lister(tableauTrie);
}

void ajouter(char nomFic[])
{
    FILE *f;
    t_abonne abo;

    f = fopen(nomFic, "ab");

    printf("Nom : ");
    scanf("%s", abo.c_nom);

    while (strcmp(abo.c_nom, DRAPEAU) != 0)
    {
        // Lecture des donnees
        printf("Numero : ");
        scanf("%s", abo.c_num);
        printf("Duree d'abonnement : ");
        scanf("%d", &abo.c_duree);
        // Ecriture dans le fichier
        fwrite(&abo, sizeof(abo), 1, f);
        printf("Nom : ");
        scanf("%s", abo.c_nom);
    }
    fclose(f);
}

void creer(char nomFic[])
{
    FILE *f;
    t_abonne abo;

    f = fopen(nomFic, "wb");

    printf("Nom : ");
    scanf("%s", abo.c_nom);

    while (strcmp(abo.c_nom, DRAPEAU) != 0)
    {
        // Lecture des donnees
        printf("Numero : ");
        scanf("%s", abo.c_num);
        printf("Duree d'abonnement : ");
        scanf("%d", &abo.c_duree);
        // Ecriture dans le fichier
        fwrite(&abo, sizeof(abo), 1, f);
        printf("Nom : ");
        scanf("%s", abo.c_nom);
    }
    fclose(f);
}

void lister(char nomFic[])
{
    FILE *f;
    t_abonne abo;
    bool eof = false;

    f = fopen(nomFic, "rb");

    do
    {
        fread(&abo, sizeof(abo), 1, f);
        eof = feof(f);
        if (!eof)
        {
            printf("Nom : %s\n", abo.c_nom);
            printf("Numero : %s\n", abo.c_num);
            printf("Duree d'abonnement : %d mois\n", abo.c_duree);
            printf("\n");
        }
    } while (!eof);
    printf("\n");
    fclose(f);
}

void permuter(t_abonne* a1, t_abonne* a2)
{
    t_abonne temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}