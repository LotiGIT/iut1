#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define N 5
typedef char chaine20[21] ;
typedef chaine20 tabnoms[N] ;

void affiche (tabnoms t, int n);
void maintienTrie(tabnoms t, int i);


int main ()
{
    tabnoms t;
    int n, i;
    affiche(t, n);
    maintienTrie(t, i);
    return EXIT_SUCCESS;
}

void affiche (tabnoms t, int n)
{
    for (int n = 0; n < N; n++)
    {
        printf(t[n]);
    }
}

void maintienTrie(tabnoms t, int i)
{
    int temp;
    while (i > 0 && (strcmp(t[i-1], t[i]) >0))
    {
        strcpy(temp, t[i-1]);
        strcpy(t[i-1], t[i]);
        strcpy(t[i], temp);
        i --;
    }
    
}