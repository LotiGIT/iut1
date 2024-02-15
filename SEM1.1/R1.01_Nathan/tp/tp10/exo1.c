#include <stdio.h>
#include <stdlib.h>

#define TAILLE 21
typedef char chaine20[TAILLE];

typedef struct{
    chaine20 nom;
    chaine20 prenom;
    int age;
}t_etudiant;

void recoit(t_etudiant etu);
void saisie(t_etudiant* etu);
int compare(t_etudiant e1, t_etudiant e2);

int main()
{
    t_etudiant e1, e2;

    saisie(&e1);
    recoit(&e1);
    saisie(e2);
    recoit(e2);

    printf("Comparaison : %d\n", compare(e1, e2));
    return EXIT_SUCCESS;
}

void recoit(t_etudiant etu)
{
    printf("Etudiant : %s %s, %d ans. \n", etu.prenom, etu.nom, etu.age);
}

void saisie(t_etudiant* etu)
{
    printf("Nom : ");
    scanf("%s", etu->nom);
    printf("Prenom : ");
    scanf("%s", etu->prenom);
    printf("Age : ");
    scanf("%d", etu->age);
}

int compare(t_etudiant e1, t_etudiant e2)
{
    if(e1.age==e2.age)
    {
        return 0;
    }
    if(e1.age < e2.age)
    {
        return -1;
    }
    if(e1.age > e2.age)
    {
        return 1;
    }
    return EXIT_SUCCESS;
}
