#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define N 8
typedef char mot8lettres[N] ;
void init( mot8lettres);
void saisir(mot8lettres);
void afficher(mot8lettres);
void contient(mot8lettres, char);


int main()
{
    bool res;
    

    mot8lettres tab;
    init(tab);
    saisir(tab);
    afficher(tab);
    res = contient(tab, 'x');
    printf("%d", res);


}

void init( mot8lettres tablo)
{
    for (int i = 0; i < N; i++)
    {
        tablo[i] = '*';
    }
    
}

void saisir(mot8lettres tablo)
{
    char poubelle;
    char i;

    scanf("%c%c", &tablo[i], &poubelle);
}


void afficher(mot8lettres tablo)
{
    printf("");
}
