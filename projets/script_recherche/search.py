from googlesearch import search
from newspaper import Article, Config
import nltk
import re
import urllib
import time
import random
from requests.exceptions import RequestException

# Téléchargement des ressources NLTK
nltk.download('punkt')

# Configurer l'agent utilisateur personnalisé
config = Config()
config.browser_user_agent = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, comme Gecko) Chrome/58.0.3029.110 Safari/537.3'

# Requête de recherche
query = "clotilde aberkane"

# Spécification du chemin complet du fichier
chemin_fichier = "C:\\Users\\eliot\\Documents\\iut1\\projets\\script_recherche\\resultats.txt"

# Initialiser le fichier de résultats
with open(chemin_fichier, 'w', encoding='utf-8') as f:
    f.write("Résultats de la recherche pour : " + query + "\n\n")

# Liste pour stocker les résultats
resultats = []

# Recherche des 10 premiers résultats
for url in search(query, num_results=10, lang="fr"):
    try:
        article = Article(url, config=config)
        article.download()
        time.sleep(random.uniform(1, 3))  # Attente aléatoire entre 1 et 3 secondes
        article.parse()
        article.nlp()

        # Vérifier si la requête apparaît dans le texte de l'article
        if re.search(query, article.text, re.IGNORECASE):
            resultats.append((url, article.text))

    except RequestException as e:
        print(f"Erreur lors du téléchargement de l'URL {url} : {e}")
    except Exception as e:
        print(f"Erreur lors du traitement de l'URL {url} : {e}")

# Écriture des résultats dans le fichier
with open(chemin_fichier, 'a', encoding='utf-8') as f:
    f.write("test")
    for url, texte in resultats:
        f.write("URL: " + url + '\n\n')
        f.write(texte + "\n\n")
        f.write("="*80 + "\n\n")
