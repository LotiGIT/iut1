#Importer Colleges.csv sous forme d’un DataFrame CollegesDF.
import pandas as pd
import numpy as np

CollegesDF=pd.read_csv("Colleges.csv")
CollegesDF = CollegesDF.dropna()

def Centreduire(T):
    T = np.array(T, dtype = np.float64)
    (n,p) = T.shape
    res = np.zeros((n,p))
    TMoy = np.mean(T, axis = 0)
    TEcartType = np.std(T, axis = 0)
    for j in range(p):
        res[:,j] = (T[:,j] - TMoy[j]) / TEcartType[j]
    return res

# print(CollegesDF)
CollegesAR = np.array(CollegesDF)

#CollegesAR0 contient colonne avec des valeurs numériques
CollegesAR0 = CollegesAR[ :, [2,3,4,5,6,7,8]]

#valeurs autres que numériques
CollegesAR1 = CollegesAR[:, [0,1,9,10]]


print(CollegesAR1)
print(CollegesAR0)






# Moyenne = np.mean(CollegesAr, axis = 0)

# def Centreduire(T):
#     Moyenne = np.mean(T, axis = 0)
#     EcartType = np.std(T, axis = 0)
#     Res = (T - Moyenne) / EcartType
#     return Res

# CollegeCR = Centreduire(CollegesAr0)




