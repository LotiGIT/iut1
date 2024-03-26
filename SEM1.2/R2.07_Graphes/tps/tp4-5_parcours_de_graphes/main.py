from collections import deque

def parcours_en_largeur(graphe, s):
    Q = deque([s]) 
    D = {v: float('inf') for v in graphe} 
    D[s] = 0
    T = {} 

    while Q:
        v = Q.popleft()
        for w in graphe[v]:
            if D[w] == float('inf'):
                D[w] = D[v] + 1
                Q.append(w)
                T[v] = T.get(v, []) + [w]

    return D, T

def parcours_en_profondeur(graphe, s):
    P = [s] 
    D = {v: float('inf') for v in graphe} 
    D[s] = 0
    T = {} 

    while P:
        v = P.pop()
        for w in graphe[v]:
            if D[w] == float('inf'):
                D[w] = D[v] + 1
                P.append(w)
                T[v] = T.get(v, []) + [w]

    return D, T

graphe_exemple = {
        "A": {"C"},
        "B": {"C", "E"},
        "C": {"A", "B", "D", "E"},
        "D": {"C"},
        "E": {"C", "B"},
        "F": set() 
    }

sommet_depart = "A"
distances, arbre_couvrant = parcours_en_largeur(graphe_exemple, sommet_depart)

print("Distances:", distances)
print("Arbre couvrant:", arbre_couvrant)
