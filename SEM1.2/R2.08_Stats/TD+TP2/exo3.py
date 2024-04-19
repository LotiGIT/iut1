import numpy as np
import numpy.random as rd
import matplotlib.pyplot as plt

liste = [11, 9, 14, 13, 11, 20, 9, 12, 16, 17, 7, 16, 15, 12, 12, 15, 15, 11, 14, 11]

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

# print(Moyenne(liste))
# print(Variance(liste))



print(liste)  # Affichage des valeurs
# Création d'un tableau avec les intervalles centrés sur la valeur entière
inter = [0, 8, 10, 12, 13, 15, 18, 21]


plt.hist(liste, bins=inter, rwidth=1, density=True, color='pink',edgecolor='black')
plt.xlabel('Valeurs')
plt.xticks(np.arange(0, 20))
plt.ylabel('Nombres')
plt.title("Exemple d'histogramme simple")
plt.boxplot(liste)
plt.show()
