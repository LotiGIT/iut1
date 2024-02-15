#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;

    do
    {
        printf("(1) Faire action 1\n(2) Faire action 2\n(0) Quitter\n");

        scanf("%d",&choix);
        
        switch (choix)
        {
        case 1:
            printf("Action 1\n");
            break;
        case 2:
            printf("Action 2\n");
            break;
        case 0:
            printf("Au revoir\n");
            break;
        default:
            printf("Erreur");
            break;
        }
    } while (choix!=0);
    
    return 0;
}