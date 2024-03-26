class Graphe(object):

    def __init__(self, graphe_dict=None):
        if graphe_dict == None:
            graphe_dict = dict()
        self._graphe_dict = graphe_dict

    def aretes(self, sommet):
        """Retourne une liste de toutes les arêtes d'un sommet."""
        if sommet in self._graphe_dict:
            return list(self._graphe_dict[sommet])
        else:
            return []

    def all_sommets(self):
        """ retourne tous les sommets du graphe """
        return list(self._graphe_dict.keys())

    def all_aretes(self):
        """ retourne toutes les aretes du graphe """
        all_edges = set()

        for sommet, voisins in self._graphe_dict.items():
            for voisin in voisins:
                edge = (sommet, voisin)
                reverse_edge = (voisin, sommet)

                if edge not in all_edges and reverse_edge not in all_edges:
                    all_edges.add(edge)

        return list(all_edges)

    def add_sommet(self, sommet):
        """Ajoute un sommet au graphe si absent."""
        if sommet not in self._graphe_dict:
            self._graphe_dict[sommet] = set()

    def add_arete(self, arete):
        """ l'arete est de  type set, tuple ou list;
            Entre deux sommets il peut y avoir plus
	    d'une arete (multi-graphe)
        """
        if isinstance(arete, (set, tuple, list)) and len(arete) == 2:
            sommet1, sommet2 = arete
            self._graphe_dict.setdefault(sommet1, set()).add(sommet2)

    def __list_aretes(self):
        """ Methode privée pour récupérer les aretes. 
	    Une arete est un ensemble (set)
            avec un (boucle) ou deux sommets.
        """
        all_edges = set()

        for sommet, voisins in self._graphe_dict.items():
            for voisin in voisins:
                edge = set({sommet, voisin})
                all_edges.add(edge)

        return list(all_edges)
    
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
    def trouve_toutes_chaines(self, sommet_dep, sommet_arr, chain=[]):
        """ Trouve toutes les chaînes entre deux sommets dans le graphe """
        graphe = self._graphe_dict
        if not ({sommet_dep, sommet_arr}.issubset(graphe)):
            return []
        chain = chain + [sommet_dep]
        if sommet_dep == sommet_arr:
            return [chain]
        if sommet_dep not in graphe:
            return []
        chains = []
        for sommet in graphe[sommet_dep]:
            if sommet not in chain:
                ext_chains = self.trouve_toutes_chaines(sommet, sommet_arr, chain)
                for c in ext_chains:
                    chains.append(c)
        return chains


