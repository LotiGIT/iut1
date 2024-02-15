/**
* @brief Recette de far breton pour 8 personnes
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{ // Declaration des variables
char nom[10];
char groupe;
char entree;
// Saisie des donnees
printf("Nom ? ");
scanf("%s", nom);
printf("Groupe ? ");
scanf("%c%c", &entree, &groupe);
// Affichage
printf("Nom=%s\n",nom);
printf("Groupe=%c\n",groupe);
return EXIT_SUCCESS;
}