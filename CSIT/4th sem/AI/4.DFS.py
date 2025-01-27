def dfs_graph(graph, start):
    visited = set()
    
    def dfs(node):
        if node not in visited:
            print(node) 
            visited.add(node)
            for neighbor in graph[node]:
                if neighbor not in visited:
                    dfs(neighbor)
    
    dfs(start)

graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F', 'G'],
    'D': ['B', 'H'],
    'E': ['B', 'I', 'J'],
    'F': ['C', 'E'],
    'G': ['C', 'I'],
    'H': ['D', 'J'],
    'I': ['E', 'G'],
    'J': ['E', 'H']
}

dfs_graph(graph, 'A')
