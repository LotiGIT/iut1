# coding: utf-8
import mygraph2 as gr2
import mygraph as gr

graphe = {
        "A": {"C"},
        "B": {"C", "E"},
        "C": {"A", "B", "D", "E"},
        "D": {"C"},
        "E": {"C", "B"},
        "F": set() 
    }

graphe2 = {
        "A": {"F","D"},
        "B": {"C"},
        "C": {"C","D","E"},
        "D": {"C","F","A"},
        "E": {"C"},
        "F": {"A","D"},
        "G": set()
    }

g = gr2.Graphe2(graphe2)


print(g.list_degres())