#include <stdlib.h>
#include <stdio.h>

void faireJouer(char,int*);
void afficherResultat(int,int);

const int scoreFinal = 12;

int main()
{
    int score1, score2;
    score1 = 0;
    score2 = 0;
    char joueur1;
    char joueur2;
    joueur2 = 'y';
    joueur1 = 'z';

    while (score1 < scoreFinal && score2 < scoreFinal)
    {
        
        faireJouer(joueur1,&score1);
        afficherResultat(score1,score2);
        
        if (score1 < scoreFinal)
        {
            faireJouer(joueur2,&score2);
            afficherResultat(score1,score2);
        }        
    }

    if (score1 >= scoreFinal)
    {
        printf("Le joueur %c a gagne la partie\n",joueur1);
    }
    else
    {
        printf("Le joueur %c a gagne la partie\n",joueur2);
    }
    
    
    return EXIT_SUCCESS;
}

void faireJouer(char joueur, int* score)
{
    int valDe;
    printf("Entrez le score du joueur %c : ",joueur);
    scanf("%d",&valDe);
    *score = *score + valDe;
}

void afficherResultat(int score1, int score2)
{
    printf("Score 1 : %d\n",score1);
    printf("Score 2 : %d\n",score2);
}