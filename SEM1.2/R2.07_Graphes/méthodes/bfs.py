import collections
def bfs(graph, src):
    visited = set()
    queue = collections.deque([src])
    
    while queue:
        node = queue.popleft()
        visited.add(node)
        for i in graph[node]:
            if i not in visited:
                queue.append(i)
    print(visited)
        
if __name__ == "__main__":
    #Dictionnaire
    graph = {0:[1, 2, 3],1:[0, 2],2:[0,1,4],3:[0],4:[2]}
    bfs(graph, 0)
    