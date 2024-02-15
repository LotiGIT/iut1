#include <stdio.h>
#include <stdlib.h>

void suiteCroiss();
int estNonMonotone(int,int,int);

const int DRAPEAU = -1;

int main()
{
    suiteCroiss();
    return EXIT_SUCCESS;
}

void suiteCroiss()
{
    int val, valPrecedente;
    int constante, croissante, decroissante, nonMonotone; // 0 = False 1 = True
    int iter;

    iter = 0;

    constante = 0;
    croissante = 0;
    decroissante = 0;
    nonMonotone = 0;
    
    printf("Entrez une valeur : ");
    scanf("%d",&val);
    valPrecedente = val;

    while ((val != -1))
    {
        if (iter == 1)
        {
            constante = 0;
        }
        
        if (valPrecedente == val)
        {
            constante = 1;
        }
        else if (valPrecedente < val)
        {
            croissante = 1;
        }
        else if (valPrecedente > val)
        {
            decroissante = 1;
        }

        iter++;
        valPrecedente = val;
        printf("Entrez une valeur : ");
        scanf("%d",&val);
    }

    nonMonotone = estNonMonotone(croissante,decroissante,constante);

    if (val == -1 && valPrecedente == -1)
    {
        printf("Aucune valeur n'a été saisi\n");
    }
    else if (nonMonotone > 1)
    {
        printf("La suite est non monotone\n");
    }
    else if (croissante == 1)
    {
        printf("La suite est croissante\n");
    }
    else if (decroissante == 1)
    {
        printf("La suite est decroissante\n");
    }
    else if (constante == 1)
    {
        printf("La suite est constante\n");
    }   
}

int estNonMonotone(int croi, int decroi, int cons)
{
    return croi + decroi + cons;
}

/*
TESTS
Suite constante 5 5 5
Suite croissante 5 6 7
Suite decroissante 9 8 7
Suite non monotone 1 2 3 2 1
Une seule valeur 5
2 valeur 1 2
0 valeur -1
Valeurs negatives (Pas compris ds l'enonce car drapeau = -1)
Tres tres grandes valeurs
*/