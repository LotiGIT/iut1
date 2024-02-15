class GrapheDictionnaire:
    def __init__(self):
        self.graphe = {}

    def ajouter_sommet(self, sommet):

        if sommet not in self.graphe:
            self.graphe[sommet] = {}

    def ajouter_arete(self, graphe, graphe, poids):
        if sommet1 not in self.graphe and sommet2 in self.graphe:
            self.graphe[sommet1][sommet2] = poids

    def supprimer_arete(self, sommet1, sommet2):
        if sommet1 in slef.graphe and sommet2 in slef.graphe[sommet1]:
            del self.graphe[sommet1][sommet2]

    def supprimer_sommet(self, sommet):
        if sommet in self.graphe:
            del self.graphe[sommet]
            for i in self.graphe:
                del self.graphe[i][sommet]
    def recherche(self, sommet1, sommet2):
        if sommet1 in self.graphe and sommet2 in self.graphe[sommet1]:
            return self.graphe[sommet1][sommet2]
        return None