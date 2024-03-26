from collections import deque

def est_connexe(G, s):
    n = len(G)
    Q = deque([s])
    D = set()
    D.add(s)
    c = 1
    
    while Q:
        v = Q.popleft()
        for w in G[v]:
            if w not in D:
                D.add(w)
                c += 1
                Q.append(w)

    return c ==  n


def sont_connectes(graph, sommet1, sommet2):
    """
    Vérifie si deux sommets sont connexes dans un graphe donné et retourne le chemin.
    """
    visites = set()
    chemin = []

    def dfs(sommet):
        visites.add(sommet)
        chemin.append(sommet)

        if sommet == sommet2:
            return True

        for neighbor in graph[sommet]:
            if neighbor not in visites:
                if dfs(neighbor):
                    return True

        chemin.pop()
        return False

    est_connecte = dfs(sommet1)

    return est_connecte, chemin if est_connecte else []

def dfs(graph, start, end):
    fringe = [(start, [])]
    while fringe:
        state, path = fringe.pop()
        if path and state == end:
            yield path
            continue
        for next_state in graph[state]:
            if next_state in path:
                continue
            fringe.append((next_state, path+[next_state]))

def getCycles(graph):
    cycles = [[node]+path  for node in graph for path in dfs(graph, node, node)]
    return cycles

graphe = {
    "A": {"C"},
    "B": {"C", "E"},
    "C": {"A", "B", "D", "E"},
    "D": {"C"},
    "E": {"C", "B"},
    "F": set() 
}

graphe["F"].add("A")
graphe["A"].add("F")

sommet1 = "A"
sommet2 = "B"

resultat = getCycles(graphe)
print(resultat)
