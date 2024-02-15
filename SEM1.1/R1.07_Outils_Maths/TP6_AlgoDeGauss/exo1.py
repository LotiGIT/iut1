#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#include "print.h"

import numpy as np
import numpy.linalg as alg

A=np.array([[1, -1, -4], [2, -3, 4], [0, 2, 8]])

# print(alg.inv(A))


M=np.array ([[-1, 2, 4], [1, 0, -2], [-2, 2, 5]])
def multiplicationreel(M,i,k):
    for i in range(len(M[i])):
        M[i,:] = M[i,:]*k
    return M


def elimination(M,i,j,k):
    for : in range(len(M[i][:])):
        M[j,:] = -k * M[i,:]
    return M

def GaussJordan(M):
    (a,b) = M.shape 
    for i in range(a):
        
    return M
