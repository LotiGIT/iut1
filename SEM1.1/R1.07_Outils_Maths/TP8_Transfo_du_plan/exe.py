# !/usr/bin/env python3
# -*- coding: utf-8 -*-



import matplotlib.pyplot as plt
import numpy as np
from random import*

# nombre d'itérations :
nbpoints=100000000

#point de départ :
# p=np.shape([[0], [0]])
p=np.zeros((2,1))
 
def transformation1(p):

    T1=np.array([[0, 0], [0, 0.16]])
    u1=np.array ([[0], [0]])
    p=np.dot(T1, p)+u1
    return p
    
     
def transformation2(p):
    T2=np.array([[0.85, 0.04], [-0.04, 0.85]])
    u2=np.array([[0], [1.6]])
    p=np.dot(T2, p)+u2
    return p

def transformation3(p):
    T3=np.array([[0.2, -0.26], [0.23, 0.22]])
    u3=np.array([[0], [1.6]])
    p=np.dot(T3, p)+u3
    return p

def transformation4(p):
    T4=np.array([[-0.15, 0.28], [0.26, 0.24]])
    u4=np.array([[0], [0.44]])
    p=np.dot(T4, p)+u4
    return p
    

def transforme(p):
    # Choix aléatoire (avec équiprobabilité) entre les 2 transformations de fonctions
    tirage=random()
    if tirage <= 0.01 :
        res = transformation1(p)
    elif tirage <= 0.07:
        res = transformation3(p)
    elif tirage <= 0.85:
        res = transformation2(p)
    
    else :
        res = transformation4(p)
    return res

def construction(p, nbpoints):
    x = [p[0,0]]
    y = [p[1,0]]
    for i in range(nbpoints):
        p = transforme(p)
        x.append(p[0,0])
        y.append(p[1,0])
    
# Représentation graphique
    plt.plot(x, y, 'o')
    plt.title('Fougère de Barnsley')
    plt.show()
    
construction(p,nbpoints)
    