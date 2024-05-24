import numpy as np
import pandas as pd

SangliersDF = pd.read_csv('Sangliers.csv')
SangliersDF.columns
SangliersDF.index
SangliersDF.shape
SangliersDF['Annees']

# print(SangliersDF)

nom_ligne = ['Nidhish', 'Nathan', 'PNJ']
nom_colonne = ['Age', 'Année de naissance', 'Année de l\'obtention du brevet']
array = ([[19, 2005, 2020], [23, 2001, 2016], [18, 2005, 2020]])

MondataFrame = pd.DataFrame(data = array, index = nom_ligne, columns = nom_colonne)

#création d'un tableau avec les valeurs du dataframe
SangliersAR = np.array(SangliersDF)

#création d'un tableau avec la première colonne
AnneeAR = SangliersAR[:, 0]

#création d'un tableau sans la première colonne
SangliersOAr = SangliersAR[:, 1:]

#création d'un tableau contenant les noms des colonnes
ColAR = SangliersDF.columns.to_numpy()

#création d'un dataframe avec les valeurs du tableau SangliersOAr, les années sont les index et les colonnes sont les noms des colonnes sans les années
SangliersODF = pd.DataFrame(data = SangliersOAr,index = AnneeAR, columns = ColAR[1:])

#moyenne ecart-type de chaque colonne du tableau SangliersOAr
Moyenne = np.mean(SangliersOAr, axis = 0)

#fonction centrer reduire
def Centreduire(T):
    Moyenne = np.mean(T, axis = 0)
    EcartType = np.std(T, axis = 0)
    Res = (T - Moyenne) / EcartType
    return Res

SangliersODF_CR = Centreduire(SangliersOAr)

def covar(X,Y):
    cov = 0
    moy1 = np.mean(X)
    moy2 = np.mean(Y)
    for i in range (len(X)):
        cov += (X[i] - moy1) * (Y[i] - moy2)
    cov /= len(X)
    return cov





def covar2(X):
    cov = 0
    moy1 = np.mean(X[:, 0])
    moy2 = np.mean(X[:, 1])
    for i in range (len(X)):
        cov += (X[i, 0] - moy1) * (X[i, 1] - moy2)
    cov /= len(X)
    return cov

print(covar2(SangliersOAr))

print(np.cov(SangliersOAr[:, 0], SangliersOAr[:, 1], rowvar = False, bias = True))

