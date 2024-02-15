#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import numpy as np
import numpy.linalg as alg

### Fonction diagonale dont seul la diagonale est non nul : E = np.diag([1, 2, 3]) ###
### Fonction eyes cree des matrices identités = que des 1 sur la diagonale :  D = np.eye(4) ###

#############  Question 1 ###########################
M1= np.array([[5, 6, 7, 8, 9]])

M2= np.ones((1,5))

M3= np.array([[1], [2], [3]])

M4= np.array([[1, 2, 4], [-1, 2, 3], [1, 8, 9]])

############ Question 2 #############################

A= np.array([[2, 2.3, 2.4], [9, -8, 9.81], [22, 1, 0.145]])  ####   A= np.array([[1, 2, 3], [4, 5, 6]]) ###  matrice nulle (remplie que de 0) : B= np.zeros((2, 3)) ###  matrice rempli que de 1 : C = np.ones((3, 2)) ici le x = 3 donc 3 lignes et y = 2 donc 2 colonnes ###



#print( A[0:2, :]) Affichage des lignes 2 et 3 de la matrice A :

#print(A[1:3, 1:3 ]) Affichage du bloc composé des lignes 2 et 3 et des colonnes 2 et 3 de la matrice A :

########### Question 3 ##############################

M5= np.concatenate((M1, [[10]]), axis=1)

M6= np.concatenate((M2, M1), axis=1)

M7= np.concatenate((M1, M2), axis=0)

M8= np.concatenate((M3, [[4]]), axis=0)

M9= np.concatenate((M4, np.array([[1],[7],[4]])), axis=1)

M10= np.concatenate ((M4, M3), axis = 1)

M11= np.concatenate((M4, M3.reshape(1,3)), axis=0)


########### Question 4 ##############################

M12= np.concatenate(([[2]], M2), axis=1)        #### ajouter 2 au début de M2###

M13= np.concatenate(([[9]],M3,[[8]]), axis=0)      ###Ajouter 8 en bas de M3 et 9 en haut de M3.###

M14= np.delete(M4, 1, axis=0)     ###Supprimer la 2`eme ligne de M4. On pourra utiliser l’instruction np.delete###

M15= np.delete(M1, [0, 2], axis=1)   ###Supprimer la 1`ere et la 3`eme cases de M1.###

M16= np.copy(M1) ###Mettre 8 dans la 1`ere et la 3`eme cases de M1.###

M16[0,[0, 2]]=8

M17= np.delete(M4, 1, axis=1)