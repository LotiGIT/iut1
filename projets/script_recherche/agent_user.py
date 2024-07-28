import requests
import bs4
import pandas as pd

url = "https://www.google.com/search?q=clotilde+aberkane"

# Erreur 403 : Forbidden  (le site web refuse de répondre à la requête)
headers = {