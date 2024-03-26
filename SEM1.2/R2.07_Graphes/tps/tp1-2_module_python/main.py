# coding: utf-8
import mygraph as gr

graphe = {
        "A": {"C"},
        "B": {"C", "E"},
        "C": {"A", "B", "D", "E"},
        "D": {"C"},
        "E": {"C", "B"},
        "F": set()
    }

g = gr.Graphe(graphe)
g.add_arete(("LEO", "TOTO"))

print(g.all_aretes())