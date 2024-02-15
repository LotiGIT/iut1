#include <stdlib.h>
#include <stdio.h>


const int FIN = -1;

int main()
{
    float moyenne;
    float somme;
    int nbnotes;
    float note;
    int num;

    nbnotes = 0;
    num = 1;
    
    while((note !=FIN) && (note >= 0))
    {
        printf("Quelle est la note %d ? ", num);
        scanf("%f", &note);
        num ++;
        nbnotes ++;
        somme = somme + note;
    }
    while (((note < 0) && (note != FIN)))
    {
        printf("recommence");
        scanf("%f", &note);
        
    }
    
    nbnotes --;
    moyenne = somme/ nbnotes*1.0 ;
    printf("La moyenne est de : %.2f pour un total de %d notes", moyenne, nbnotes);


}

// nombres différents des nombres négatifs
// nombres différents de -1
// nombres dfférents de caractère 
