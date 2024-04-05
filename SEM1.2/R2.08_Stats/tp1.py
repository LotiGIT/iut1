import numpy as numpy
import numpy.random as rd

def tirage_de():
    return rd.randint(1,7)

def tirages_des(N):
    return rd.randint(1, 7, N)
    # liste_tirages=[]
    # while len(liste_tirages)<N:
    #     liste_tirages.append(tirage_de())
    # return liste_tirages

def Moyenne(Serie):
    moyenne = 0
    for i in Serie:
        moyenne += i
    return moyenne / len(Serie) 

def Variance(Serie):
    

Serie100 = tirages_des(100)

print(Moyenne(Serie100))