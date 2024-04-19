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

Serie100 = tirages_des(100)

Vals=[1,2,3,4,5,6,7]
plt.hist(Serie100,Vals,histtype='bar',align='left',rwidth=0.1)
plt.show()

    