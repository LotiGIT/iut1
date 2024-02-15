#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX=20;
const int MIN=1;
const int MAXDE=6;

void faireJouer( int * score, char j);
void afficherResultat(int score1, int score2, char a, char b );

int main ()
{
    int score1;
    int score2;
    char poubelle;
    char j1;
    char j2;

    printf("Nom du joueur 1 : ");
    scanf("%c%c", &j1, &poubelle);
    printf("Nom du joueur 2 : ");
    scanf("%c%c", &j2, &poubelle);
    while(score1 < MAX && score2 < MAX)
    {
        
        faireJouer(&score1, j1);
        if (score1<MAX)
        {
            faireJouer(&score2, j2);
        }
    }
    afficherResultat(score1, score2, j1, j2);
}


void faireJouer( int *score, char j)
{
    int res ;
    printf("Valeur du dé joué de %c: ", j);
    scanf("%d", &res);
    while (res == MAXDE)
    {
        *score = res + *score; 
        printf("Bravo tu as le droit de rejouer : \n\n Valeur du dé joué de %c: ", j);
        scanf("%d", &res);
        
    }
    while (res < MIN || res > MAXDE)
    {
        
        printf("Ressaisir une valeur de dé valide : ");
        scanf("%d", &res);
        while (res == MAXDE)
        {
            *score = res + *score; 
            printf("Bravo tu as le droit de rejouer : \n\n Valeur du dé joué de %c: ", j);
            scanf("%d", &res);
            
        }
    }
    
    
    
    *score = *score + res;
}

void afficherResultat(int score1, int score2, char a, char b )
{
    
    printf("score 1 : %d\n", score1);
    printf("score 2 : %d\n", score2);

    if (score1 > score2)
    {
        printf("Le Vainqueur est le joueur %c\n", a);
    }
    else if (score1 < score2)
    {
        printf("Le Vainqueur est %c\n", b);
    }
    else
    {
        printf("Egalité");
    }

}



