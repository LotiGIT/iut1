#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 5

const int MIN = 0;
const int MAX = 99;

typedef int combinaison[N];

void comparaison(combinaison,combinaison,int*);
void genere(combinaison);
void affiche(combinaison);
bool present(combinaison,int);
void saisie(combinaison);
void init(combinaison);

int main()
{
     srand(time(NULL));
     
     return EXIT_SUCCESS;
}

void comparaison(combinaison bulletin, combinaison tirage, int* bonNum)
{
     bonNum = 0;
     for (int i = 0; i < N; i++)
     {
          if (present(bulletin,tirage[i]))
          {
               *bonNum = *bonNum + 1;
          }
     }
}

void genere(combinaison combi)
{
     int nb;
     for (int i = 0; i < N; i++)
     {
          do
          {
               nb = rand() % MAX;
          } while (present(combi,nb));
          
          combi[i] = nb;
     }
}

void affiche(combinaison)
{
     for (int i = 0; i < N; i++)
     {
          printf("%d",i);
          if (i != 0 && i != N-1)
          {
               printf(" - ");
          }
     }
}

bool present(combinaison combi, int val)
{
     int i;
     bool trouve;
     
     i = 0;
     trouve = false;

     while (!trouve && i<N)
     {
          if (combi[i] == val)
          {
               trouve = true;
          }
          i++;
     }

     return trouve;
}

void saisie(combinaison combi)
{
     int valSaisie;
     for (int i = 0; i < N; i++)
     {
          do
          {
               scanf("%d",&valSaisie);
          } while (valSaisie < MIN || valSaisie > MAX);
          combi[i] = valSaisie;
     }
}

void init(combinaison combi)
{
     for (int i = 0; i < N; i++)
     {
          combi[i] = -1;
     }
}