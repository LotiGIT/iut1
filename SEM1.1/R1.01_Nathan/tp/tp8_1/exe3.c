#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8

typedef char mot8lettres[N];

bool contient(mot8lettres,char);
void afficher(mot8lettres);
void saisir(mot8lettres);
void init(mot8lettres);

int main()
{
    mot8lettres mot;
    bool trouve;

    init(mot);
    afficher(mot);
    saisir(mot);
    afficher(mot);
    
    trouve = contient(mot,'x');
    
    if (trouve)
    {
        printf("x est présent\n");
    }
    else
    {
        printf("x n'est pas present\n");
    }
    
    return EXIT_SUCCESS;
}

bool contient(mot8lettres mot, char lettre)
{
    int i;
    bool trouve;
    
    i = 0;
    trouve = false;

    while (!trouve && i < N)
    {
        if (mot[i] == lettre)
        {
            trouve = true;
        }
        i++;    
    }
    
    return trouve;
}

void afficher(mot8lettres mot)
{
    for (int i = 0; i < N; i++)
    {
        printf("%c",mot[i]);
    }
    printf("\n");
}

void saisir(mot8lettres mot)
{
    char lettre, temp;
    for (int i = 0; i < N; i++)
    {
        printf("Lettre %d : ",i+1);
        scanf("%c",&lettre);
        scanf("%c",&temp);        
        mot[i] = lettre;
    }
}

void init(mot8lettres mot)
{
    for (int i = 0; i < N; i++)
    {
        mot[i] = '*';
    }
}