/**
* @brief Recette de far breton pour 8 personnes
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{ // Declaration des variables
    char nom[10];
    char prenom[10];
    // Saisie des donnees
    printf("Nom ? ");
    scanf("%s", nom);
    printf("Prenom ? ");
    scanf("%s", prenom);
    // Affichage
    printf("Nom=%s\n",nom);
    printf("Prenom=%s\n",prenom);
    return EXIT_SUCCESS;
}