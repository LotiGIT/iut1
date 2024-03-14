import numpy as np

Inf = np.inf
Q = np.array([[0, 1, 2, 3, 4, 5]])
graphe = {'A' : ['C'], 'B' : ['E', 'C'], 'C' : ['A', 'B', 'D', 'E'], 'D' : ['C'], 'E': ['C', 'B'], 'F':[]}

G = np.array([ [0,Inf,1,Inf,Inf,Inf], [Inf,0,2,Inf,3,Inf], [1,2,0,4,2,Inf], [Inf,Inf,4,0,Inf,Inf], [Inf,3,2,Inf,0,Inf], [Inf,Inf,Inf,Inf,Inf,Inf] ])











# def dijkstraDist(G, depart):
#     # On récupère le nombre de sommets du graphe
#     N = np.size(G,0)
#     # Initialisation du tableau des plus courts chemins

#     # Le booléen pour savoir si le sommet a déjà été sélectionné
#     pcc = list()
#     for i in range(N):
#         pcc.append([Inf, False])
#     sommet_u = depart
#     dist_u = 0
#     pcc[depart][0] = 0
#     # Le premier sommet sélectionné est le sommet depart
#     pcc[depart][1] = True

#     # On compte le nombre de sommets sélectionnés
#     cpt = 0
#     while cpt != N-1:
#     # À chaque étape, la solution optimale doit être conservée
#     # (pour sélection du sommet correspondant à l’étape suivante)
#         minimum = Inf
#     # Étape de relâchement
#         for k in range(N):
#     # Si le sommet k n’a pas encore été sélectionné
#             if pcc[k][1] == False:
#                 dist_uv = G[sommet_u][k]
#     # Distance totale du chemin s -> ... -> u -> v
#                 dist_totale = dist_u + dist_uv

#     # Mise à jour du tableau des plus courts chemins
#                 if dist_totale < pcc[k][0]:
#                     pcc[k][0] = dist_totale

#     # Mise à jour de la solution minimale à cette étape
#                 if pcc[k][0] < minimum:
#                     minimum = pcc[k][0]
#                     prochain_sommet_select = k

#     # On a traité complétement un sommet
#         cpt = cpt + 1

#     # Le sommet à traiter est sélectionné et d[u] est mis à jour
#         sommet_u = prochain_sommet_select
#         pcc[sommet_u][1] = True
#         dist_u = pcc[sommet_u][0]
#     return(pcc)


def djikstra(s, graphe):
    
    # Une liste D tel que
    # Tableau représentant le plus court chemin possible
    tabDistance = np.array([Inf,Inf,Inf,Inf,Inf,Inf]) 
    D[s] = 0 # Point de départ
    P = np.array([]) # Liste ou dictionnaire des "parents"
    Q = np.array([[1, 2, 3, 4, 5, 6]]) # Liste des sommets à visiter
    v = int(input())
    u = int(input())
    while len(Q) != 0: # tant que Q est non vide, trouver que v est le minimum
        for i in range(len(Q+1)):# recherche séquentielle 
        if v in Q: # v qui appartient à l'ensemble Q tel que la distance v est la plus courte
            D[v]=minimum
            del(Q, v) # enlever (Q, v) càd retirer le chemin des possibilités
        for u in graphe[v] : # pour u qui est un liste des voisins de v et qui appartient à Q faire : 
            if D[u]>D[v]+W(vu): # si la distance pour aller à u est supérieur à un autre chemin alors D[u] absorbe cette nouvelle distance et P[u] est égal à v
                D[u]= D[v]+W(vu)
                P[u]=v
    return(D, P)
