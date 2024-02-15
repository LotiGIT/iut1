#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbValeurs;
    int val = 0;
    int max = 0;
    int i = 1;
    

    scanf("%d",&nbValeurs);

    while (i <= nbValeurs)
    {
        scanf("%d",&val);

        if(i == 1)
        {
            max = val;
        }
        else if(max < val)
        {
            max = val;
        }
        i++;
    }
    
    printf("%d\n",max);

    return 0;
}