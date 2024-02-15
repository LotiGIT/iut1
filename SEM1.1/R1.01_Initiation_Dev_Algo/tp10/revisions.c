#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef char chaine20[20];
typedef struct
{
    chaine20 nom;
    chaine20 prenom;
    int age;
}t_etudiant;

void recoit(t_etudiant etu);
void saisie(t_etudiant *etu);
int compare(t_etudiant e1, t_etudiant e2);

int main()
{
    t_etudiant e1, e2;
    saisie(&e1);
    recoit(e1);
    saisie(&e2);
    recoit(e2);
    compare(e1, e2);
    if(compare(e1, e2) == 0)
    {
        printf("%s et %s ont le même âge \n", e1.prenom, e2.prenom);
    }
    else if(compare(e1, e2) == 1)
    {
        printf("%s est plus vieux que %s \n", e1.prenom, e2.prenom);
    }
    else if(compare(e1, e2) == -1)
    {
        printf("%s est plus vieux que %s \n", e2.prenom, e1.prenom);
    }
    return EXIT_SUCCESS;
}

void recoit(t_etudiant etu)
{
    printf("Etudiant : %s %s, %d ans. \n", etu.prenom, etu.nom, etu.age);
}

void saisie(t_etudiant *etu)
{
    printf("Nom :");
    scanf("%s", etu->nom);
    printf("Prénom :");
    scanf("%s", etu->prenom);
    printf("Age :");
    scanf("%d", &etu->age);
}

int compare(t_etudiant e1, t_etudiant e2)
{
    if(e1.age>e2.age)
    {
        return 1;
    }
    else if(e1.age<e2.age)
    {
        return -1;
    }
    else if(e1.age == e2.age)
    {
        return 0;
    }

    return EXIT_SUCCESS;
}