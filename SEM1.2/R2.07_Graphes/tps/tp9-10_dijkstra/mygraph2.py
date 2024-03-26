from mygraph import Graphe
from heapq import heappop, heappush

class Graphe2(Graphe):
    def __init__(self, graphe_dict=None):
        super().__init__(graphe_dict)

    def sommet_degre(self, sommet):
        """ renvoie le degre du sommet """
        degre = len(self.aretes(sommet))
        if sommet in self.aretes(sommet):
            degre += 1
        return degre

    def trouve_sommets_isoles(self):
        """ renvoie la liste des sommets isoles """
        sommets_isoles = [sommet for sommet, voisins in self._graphe_dict.items() if not voisins]
        return sommets_isoles

    def Delta(self):
        """ le degre maximum """
        return max(self.sommet_degre(sommet) for sommet in self._graphe_dict)

    def list_degres(self):
        """ calcule tous les degres et renvoie un tuple de degres decroissant """
        return sorted([self.sommet_degre(sommet) for sommet in self._graphe_dict], reverse=True)
    
    def dijkstra(self, depart):
        distances = {sommet: float('infinity') for sommet in self._graphe_dict}
        distances[depart] = 0
        parents = {}

        file_priorite = [(0, depart)]

        while file_priorite:
            distance_actuelle, sommet_actuel = heappop(file_priorite)

            if distance_actuelle > distances[sommet_actuel]:
                continue

            for voisin, poids_arete in self._graphe_dict[sommet_actuel].items():
                nouvelle_distance = distnfiance_actuelle + poids_arete

                if nouvelle_distance < distances[voisin]:
                    distances[voisin] = nouvelle_distance
                    parents[voisin] = sommet_actuel
                    heappush(file_priorite, (nouvelle_distance, voisin))

        return distances, parents

    def plus_court_chemin(self, depart, arrivee):
        distances, parents = self.dijkstra(depart)
        chemin = [arrivee]

        while arrivee != depart:
            chemin.append(parents[arrivee])
            arrivee = parents[arrivee]

        chemin.reverse()
        return distances, chemin
    
    def bellman_ford(self, depart):
        distances = {sommet: float('infinity') for sommet in self._graphe_dict}
        distances[depart] = 0
        parents = {}
        for _ in range(len(self._graphe_dict) - 1):
            for sommet_dep, voisins in self._graphe_dict.items():
                for sommet_arr, poids_arete in voisins.items():
                    if distances[sommet_arr] > distances[sommet_dep] + poids_arete:
                        distances[sommet_arr] = distances[sommet_dep] + poids_arete
                        parents[sommet_arr] = sommet_dep

        for sommet_dep, voisins in self._graphe_dict.items():
            for sommet_arr, poids_arete in voisins.items():
                if distances[sommet_arr] > distances[sommet_dep] + poids_arete:
                    return False  
        return distances, parents
    
    def bellman_ford_redondance(self, depart):
        distances = {sommet: float('infinity') for sommet in self._graphe_dict}
        distances[depart] = 0
        parents = {}
        for _ in range(len(self._graphe_dict) - 1):
            misajour = False
            for sommet_dep, voisins in self._graphe_dict.items():
                for sommet_arr, poids_arete in voisins.items():
                    if distances[sommet_arr] > distances[sommet_dep] + poids_arete:
                        distances[sommet_arr] = distances[sommet_dep] + poids_arete
                        parents[sommet_arr] = sommet_dep
                        misajour = True

            if not misajour:
                break

        for sommet_dep, voisins in self._graphe_dict.items():
            for sommet_arr, poids_arete in voisins.items():
                if distances[sommet_arr] > distances[sommet_dep] + poids_arete:
                    return False  
        return distances, parents
    
    def __len__(self):
        return len(self._graphe_dict)