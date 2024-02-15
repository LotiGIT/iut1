#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef char chaine20[20];
typedef struct etudiant
{
    chaine20 prenom;
    chaine20 nom;
    int age;
}tetudiant;

void recoit(tetudiant etu);
void saisie(tetudiant *etu);
int compare(tetudiant e1, tetudiant e2);

int main()
{
    tetudiant e1, e2;

    saisie(&e1);
    recoit(e1);
    saisie(&e2);
    recoit(e2);
    compare(e1, e2);
    if (compare(e1, e2)== 0)
    {
        printf("%s et %s ont le même âge.", e1.prenom, e2.prenom);
    }
    if (compare(e1, e2)== 1)
    {
        printf("%s est plus vieux que %s", e1.prenom, e2.prenom);
    }
    if (compare(e1, e2)== -1)
    {
        printf("%s est plus vieux que %s", e2.prenom, e1.prenom);
    }
    
    return EXIT_SUCCESS;
}

void recoit(tetudiant etu)
{
    printf("Etudiant : %s %s, %d ans.", etu.nom, etu.prenom, etu.age);
}

void saisie(tetudiant *etu)
{
    printf("Nom : ");
    scanf("%s", etu->nom);
    printf("Prenom : ");
    scanf("%s", etu->prenom);
    printf("Age : ");
    scanf("%d", &etu->age);
}

int compare(tetudiant e1, tetudiant e2)
{
    if(e1.age==e2.age)
    {
        return 0;
    }
    if(e1.age<e2.age)
    {
        return -1;
    }
    if(e1.age>e2.age)
    {
        return 1;
    }

    return EXIT_SUCCESS;
}