import mygraph2 as gr2
import mygraph as gr


graphe = {
    "A": {"C": 1},
    "B": {"C": 2, "E": 3},
    "C": {"A": 1, "B": 2, "D": 4, "E": 2},
    "D": {"C": 4},
    "E": {"C": 2, "B": 3},
    "F": {}
}
graphe_neg = {
    "A": {"C": -1},
    "B": {"C": 2, "E": 3},
    "C": {"A": 1, "B": 2, "D": 4, "E": 2},
    "D": {"C": 4},
    "E": {"C": 2, "B": 3},
    "F": {}
}

g = gr2.Graphe2(graphe_neg)

depart = "A"
arrivee = "D"

distances, parents = g.bellman_ford(depart)

print("Distances les plus courtes depuis le sommet", depart, ":", distances)
print("Parents :", parents)