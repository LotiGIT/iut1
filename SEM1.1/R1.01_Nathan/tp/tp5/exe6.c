#include <stdlib.h>
#include <stdio.h>

void faireJouer(char,int*);
void afficherResultat(int,int);
void unDeValide(int*);

const int scoreFinal = 12;

int main()
{
    int score1, score2;
    score1 = 0;
    score2 = 0;
    char joueur1;
    char joueur2;
    joueur1 = '1';
    joueur2 = '2';

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

void unDeValide(int* valDe)
{
    if (*valDe < 1 || *valDe > 6)
    {
        int nvVal;
        printf("SAISIE INVALIDE\n");
        printf("Saisir une nouvelle valeur : ");
        scanf("%d",&nvVal);
        *valDe = nvVal;
    }
    
}

void faireJouer(char joueur, int* score)
{
    int valDe;
    
    printf("Entrez le score du joueur %c : ",joueur);
    scanf("%d",&valDe);
    unDeValide(&valDe);
    *score = *score + valDe;

    while (*score < scoreFinal && valDe == 6)
    {
        printf("Le joueur %c a fait un 6, il peut donc rejouer : \n",joueur);
        printf("Entrez le score du joueur %c : ",joueur);
        scanf("%d",&valDe);
        unDeValide(&valDe);
        *score = *score + valDe;
    }
}

void afficherResultat(int score1, int score2)
{
    printf("Score 1 : %d\n",score1);
    printf("Score 2 : %d\n",score2);
}