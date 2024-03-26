def list_to_mat(graph):
    vertices = sorted(graph.keys())
    n = len(vertices)
    adjacency_matrix = [[0] * n for _ in range(n)]

    for i, v in enumerate(vertices):
        for neighbor in graph[v]:
            j = vertices.index(neighbor)
            adjacency_matrix[i][j] = 1

    return adjacency_matrix

def mat_to_list(adjacency_matrix):
    graph = {}
    vertices = [str(i+1) for i in range(len(adjacency_matrix))]

    for i, row in enumerate(adjacency_matrix):
        neighbors = [str(j+1) for j, value in enumerate(row) if value == 1]
        graph[vertices[i]] = neighbors

    return graph

def floyd_warshall_modified(graph):
    adjacency_matrix = list_to_mat(graph)
    n = len(adjacency_matrix)

    # Initialiser la matrice T avec la matrice d'adjacence du graphe
    T = [row[:] for row in adjacency_matrix]

    for k in range(n):
        for i in range(n):
            for j in range(n):
                T[i][j] = T[i][j] or (T[i][k] and T[k][j])

    return T

# Exemple d'utilisation
graph_representation = {'1': ['2', '3'], '2': ['3'], '3': []}
adjacency_matrix = list_to_mat(graph_representation)
print("Matrice d'adjacence:")
for row in adjacency_matrix:
    print(row)

graph_from_matrix = mat_to_list(adjacency_matrix)
print("\nGraphe à partir de la matrice d'adjacence:")
print(graph_from_matrix)
closure_matrix = floyd_warshall_modified(graph_representation)

print("Matrice de fermeture transitive:")
for row in closure_matrix:
    print(row)