import sys
sys.path.insert(1, '/home/etuinfo/ejanot/Documents/UE2.1/R2.07_Graphes/TP1/')


import tp1 as gr


g=graphe = {
    "A" :{"C"},
    "B" : {"C", "E"},
    "C" : {"A", "B", "D", "E"},
    "D" : {"C"},
    "E" : {"C", "B"},
    "F" : set()
}

g=gr.Graphe(graphe)

g.all_aretes()
[set(['A ', 'C']), set(['A', 'C']), set(['C', 'B']), set(['C', 'E']), set(['C', 'D']), set(['B', 'E'])]

g.all_sommets()
set(['A ', 'C', 'B', 'E', 'D', 'F'])


