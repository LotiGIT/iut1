#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char jeu();
char pierreFeuilleCiseau(char,char);
char generer();

int main()
{
    int homme, machine;
    char res;
    homme = 0;
    machine = 0;

    srand(time(NULL));
    
    while(homme < 3 && machine < 3)
    {
        res = jeu();

        switch (res)
        {
        case 'H':
            homme++;
            printf("L'humain gagne (H:%d M:%d)\n",homme,machine);
            break;
        case 'O':
            machine++;
            printf("La machine gagne (H:%d M:%d)\n",homme,machine);
            break;
        case 'N':
            printf("Nul (H:%d M:%d)\n",homme,machine);
            break;
        default:
            printf("Erreur!\n");
            break;
        }
    }
    
    if (homme == 3)
    {
        printf("L'Humanite l'emporte\n");
    }
    else
    {
        printf("Les Machines nous ont dépassées\n");
    }

    return EXIT_SUCCESS;
}

char jeu()
{
    char main, machine, temp;
    
    printf("Entrez votre main : ");
    scanf("%c%c",&main,&temp);
    
    machine = generer();
    printf("Ordinateur : %c\n", machine);
    
    temp = pierreFeuilleCiseau(main,machine);
    
    switch (temp)
    {
    case 'G':
        return 'H';
        break;
    case 'P':
        return 'O';
        break;
    case 'N':
        return 'N';
        break;
    default:
        printf("Erreur!\n");
        return 'E';
        break;
    }
}

char pierreFeuilleCiseau(char action1, char action2)
{
    char res;
    if (action1 == action2)
    {
        res = 'N';
    }
    else if ((action1 == 'P' && action2 == 'C') || (action1 == 'F' && action2 == 'P') || (action1 == 'C' && action2 == 'F'))
    {
        res = 'G';
    }
    else if ((action1 == 'P' && action2 == 'F') || (action1 == 'F' && action2 == 'C') || (action1 == 'C' && action2 == 'P'))
    {
        res = 'P';
    }
    
    return res;
}

char generer()
{
    int nb;
    char action;

    nb = rand() % 2;

    switch (nb)
    {
    case 0:
        action = 'P';
        break;
    case 1:
        action = 'F';
        break;
    case 2:
        action = 'C';
        break;
    default:
        action = 'E';
        printf("Erreur!\n");
        break;
    }

    return action;
}