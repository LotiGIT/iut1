#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 5

typedef char chaine20[21];
typedef chaine20 tabnoms[N];

void triParInsertion(tabnoms,int);
void maintientTrie(tabnoms,int);
void affiche(tabnoms,int);

int main()
{
     int n = 5;
     tabnoms tab = {"toto","zozo","loto","momo","mimi"};

     affiche(tab,n);
     triParInsertion(tab,n);

     return EXIT_SUCCESS;
}

void triParInsertion(tabnoms t, int n)
{
     for (int i = 1; i < n; i++)
     {
          printf("---%d---\n",i);
          maintientTrie(t,i);
          affiche(t,n);
     }
}

void maintientTrie(tabnoms t, int i)
{
     int j;
     chaine20 cour;
     
     strcpy(cour,t[i]);
     j = i;

     while (j > 0 && strcmp(t[j-1],cour) > 0)
     {
          strcpy(t[j],t[j-1]);
          j--;
     }
     strcpy(t[j],cour);
}

void affiche(tabnoms t, int n)
{
     for (int i = 0; i < n; i++)
     {
          printf("%s ",t[i]);
     }
     printf("\n");
}