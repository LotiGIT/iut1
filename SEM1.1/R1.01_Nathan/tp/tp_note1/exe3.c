/*
* Nathan THUAULT 1B1 11 octobre 2023
* Affiche le pourcentage d'augmentation, de baisse et de stagnation 
* de temperature pour x patients entre le jour n et le jour n+1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Initialisation de la condition d'arret

const char DRAPEAU[2] = "*";

int main()
{
    // Declaration des variables
    char nom[20];
    int nbPatients;
    float tempe1;
    float tempe2;
    int augmentation;
    int baisse;
    int stagnation;
    float pourcAugm;
    float pourcBais;
    float pourcStag;
    // Certaines variables doivent posseder des valeurs initiales
    nbPatients = 0;
    augmentation = 0;
    baisse = 0;
    stagnation = 0;
    // Premiere saisie du nom
    printf("Nom du patient : ");
    scanf("%s",nom);

    // Tant que le nom n'est pas egal au drapeau, la fonction strcmp() renvoie 0 si c'est egal

    while(strcmp(nom,DRAPEAU) != 0)
    {
        nbPatients++; // On commence la boucle donc la saisie du nom est valide, on ajoute un patient
        printf("Temperature J-2 : ");
        scanf("%f",&tempe1);
        printf("Temperature J-1 : ");
        scanf("%f",&tempe2);
        
        // On compare la temperature du premier jour et du deuxieme puis on incremente les variables en consequence
        if (tempe1 < tempe2)
        {
            augmentation++;
        }
        else if (tempe1 == tempe2)
        {
            stagnation++;
        }
        else
        {
            baisse++;
        }

        // On demande le nom du prochain patient ou possiblemment de la condition d'arret
        printf("Nom du patient : ");
        scanf("%s",nom);
    }

    if(nbPatients > 0)
    {
        // Division par 0 impossible car nbPatients > 0

        pourcAugm = (augmentation / (nbPatients*1.0))*100;
        pourcBais = (baisse / (nbPatients*1.0))*100;
        pourcStag = (stagnation / (nbPatients*1.0))*100;

        // Affichage du resultat si le nombre de patient est superieur a 0
        printf("Sur %d patient(s) :\n", nbPatients);
        printf("%d patient(s) dont la temperature a augmente (%3.1f%%)\n", augmentation, pourcAugm);
        printf("%d patient(s) dont la temperature a baisse (%3.1f%%)\n", baisse, pourcBais);
        printf("%d patient(s) dont la temperature est constante (%3.1f%%)\n", stagnation, pourcStag);
    }
    else
    {
        // Affichage du resultat si l'utilisateur a rentre la condition d'arret des la premiere saisie
        printf("Aucun patient saisie\n");
    }

    return EXIT_SUCCESS;
}