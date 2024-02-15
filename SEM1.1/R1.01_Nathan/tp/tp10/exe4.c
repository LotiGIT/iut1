#include <stdio.h>
#include <stdlib.h>

#define TAILLE 21

typedef char chaine20 [TAILLE];

typedef struct {
    chaine20 nom;
    chaine20 prenom;
    date dateNaissance;
} tEtudiant;

typedef struct {
    int jour;
    int mois;
    int annee;
} date;

void afficheEtudiant(tEtudiant);
void saisie(tEtudiant*);
void saisieDate(date*);
int compare(tEtudiant,tEtudiant);
void afficherAnnee(tEtudiant);

int main()
{
    tEtudiant etu1, etu2;
    saisie(&etu1);
    saisie(&etu2);
    afficheEtudiant(etu1);
    afficheEtudiant(etu2);
    printf("Comparaison : %d\n",compare(etu1,etu2));

    return EXIT_SUCCESS;
}

int compare(tEtudiant etu1, tEtudiant etu2)
{

}

void saisie(tEtudiant* etu)
{
    printf("Prenom : ");
    scanf("%s",etu->prenom);
    printf("Nom : ");
    scanf("%s",etu->nom);
    saisieDate(etu->dateNaissance);
}

void saisieDate(date* dat)
{
    printf("Jour : ");
    scanf("%d",dat->jour);
    printf("Mois : ");
    scanf("%d",dat->mois);
    printf("Annee : ");
    scanf("%d",dat->annee);
}

void afficherAnnee(tEtudiant e)
{
    printf("Jour : %d", e.dateNaissance.jour);
    printf("Mois : %d", e.dateNaissance.mois);
    printf("Annee : %d", e.dateNaissance.annee);
}

void afficheEtudiant(tEtudiant etu)
{
    printf("Etudiant : %s %s, %d ans.\n",etu.prenom,etu.nom);
    afficherAnnee(etu);
}