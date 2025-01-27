import heapq

def heuristic(node, goal):
    return 1

def best_first_search(graph, start, goal):
    open_list = []
    heapq.heappush(open_list, (heuristic(start, goal), start))
    came_from = {}
    visited = set()
    cost_so_far = {start: 0}

    while open_list:
        _, current = heapq.heappop(open_list)
        
        if current in visited:
            continue
        visited.add(current)

        if current == goal:
            path = []
            while current in came_from:
                path.append(current)
                current = came_from[current]
            path.append(start)
            return path[::-1], cost_so_far[goal]
        
        for neighbor, cost in graph[current]:
            new_cost = cost_so_far[current] + cost
            if neighbor not in visited or new_cost < cost_so_far[neighbor]:
                cost_so_far[neighbor] = new_cost
                priority = heuristic(neighbor, goal)
                heapq.heappush(open_list, (priority, neighbor))
                came_from[neighbor] = current

    return None, None

graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('A', 1), ('D', 2), ('E', 5)],
    'C': [('A', 4), ('F', 3)],
    'D': [('B', 2)],
    'E': [('B', 5), ('H', 1)],
    'F': [('C', 3)],
    'G': [('C', 2), ('I', 6)],
    'H': [('E', 1), ('J', 7)],
    'I': [('G', 6)],
    'J': [('H', 7)]
}

start = input("Enter the start node: ").upper()
goal = input("Enter the goal node: ").upper()

path, total_cost = best_first_search(graph, start, goal)

if path:
    print("Path found:", " -> ".join(path))
    print(f"Total path cost: {total_cost}")
else:
    print(f"No path found from {start} to {goal}")
