#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char DRAPEAU[2] = "*";

typedef char t_chaine50[51] ;
typedef char t_chaine10[11] ;
typedef struct{
    t_chaine50 c_nom; // nom de l’abonné
    t_chaine10 c_num; // numéro de cet abonné
    int c_duree; // durée pour laquelle il est abonné
 }t_abonne ;


void creer(char nomFic[]);
void lister(char nomFic[]);
void ajouter(char nomFic[]);

int main()
{
    char nomFichier[] = "ABONNES.DATA";
    int menu;
    lister(nomFichier);
 return EXIT_SUCCESS;   
}

void lister (char nomFic[]) { // liste le contenu du fichier de
    //nom nomFic
    FILE * f ;
    t_abonne a;
    bool eof = false;

    f = fopen(nomFic, "rb");

    do
    {
        fread(&a, sizeof(a), 1, f);
        eof = feof(f);
        if(!eof)
        {
            printf("Nom : %s\n", a.c_nom);
            printf("Numéro : %s\n", a.c_num);
            printf("Durée d'abonnement : %d mois\n", a.c_duree);
        }
        printf("\n");
        
    }while(!eof);
    printf("\n");
    fclose(f);



}

void creer(char nomFic[])
{
    FILE * f;
    t_abonne a;

    f = fopen(nomFic, "wb");

    printf("Nom : ");
    scanf("%s", a.c_nom);
    while(strcmp(a.c_nom, DRAPEAU)!=0)
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
    File * f;
    t_abonne a;

    f= fopen(nomFic, "")
}