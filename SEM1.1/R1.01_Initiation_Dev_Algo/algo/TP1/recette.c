/**
* @brief Recette de far breton pour 8 personnes
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    // variables contenant les quantités
    float pruneaux, farine, sucre, lait;
    int oeufs;
    int nbpers;
    // initialisation des quantités
    pruneaux = 250.0;
    farine = 200.0;
    sucre = 150.0;
    oeufs = 4;
    lait = 0.75;
    // affichage des quantités
    printf("Nombre de personnes ? :");
    scanf("%d", &nbpers);
    printf("Pour préparer un Far Breton pour %d personnes, il faut :\n", nbpers);
    printf(" %5.1f grammes de pruneaux\n", (pruneaux * nbpers) / 8);
    printf(" %5.1f grammes de farine\n", farine);
    printf(" %5.1f grammes de sucre\n", sucre);
    printf(" %d oeufs", oeufs);
    printf(" %5.1f litre(s) de lait", lait);
    return EXIT_SUCCESS;
    }