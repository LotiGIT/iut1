# !/usr/bin/env python3
# -*- coding: utf-8 -*-

# include "print.h"

import numpy as np
import numpy.linalg as alg

A=np.array([[-1, 1, 3], [2, 3, 2], [0, 4, 2], [2, 1, 2]])

################################################################################################################
###   Je suis en galère sur python mais j'ose pas venir vous voir parce que je me sens honteux d'être nul   ###
################################################################################################################

    i=int(input("Valeur de i à supprimer: "))
    j=int(input("Valeur de j à supprimer: "))

def mineur(A, i, j):

    A = np.delete(A, i, :)
    A = np.delete(A, :, j)
    
    return A

print (mineur(A, i, j))


# def det2(A):
#     det = A[0][0]*A[1][1] - A[1][0] * A[0][1]
#     return det


# def det(B):

#     # aei = B[0][0] * B[1][1] * B[2][2]
#     # bfg = B[0][1] * B[1][2] * B[2][0] 
#     # cdh = B[0][2] * B[1][0] * B[2][1]
#     # ceg = B[0][2] * B[1][1] * B[2][0]
#     # bdi = B[0][1] * B[1][0] * B[2][2]
#     # afh = B[0][0] * B[1][2] * B[2][1]

    
#     # if ():
#     #     B[p][p]
#     # det(A) = B[0][0] * (det(np.delete(B, 0, 0)))

#     return B



# def colonne(C):


#     return C


# def determinant(D):

#     return D