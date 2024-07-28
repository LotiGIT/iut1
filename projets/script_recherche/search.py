#chercher la bibliothèque googlesearch pour réaliser des recherches dans google
from googlesearch import search

#requete de recherche ( ' " " ' pour rechercher une expression exacte)
query = "clotilde aberkhane"

# specification du chemin complet du fichier 
chemin_fichier = "C:\\Users\\eliot\\Documents\\iut1\\projets\\script_recherche\\resultats.txt"

#listes pour stocker les resultats des recherches
resultat_wikipedia = []
autres_resultats = []

#recherche des 10 premiers résultats
for url in search(query, num_results=10):
    if "wikipedia.org" in url:
        resultat_wikipedia.append(url)
    else:
        autres_resultats.append(url)


#ouverture du fichier en mode écriture
with open(chemin_fichier, 'w') as f:
    for url in resultat_wikipedia :
        #écrit l'url dans le fichier resultat.txt
        f.write(url + '\n')
    for url in autres_resultats :
        f.write(url + '\n')
        


