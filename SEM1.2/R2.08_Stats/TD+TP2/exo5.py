import numpy as np
import numpy.random as rd
import matplotlib.pyplot as plt


def Moyenne(Serie):
    moyenne = 0
    for i in Serie:
        moyenne += i
    return moyenne / len(Serie) 

def Variance(Serie):
    var = 0
    moy = Moyenne(Serie)
    for i in Serie:
        var += (i - moy) * (i - moy)
    var = (1/len(Serie)) * var
    return var
def tirages_des(N):
    return rd.randint(1, 7, N)

def Moy100():
    return Moyenne(tirages_des(100))

def TabMoy100(N):
    tab = []

    for i in range(N):
        tab.append(Moy100()) 
    return tab

TabMoy10000 = TabMoy100(10000)

Serie100 = tirages_des(100)




print(TabMoy100(1000))