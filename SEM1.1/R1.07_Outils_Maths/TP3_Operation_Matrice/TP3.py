#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import numpy as np
import numpy.linalg as alg

#####################################################
##########  Somme et produit par un scalaire ########


#############  Exemple 1 ###########################

#1. A+B= C([[5, 6, -1], [0, 3, 7]])
#2. 2A= C ([[10, -2, 0], [-4 4 6]])
#3. 3B= C([[0, 21, -3], [6, 3, 12]])
#4. 2A -3B = C([[10, -25, 3], [-10, 1, -6]])

#############  Exemple 2 ########################### 

#2. [[4, 2, 1]]x[[8],[3],[-2]]= 36

#############  Exercice 2 ###########################

A= np.array ([[1, 0, -2, 4],[0, 3, 3, -1],[4, 0, 5, 0]])
B= np.array ([[-3, 1], [2, 0], [-1, 3], [5, -2]])

def produitscalaire(A, B):
	"""Calcul les produits scalaire de A lignes pour B colonnes"""
	l, c = A.shape # on définit les lignes (l) et colonnes (c) de mon élément de la forme A
	res = 0
	for i in range (c): # on parcourt tous les indices de 1 jusqu'au nombre de colonne de A
		res = res+A[0,i]*B[i,0] # multiplication de l'élément colonne A et l'élément ligne B qu'on ajoute à res
	return res

#print(produitscalaire(A,B))
#############  Exercice 4 ###########################

def produitmatrice(A,B):
# """ Calcule le produit AB des matrices A et B s'il existe """
	m, p = A.shape
	k, n = B.shape
	C = np.zeros((m, n))

	if (m != n): #bizarre ce qu'il se passe
		print("ERREUR")
	else:
		for i in range(m):
			for j in range (n):
				C[i][j] = produitscalaire(A[i:i+1, :], B[:, j:j+1])
	return (C)
print(produitmatrice(A,B))


#############  Exercice 5 ###########################
#A=np.arrray([[2, -1, -1,-2],[4, 4, 2, 0],[0, 4, 2, 0],[-1, -1, 0, -3]])
#B=np.arrray([[-2, 2, 1,3],[1, -3, 0, -2],[2, -1, -2, 3],[-4, 3, 3, 3]])
#C=np.arrray([[0, -4, 3,1],[4, 2, -4, 1],[1, -1, 3, 3],[4, 1, 4, -4]])
#D=np.arrray([[-8, -6, 26,0],[4, -8, 0, -11],[10, -5, 26, -6],[-12, -23, 0, 38]])

#1) (A+B)^2=
#2) A^2 +2AB+B^2 =
#3)
#4)  (C+D)^2=
#   C^2 + 2CD +D^2 = 
