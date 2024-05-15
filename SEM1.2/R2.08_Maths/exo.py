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

print(SangliersODF)
