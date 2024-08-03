import spacy
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity
from data import questions, reponses
from transformers import pipeline

#charger la langue
nlp = spacy.load('fr_core_news_sm')

#charger le modèle de similarité des phrases 
#model = pipeline("feature-extraction", model="sentence-transformers/paraphrase-multilingual-MiniLM-L12-v2")

#fonction pour obtenir une réponse

def avoir_reponse(question_utilisateur):
    question_utilisateur_doc = nlp(question_utilisateur)
    #question_utilisateur_embedding = model(question_utilisateur)[0][0]
    similarities = [question_utilisateur_doc.similarity(nlp(question)) for question in questions]
    #similarities = [cosine_similarity([question_utilisateur_embedding], [model(question)[0][0]])[0][0] for question in questions]
    meilleure_reponse = similarities.index(max(similarities))
    return reponses[meilleure_reponse]

# Fonction de similarité cosinus
def cosine_similarity(a, b):
    return np.dot(a, b) / (np.linalg.norm(a) * np.linalg.norm(b))

#boucle pour poser des questions
while True:
    question_utilisateur = input("Vous: ")
    if question_utilisateur == "ff":
        break
    reponse = avoir_reponse(question_utilisateur)
    print("Chatbot : ", reponse)