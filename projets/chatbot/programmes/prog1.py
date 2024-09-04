import spacy
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity
from data import questions, reponses
from transformers import pipeline

# Charger la langue
nlp = spacy.load('fr_core_news_sm')

# Fonction pour obtenir une réponse
def avoir_reponse(question_utilisateur):
    question_utilisateur_doc = nlp(question_utilisateur)
    similarities = [question_utilisateur_doc.similarity(nlp(question)) for question in questions]
    meilleure_reponse = similarities.index(max(similarities))
    return reponses[meilleure_reponse]

# Boucle pour poser des questions
while True:
    question_utilisateur = input("Vous: ")
    if question_utilisateur.lower() in ["ff", "exit", "quit"]:
        break
    reponse = avoir_reponse(question_utilisateur)
    print("Chatbot : ", reponse)
