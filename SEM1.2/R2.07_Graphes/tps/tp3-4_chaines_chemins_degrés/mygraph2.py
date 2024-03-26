from mygraph import Graphe

class Graphe2(Graphe):
    def __init__(self, graphe_dict=None):
        super().__init__(graphe_dict)

    def sommet_degre(self, sommet):
        """ renvoie le degre du sommet """
        degre =  len(self.aretes(sommet)) 
        if sommet in self.aretes(sommet):
            degre = degre + 1 
        return degre

    def trouve_sommet_isole(self):
        """ renvoie la liste des sommets isoles """
        sommets_isoles = [sommet for sommet, voisins in self._graphe_dict.items() if not voisins]
        return sommets_isoles
        
    def Delta(self):
        """ le degre maximum  """
        return max(self.sommet_degre(sommet) for sommet in self._graphe_dict)

    
    def list_degres(self):
        """ calcule tous les degres et renvoie un 
	    tuple de degres decroissant
	"""
        return sorted([self.sommet_degre(sommet) for sommet in self._graphe_dict], reverse=True)
