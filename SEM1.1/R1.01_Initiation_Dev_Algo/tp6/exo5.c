#include <stdlib.h>
#include <time.h>


int aleaInfBorne(int borne){  
    srand(time(NULL));
    return rand() % borne;
}


/*Aide :

#include <time.h>
#include <stdlib.h>


srand(time(NULL)); //initialisation du générateur à partir de // l'heure machine
int nbAleatoire = rand(); //récupération d'un nombre pseudo-aléatoire

*/