#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char* suite;
    int i;
    int occurence;
    int taille;

    i = 0;
    occurence = 0;

    scanf("%s",suite);
    taille = strlen(suite);


    for (i = 0; i <= taille; i++)
    {
        if (suite[i] == 'a')
        {
            occurence++;
        }
    }
    
    /*
    while (i<=taille)
    {
        
        i++;
    }
    */
    
    printf("%d\n",occurence);

    return 0;
}