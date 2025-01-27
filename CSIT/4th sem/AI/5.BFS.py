from collections import deque

def bfs_graph(graph, start):
    visited = set()
    queue = deque([start])
    print("Route: ",end="")
    
    while queue:
        node = queue.popleft()
        if node not in visited:
            print(node,end=" ")
            visited.add(node)
            for neighbor in graph[node]:
                if neighbor not in visited:
                    queue.append(neighbor)

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

bfs_graph(graph, 'A')
