#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultat = 1;
    int factorielle;
    int iteration = 1;

    scanf("%d",&factorielle);


    if (factorielle == 0 && factorielle == 1)
    {
        resultat = 1;
    }
    else
    {
        while(iteration <= factorielle)
        {
            resultat = resultat * iteration;
            iteration++;
        }
    }

    printf("Resultat : %d\n",resultat);

    return 0;
}