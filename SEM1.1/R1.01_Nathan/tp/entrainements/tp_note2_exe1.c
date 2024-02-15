#include <stdio.h>
#include <stdlib.h>

void afficherResultat(int,int);
int foncRecur(int);

int main()
{
     afficherResultat(2,10);
     afficherResultat(3,22);
     afficherResultat(4,46);
     afficherResultat(5,94);

     return EXIT_SUCCESS;
}

void afficherResultat(int n, int valAtt)
{
     printf("valeur : %d\n",n);
     printf("resultat attendu : %d\n",valAtt);
     printf("resultat obtenu : %d\n",foncRecur(n));
}

int foncRecur(int n)
{
     int res;

     if (n == 0)
     {
          res = 1;
     }
     else
     {
          res = 2*foncRecur(n-1) + 2;
     }
     
     return res;
}