#include <stdio.h>
#include <stdlib.h>

void comparaison(); 
int main()
{
    int nb1, nb2;
    

    printf("Entrer 2 nombres entiers de votre choix\n");
    printf("1er nombre :");
    scanf("%d", &nb1);
    printf("2eme nombre :");
    scanf("%d", &nb2);

    comparaison (nb1, nb2);
}

void comparaison (int x1, int x2)
{

    if (x1 > x2)
    {
        printf("%d est plus petit que %d", x2, x1);
    }
    else if (x2 > x1)
    {
        printf("%d est plus petit que %d", x1, x2);
    }
    else if (x1 == x2)
    {
        printf("%d est égal à %d", x1, x2);
    }

    

}