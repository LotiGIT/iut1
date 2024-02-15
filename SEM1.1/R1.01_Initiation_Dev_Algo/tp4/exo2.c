#include <stdio.h>
#include <stdlib.h>

void menu(); 

int main()

{
    int rep;
    const int DEUX = 2;
    const int UN = 1;
    
    menu();

    printf("Réponse :");
    scanf("%d", &rep);
    while(rep !=0) 
    {
        if ((rep < UN || rep > DEUX))
        {
            printf("Choix Errone\n\n");
            menu();
            printf("Réponse :");
            scanf("%d", &rep);
        }
        else if (rep == UN)
        {
            printf("action 1\n\n");
            menu();
            printf("Réponse :");
            scanf("%d", &rep);
        }
        else if(rep == DEUX)
        {
            printf("action 2 \n\n");
            menu();
            printf("Réponse :");
            scanf("%d", &rep);
        }
    }
    
    return EXIT_SUCCESS;
}

void menu ()
{
    printf("0 pour arrêter\n");
    printf("1 pour l'action n°1\n");
    printf("2 pour l'action n°2\n");
}
