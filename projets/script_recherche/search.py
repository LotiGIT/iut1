#chercher la bibliothèque googlesearch pour réaliser des recherches dans google
from googlesearch import search
from newspaper import Article, Config
import nltk
nltk.download('punkt')
import urllib
import re 


# Créer une instance de Config pour créer un agent utilisateur personnalisé (permet de ne pas être bloqué par les sites web)
config = Config()

# Définir l'agent utilisateur personnalisé
config.browser_user_agent = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3'

#requete de recherche ( ' " " ' pour rechercher une expression exacte)
query = "the batman streaming vosfr"

# specification du chemin complet du fichier 
chemin_fichier = "C:\\Users\\eliot\\Documents\\iut1\\projets\\script_recherche\\resultats.txt"

with open(chemin_fichier, 'w') as f:
    pass

#listes pour stocker les resultats des recherches
resultat_wikipedia = []
autres_resultats = []

#recherche des 10 premiers résultats
# for url in search(query, num_results=10, lang="fr"):
#     if "wikipedia.org" in url:
#         article = Article(url)
#         article.download()
#         article.parse()
#         article.nlp()
#         # Vérifier si la requête apparaît dans le texte de l'article
#         if re.search(query, article.text):
#             resultat_wikipedia.append(url)
#             with open(chemin_fichier, 'a', encoding='utf-8') as f:
#                 f.write("Wikipedia : \n" + url + '\n\n')
#                 f.write(article.text + "\n\n")
#     else:
#         autres_resultats.append(url)

for url in search(query, num_results=10, lang="fr"):
    article = Article(url, config=config)
    article.download()
    article.parse()
    article.nlp()
    # Vérifier si la requête apparaît dans le texte de l'article
    if re.search(query, article.text):
        with open(chemin_fichier, 'a', encoding='utf-8') as f:
            f.write(url + '\n')

for url in autres_resultats :
    with open(chemin_fichier, 'a', encoding='utf-8') as f:
        f.write(url + '\n')
