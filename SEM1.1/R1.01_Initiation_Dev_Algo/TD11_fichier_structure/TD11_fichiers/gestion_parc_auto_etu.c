# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// les constantes symboliques
#define MAX_ANNONCES 3000
#define MAX_LIGNES 200
#define MAX_CHAINE 100

// les types
typedef char t_champ [MAX_CHAINE];
typedef char t_ligne [MAX_LIGNES];

typedef struct 
{
    int id;
    t_champ marque, designation;
    int km;
    int prix;
    int annee;
}t_annonce;

typedef struct 
{
    t_annonce tab_annonce[MAX_ANNONCES];
    int nb;
}t_stock;

// les prototypes des fonctions
void initstock(t_stock* adrAnnonces);
void lectureTexte1(char nomFichier[], t_stock *adrAnnonces);
void lectureTexte2(char nomFichier[], t_stock *adrAnnonces);
void lectureTexte3(char nomFichier[], t_stock *adrAnnonces);
void afficheAnnonce(t_stock stock);
void afficheAnnoncesMarque(t_stock stock, t_champ marque);
void sauvegardeBinaire(t_stock stock, t_champ ficBinaire);
void lectureBinaire(t_stock ficBianire);
t_annonce saisieAnnonce(t_stock stock);
void ajoutAnnonceFichierBainaire(t_champ nomFichier, t_annonce annonce);

// les constantes
t_annonce ANNONCE_VIDE={-1, "sans marque", "sans designation", -1, 0, 0};

// le programme principal
int main(){
    t_stock stock_auto;
    t_annonce annonce;
    int choix = -1;
    // initialisation des structures
    initStock(&stock_auto);
    // menu
    while(choix != 0){
        printf("---------------------------------------------------------------------\n");
        printf("1 : lire le fichier texte des annonces (pas d'espace dans les champs)\n");
        printf("2 : lire le fichier texte des annonces \n");
        printf("3 : lire le fichier texte des annonces (variables locales)\n");
        printf("4 : afficher les annonces\n");
        printf("5 : afficher les annonces d'une marque\n");
        printf("6 : sauvegarder les annonces dans un fichier binaire\n");
        printf("7 : lire le fichier binaire des annonces\n");
        printf("8 : ajouter une annonce dans le fichier binaire\n");
        printf("9 : supprimer une annonce\n");
        printf("votre choix :");
        scanf("%d", &choix);
        switch(choix){
            case 0: break;
            case 1: 
                    break;
            case 2: 
                    break;
            case 3: 
                    break;
            case 4: 
                    break;
            case 5: 
                    break;
            case 6: 
                    break;
            case 7: 
                    break;
            case 8: 
                    
                    break;
            default: printf("erreur de choix\n");
        }
    }
    return EXIT_SUCCESS;
}

void initstock(t_stock* adrAnnonces)
{
        adrAnnonces->nb=0;
        for (int i = 0; i < MAX_ANNONCES; i++)
        {
                adrAnnonces ->tab_annonce[i]=ANNONCE_VIDE;
        }
        
}

void lectureTexte1(char nomFichier[], t_stock *adrAnnonces)
{
        FILE * fichAnnonces;
        char ligne[512];
        int id, annee, km, prix;
        t_champ marque, designation;

        fichAnnonces=fopen(nomFichier,"r");
        fgets(ligne, MAX_LIGNES, fichAnnonces);// passer la 1ere ligne
        fgets(ligne, MAX_LIGNES, fichAnnonces);// récupérer la 1ere ligne de données
        while (!feof(fichAnnonces))
        {
                for (int i = 0; i < strlen(ligne); i++)
                {
                        if (ligne[i]==' ')
                        {
                                ligne[i] = '_';
                        }
                        
                }
                sscanf(ligne, "%d %s %s %s %d %d %d", &id, marque, designation, &annee, &km, &prix);
                adrAnnonces->tab_annonce[adrAnnonces->nb].id=id;
                strcpy(adrAnnonces->tab_annonce[adrAnnonces->nb].marque, marque);
                strcpy(adrAnnonces->tab_annonce[adrAnnonces->nb].designation, designation);
                //traitement de données : suite

                //puis :
                (adrAnnonces->nb)++;
                fgets(ligne, MAX_LIGNES, fichAnnonces);
        }
        fclose(fichAnnonces);
}       


void afficheAnnonce(t_stock stock)
{
        for (int i = 0; i < MAX_CHAINE; i++)
        {
                
        }
}
        