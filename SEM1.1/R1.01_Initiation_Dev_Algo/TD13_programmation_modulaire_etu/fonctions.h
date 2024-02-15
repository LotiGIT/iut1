//déclaration des prototypes de fonction    

#ifndef FONCTIONS_H

#define FONCTIONS_H

#include "fonctions_date.h"
#include "const.h"  
#include "types.h"
#include "globales.h"

void afficheTous(t_file f);
t_file initialiser();
void enfiler(t_file* adrFile, t_element elt);
t_element defiler(t_file* adrFile);
void vider(t_file* adrFile);
t_element tete(t_file f);
int estVide(t_file p);
int estPleine(t_file p);
void supprimer_trop_ancien(t_file *adrFile, int nb_a_supprimer);
void sauvegardeFichier(t_file *adrFile, char nomFichier[]);
void lectureFichier(t_file *adrFile, char nomFichier[]);
void supprimer_ancienne_date(t_file* adrFile, char dateStr[]);

//end if ... associée à #ifndef plus haut
#endif