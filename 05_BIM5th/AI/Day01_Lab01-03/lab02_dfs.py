#2 Solving 1(a) with dfs

from lab01_a_graph import graph

visited = []

def dfs(visited, graph, node):
    if node not in visited:
        print(node, end="->")
        visited.append(node)
        
        for neighbor in graph[node]:
            dfs(visited, graph, neighbor)
    
dfs(visited,graph, "a")

