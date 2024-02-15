#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>





typedef char chaine20[21];
typedef struct 
{
    
    chaine20 nom;
    chaine20 prenom;
    int age;
}tEtudiant;


void saisie(tEtudiant* etu);
void recoit(tEtudiant etu);
int compare(tEtudiant e1, tEtudiant e2);

int main()
{
    tEtudiant e1, e2;
    saisie(&e1);
    printf("\n");
    saisie(&e2);
    recoit(e1);
    recoit(e2);
    compare(e1, e2);
    if (compare(e1, e2)==0)
    {
        printf("%s et %s ont le même âge \n", e1.prenom, e2.prenom);
    }
    else if (compare(e1, e2)== 1)
    {
        printf("%s est plus âgé que %s \n", e1.prenom, e2.prenom);
    }
    else if (compare(e1, e2)== -1)
    {
        printf("%s est plus âgé que %s \n", e2.prenom, e1.prenom);
    }
    
    
    return EXIT_SUCCESS;
}

void saisie(tEtudiant* etu)
{
    printf("Prénom : ");
    scanf("%s", etu->prenom);
    printf("Nom : ");
    scanf("%s", etu->nom);
    printf("Age : ");
    scanf("%d", &etu->age);
    printf("\n");
}

void recoit(tEtudiant etu)
{
    
    printf("Etudiant : %s %s, %d ans. \n", etu.prenom, etu.nom, etu.age);
    
}

int compare(tEtudiant e1, tEtudiant e2)
{
    if (e1.age == e2.age)
    {
        return 0;
    }
    else if (e1.age > e2.age)
    {
        return 1;
    }
    else if (e2.age > e1.age)
    {
        return -1;
    }
    return EXIT_SUCCESS;
}




