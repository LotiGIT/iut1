#include <stdio.h>
#include <stdlib.h>

void usage();
void calcul(int,int,char);

const char OPERATEUR_ARRET = ':';

int main()
{
    int operande1;
    int operande2;
    char operateur;

    operateur = '+';

    usage();
    
    do
    {
        scanf("%d %c %d",&operande1,&operateur,&operande2);
        calcul(operande1,operande2,operateur);
    } while (operateur != OPERATEUR_ARRET);
    
    return EXIT_SUCCESS;
}

void calcul(int operande1, int operande2, char operateur)
{
    float resultat;
    switch (operateur)
    {
    case '+':
        resultat = operande1 + operande2;
        printf("%d %c %d = %5.2f\n",operande1,operateur, operande2,resultat);
        break;
    case '-':
        resultat = operande1 - operande2;
        printf("%d %c %d = %5.2f\n",operande1,operateur, operande2,resultat);
        break;
    case '*':
        resultat = operande1 * operande2;
        printf("%d %c %d = %5.2f\n",operande1,operateur, operande2,resultat);
        break;
    case '/':
        if (operande2 != 0)
        {
            resultat = operande1 / (operande2*1.0);
            printf("%d %c %d = %5.2f\n",operande1,operateur, operande2,resultat);
        }
        else
        {
            printf("La division par 0 n'est pas defini\n");
        }
        break;
    case ':':
        printf("L'operateur : a ete saisi, fin du programme.\n");
        break;
    default:
        printf("L'operateur %c n'est pas reconnu\n",operateur);
        break;
    }
}

void usage()
{
    printf("Ecrivez une suite d’operations sous la forme:\n<operande> <operateur> <operande>\n");
    printf("Pour terminer utilisez "":"" comme operateur.\nPar exemple ""0 : 0"" stoppe le programme\n");
}