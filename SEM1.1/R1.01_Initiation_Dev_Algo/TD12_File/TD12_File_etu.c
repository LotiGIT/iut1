#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// déclaration des constantes symboliques
#define MAX_MESSAGES 20
#define MAX_CAR 80

// définition des types
typedef  char t_message [MAX_CAR];
typedef struct
{
    t_message message;
}t_element;

typedef struct 
{
    t_element tabElt[MAX_MESSAGES];
    int nbElt;
}t_file;

// definition des constantes
const t_element ELTVIDE = {"----- MESSAGE VIDE -----"};
// prototypes des fonctions

void afficheTous(t_file f); // fontion secrete
t_file initialiser();
void enfiler(t_file* adrFile, t_element elt);
void enfiler1(t_file* adrFile, t_element elt);
t_element defiler(t_file* adrFile);
t_element defiler1(t_file* adrFile);
void vider(t_file* adrFile);
t_element tete(t_file f);
int estVide(t_file p);
int estPleine(t_file p);
void supprimer_trop_ancien(t_file *adrFile, int nb_a_supprimer);
void sauvegardeFichier(t_file *adrFile, char nomFichier[]);
void lectureFichier(t_file *adrFile, char nomFichier[]);


// programme principal
int main(){
    // Declaration des variables
    t_file maFile;
    t_element elt;
    t_message msg;
    int choix;
    // initialisation
    maFile = initialiser();
    // ajouter quelques elements
    for (int i = 0 ; i<4 ; i++){
        sprintf(elt.message,"message %d", i);
        enfiler(&maFile, elt);
    }
    do{ // menu
        printf("----------------------------------------------------\n");
        printf("0 : quitter\n");
        printf("1 : afficher le nombre d'elements dans la file ?\n");
        printf("2 : ajouter un element a la file\n");
        printf("3 : retirer un element et afficher le message \n");
        printf("4 : afficher le message de la tete de file\n");
        printf("5 : vider la file\n");
        printf("6 : la file est-elle vide ?\n");
        printf("7 : la file est-elle pleine ?\n");
        printf("8 : supprimer les messages trop anciens\n");
        printf("9 : sauvegarde dans un fichier texte et vider\n");
        printf("10: lecture des messages du fichier texte\n");
        printf("votre choix : ");
        scanf("%d", &choix);
        printf("----------------------------------------------------\n");
        // traitement
        switch(choix){
            case -1 :   afficheTous(maFile);
            case 0:     break;
            case 1:     // afficher le nombre d'elements dans la file
                        break;
            case 2:     // ajouter un element (à donner aux étudiants)
                        break;
            case 3:    // retirer un element et afficher le message
                        break;
            case 4:    // afficher le message de la tete de file
                        break; 
            case 5:    // vider la file
                        break;
            case 6:    // la file est-elle vide ?
                         break;
            case 7:    // la file est-elle pleine ?
                        break;
            case 8:     // supprimer les messages trop anciens
                        break;
            case 9:     //sauvegarde dans un fichier texte et vider
                        break;
            case 10:    //lecture des messages du fichier texte
                        break;
            default :   printf("erreur de saisie\n");
        }
    }while(choix != 0);
    return EXIT_SUCCESS;
}
// Definitions des fonctions

void afficheTous(t_file f)
{
    for (int i = 0; i < MAX_MESSAGES; i++)
    {
        printf("%d %s\n", i, f.tabElt[i].message);
    }
    
}
t_file initialiser()
{
    t_file f;
    for (int i = 0; i < MAX_MESSAGES; i++)
    {
        f.tabElt[i] = ELTVIDE; // tous le séléments de la file sont initialisées
    }
    f.nbElt=0;
    
    return f;
}

void enfiler(t_file* adrFile, t_element elt)
{
    if (!(estPleine(*adrFile)))
    {
        adrFile->tabElt[adrFile->nbElt]=elt;
        adrFile->nbElt++;
    }
    else
    {
        printf("ATTENTION La file est pleine\n");
    }
    
    
}

int estVide(t_file f)
{
    return(f.nbElt==0);
}

int estPleine(t_file f)
{
    return(f.nbElt==MAX_MESSAGES);
}

t_element defiler(t_file *adrFile)
{
    t_element elt;
    if (!(estVide(*adrFile)))
    {
        elt = adrFile->tabElt[0];
        for (int i = 0; i < adrFile->nbElt-1; i++)
        {
            adrFile->tabElt[i] = adrFile->tabElt[i+1];
        }
        adrFile->tabElt[adrFile->nbElt-1] = ELTVIDE;
        adrFile->nbElt--;
    }
    else
    {
        elt = ELTVIDE; // à définir
    }
    return elt;
}

void sauvegardeFichier(t_file *adrFile, char nomFichier[])
{
 FILE *fich;
 fich = fopen(nomFichier, "w");
 while (adrFile->nbElt>0)
 {
    fprintf(fich, "%s\n", defiler(adrFile).message);
 }
 fclose(fich);
 
}

void vider(t_file *adrFile)
{
    while (adrFile->nbElt>0)
    {
        adrFile->tabElt[adrFile->nbElt-1] = ELTVIDE;
        (adrFile->nbElt)--;
    }
    
}

void lectureFichier(t_file *adrFile, char nomFichier[])
{
    FILE *fich;
    t_message msg;
    t_element elt;

    fich = fopen(nomFichier,"r");
    fgets(msg, MAX_CAR, fich);
    while (!deof(fich))
    {
        msg[strlen(msg)-1]='\0';
        printf("%s ",msg);
        strcpy(elt.message, msg);
        enfiler(adrFile, elt);
        fgets(msg, MAX_CAR, fich);
    }
    fclose(fich);
}