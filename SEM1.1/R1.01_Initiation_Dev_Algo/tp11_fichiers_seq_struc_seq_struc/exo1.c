#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAX 100
typedef t_abonne t_tabAbo[MAX];

typedef char t_chaine50[51];
typedef char t_chaine10[11];
typedef struct
{
    t_chaine50 c_nom; // nom de l’abonné
    t_chaine10 c_num; // numéro de cet abonné
    int c_duree;      // durée pour laquelle il est abonné
} t_abonne;

void lister(char nomFic[]);
void ecriture(char nomFic[]);
void ajouter(char nomFic[]);
int copieFic(t_chaine50 nomFichier, t_tabAbo tab);
void trier(t_tabAbo tab, int i);
void copieTab(t_tabAbo tab, char nomFic[], int nb);


int main()
{

    lister("ABONNES.DATA");

    return EXIT_SUCCESS;
}

void lister(char nomFic[])
{ // liste le contenu du fichier de
  // nom nomFic
    FILE *f;
    t_abonne a;

    f = fopen(nomFic, "rb");
    fread(&a, sizeof(a), 1, f);
    while (feof(f) != true)
    {
        printf("%s ", a.c_nom);
        printf("%s ", a.c_num);
        printf("%d ", a.c_duree);
        printf("\n");

        fread(&a, sizeof(a), 1, f);
    }
    fclose(f);
}

void ecriture(char nomFic[])
{
    FILE *f;
    t_abonne a;

    f = fopen(nomFic, "wb");
    printf("Nom : ");
    scanf("%s", a.c_nom);
    while (strcmp(a.c_nom, "*") != 0)
    {
        printf("Numéro : ");
        scanf("%s", a.c_num);
        printf("Durée : ");
        scanf("%d", &a.c_duree);
        fwrite(&a, sizeof(a), 1, f);
        printf("Nom : ");
        scanf("%s", a.c_nom);
    }
    fclose(f);
}

void ajouter(char nomFic[])
{
    FILE *f;
    t_abonne a;
    f=fopen(nomFic, "ab");
    printf("Nom : ");
    scanf("%s", a.c_nom);
    while (strcmp(a.c_nom, "*") != 0)
    {
        printf("Numéro : ");
        scanf("%s", a.c_num);
        printf("Durée : ");
        scanf("%d", &a.c_duree);
        fwrite(&a, sizeof(a), 1, f);
        printf("Nom : ");
        scanf("%s", a.c_nom);
    }
    fclose(f);
}