#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5

typedef int typetab [N];

void affiche_int(typetab t, int n);
void maintientTrie(typetab,int);

int main()
{
     typetab tab = {1,2,4,5,3};
 
     affiche_int(tab,5);
     maintientTrie(tab,4);
 
     return EXIT_SUCCESS;
}

void maintientTrie(typetab t , int i)
{
     int j = 0;
     int temp = t[i];
     bool trouve = false;

     while (j < N && !trouve)
     {
          if (temp < 0)
          {
               printf("oui");
          }
          
          j++;
     }
}

void affiche_int(typetab t, int n)
{
     for (int i = 0; i < n; i++)
     {
          printf("%d ",t[i]);
     }
}