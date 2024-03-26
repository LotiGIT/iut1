graph = {
    # creation de la base de donnée, pas besoin de noter les chemins déjà édictés
    'A':['B', 'C', 'D'], 'B':['E'], 'C':['D', 'E'], 'D':[], 'E':[]
}

visited = set()

def dfs(visited, graph, root):
    # si la source n'a pas encore été visitée alors on la print
    if root not in visited:
        print(root)
        visited.add(root)
        # pour les valeurs adjacentes du graphe alors ...
        for neighbour in graph[root]:
            dfs(visited, graph, neighbour)
#Â on print les les valeurs parcourus Ã  partir de A si j'ai bien compris :/
dfs(visited, graph, 'A')