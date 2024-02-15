#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import numpy as np
import numpy.linalg as alg

#############  Exercice 1 ###########################

def absolue(x) :
	""" Calcule la valeur abslue de x """
	if x <0:
		x = -x
	return x
#### Bien joué eliott ça fonctionne !#####
  
def fact(n) :
    res = 1
    for i in range(n):
        res = res * (n-i)
    return res


def puissance(x,n) :
    res = 1
    if n == 0:
        res = 1
        return res

    for i in range(n):
        res = res  * x
    return res

	

############ Exercice 2 #############################

def transpose(A) :
	""" retourne la transposée de la matrice A """

    
	
def diagonale(A) :
	""" retourne une matrice de même dimension que A avec seulement les termes de la diagonale de A """
	
def trace(A) :
	""" Calcule la Trace de la matrice A """
	
def valeurmax(A) :
	""" Retourne la valeur max de A et la position du coefficient """
