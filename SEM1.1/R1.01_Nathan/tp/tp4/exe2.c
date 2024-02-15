#include <stdio.h>
#include <stdlib.h>

void menu();

int main()
{
    menu();
    return EXIT_SUCCESS;
}

void menu()
{
    int choix;
    do
    {
        printf("0 pour arrêter\n1 pour l'action n°1\n2 pour l'action n°2\n");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            printf("action 1\n");
            break;
        case 2:
            printf("action 2\n");
            break;
        default:
            printf("choix errone\n");
            break;
        }
    } while (choix!=0);
}