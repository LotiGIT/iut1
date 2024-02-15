# coding: utf-8
""" 
Une classe Python pour creer et manipuler des graphes
"""



class Graphe(object):

    def __init__(self, graphe_dict=None):
        """ initialise un objet graphe.
	    Si aucun dictionnaire n'est
	    créé ou donné, on en utilisera un 
	    vide
        """
        if graphe_dict == None:
            graphe_dict = dict()
        self._graphe_dict = graphe_dict

    def aretes(self, sommet):
        """ retourne une liste de toutes les aretes d'un sommet"""
        return self._graphe_dict[sommet]

    def all_sommets(self):
        """ retourne tous les sommets du graphe """
        return set(self._graphe_dict.keys())

    def all_aretes(self):
        """ retourne toutes les aretes du graphe """
        return set(self._graphe_dict.key())

    def add_sommet(self, sommet):
        """ Si le "sommet" n'set pas déjà présent
	dans le graphe, on rajoute au dictionnaire 
	une clé "sommet" avec une liste vide pour valeur. 
	Sinon on ne fait rien.
        """
        for f in sorted(set(sommet)):
            print(f)

    def add_arete(self, arete):
        """ l'arete est de  type set, tuple ou list;
            Entre deux sommets il peut y avoir plus
	    d'une arete (multi-graphe)
        """
        arete= set(arete)
        arete1, arete2 = tuple(arete)
        for x,y in [((arete1, arete2), (arete2, arete1))]:
            if x in self._graphe_dict:
                self._graphe_dict[x].add(y)
            else:
                self._graphe_dict[x] = {y}

            
    def __list_aretes(self):
        """ Methode privée pour récupérer les aretes. 
	    Une arete est un ensemble (set)
            avec un (boucle) ou deux sommets.
        """
        aretes = []
        for sommet in self._graphe_dict:
            for voisin in self._graphe_dict[sommet]:
                if({voisin, sommet}) not in aretes:
                    aretes.append({sommet, voisin})
        return aretes
    
    def trouve_chaine(self, sommet_dep, sommet_arr, chain=None):
        """ Trouver un chemin élémentaire de sommet_dep à sommet_arr 
            dans le graphe """
        graphe = self._graphe_dict
        if not({sommet_dep,sommet_arr}.issubset(graphe)):
            return None
        if chain == None:
            chain = []
        chain = chain + [sommet_dep]
        if sommet_dep == sommet_arr:
            return chain
        for sommet in graphe[sommet_dep]:
            if sommet not in chain:
                ext_chain = self.trouve_chaine(sommet, sommet_arr, chain)
                if ext_chain: 
                    return ext_chain
        return None
        
    def __iter__(self):
        self._iter_obj = iter(self._graphe_dict)
        return self._iter_obj

    def __next__(self):
        """ Pour itérer sur les sommets du graphe """
        return next(self._iter_obj)

    def __str__(self):
        res = "sommets: "
        for k in self._graphe_dict.keys():
            res += str(k) + " "
        res += "\naretes: "
        for arete in self.__list_aretes():
            res += str(arete) + " "
        return res