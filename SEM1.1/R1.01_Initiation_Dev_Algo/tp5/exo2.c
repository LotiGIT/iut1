#include <stdlib.h>
#include <stdio.h>


void suite (int *min, int *max);
const int FIN = 0;
const int BASE = -1;

int main() /*fait appel à la procédure pour afficher le max et min*/
{
    int min;
    int max;
    suite(&min, &max);
    printf("le Minimum est %d et le max est %d.\n", min, max);
    
    
}

void suite(int *min, int *max) /*permet de calculer le min et le max des valeurs données*/
{
    int val;
    
    printf("Entrer valeur : ");
    scanf("%d", &val);
    if (val == FIN)
    {
        *min = BASE;
        *max = BASE;
    }
    else
    {
        *min = val;
        *max = val;
        while (val > 0 || val != FIN)
        {
            if (*max < val )
            {
                *max = val ;
            }
            else if (*min > val)
            {
                *min = val;
            }
            
            scanf("%d", &val);
        }
        
        
    }
    
}