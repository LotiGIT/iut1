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

graph = {
    "A": {"C"},
    "B": {"C", "E"},
    "C": {"A", "B", "D", "E"},
    "D": {"C"},
    "E": {"C", "B"},
    "F": set() 
}
print(getCycles(graph))
