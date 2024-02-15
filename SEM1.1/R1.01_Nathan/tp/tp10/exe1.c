#include <stdio.h>
#include <stdlib.h>

#define TAILLE 21

typedef char chaine20 [TAILLE];

typedef struct {
    chaine20 nom;
    chaine20 prenom;
    int age;
}tEtudiant;

void afficheEtudiant(tEtudiant);
void saisie(tEtudiant*);
int compare(tEtudiant,tEtudiant);

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
    int resultat;
    if (etu1.age == etu2.age)
    {
        resultat = 0;
    }
    else if (etu1.age > etu2.age)
    {
        resultat = 1;
    }
    else
    {
        resultat = -1;
    }
    return resultat;
}

void saisie(tEtudiant* etu)
{
    printf("Prenom : ");
    scanf("%s",etu->prenom);
    printf("Nom : ");
    scanf("%s",etu->nom);
    printf("Age : ");
    scanf("%d",&etu->age);
}

void afficheEtudiant(tEtudiant etu)
{
    printf("Etudiant : %s %s, %d ans.\n",etu.prenom,etu.nom,etu.age);
}