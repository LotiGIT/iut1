/*
	Ce fichier est spécialisé dans le traitement des dates, ici au point de vue des déclarations 
	et non de l'implémentation/définition des fonctions
*/

# ifndef FONCTIONS_DATE_H
# define FONCTIONS_DATE_H

#include <stdio.h>
#include <time.h>

#define MAX_SIZE 80
/* date_str : date sous la forme jj/mm/aaaa_hh:mm:ss
    jj : numéro du jour du mois
	mm : numéro du mois de l’année
	aaaa : année
	hh : heures
	mm : minutes
	ss : secondes
*/

int fonction(int a);
void procedure(float x, float y);
void date2str(long date_int, char date_str[]);
long date2int(char str[]);



// end if ... associé à #indef plus haut
# endif