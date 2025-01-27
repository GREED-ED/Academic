import heapq

def heuristic(a, b):
    return abs(a[0] - b[0]) + abs(a[1] - b[1])

def search(start, goal, graph):
    open_list = []
    heapq.heappush(open_list, (0 + heuristic(start, goal), 0, start))
    came = {}
    count = {start: 0}
    
    while open_list:
        _, current_cost, current = heapq.heappop(open_list)
        
        if current == goal:
            path = []
            while current in came:
                path.append(current)
                current = came[current]
            path.append(start)
            return path[::-1]
        
        for neighbor, cost in graph[current]:
            new_cost = count[current] + cost
            if neighbor not in count or new_cost < count[neighbor]:
                count[neighbor] = new_cost
                priority = new_cost + heuristic(goal, neighbor)
                heapq.heappush(open_list, (priority, new_cost, neighbor))
                came[neighbor] = current
    
    return None

graph = {
    (0, 0): [((0, 1), 1), ((1, 0), 1)],
    (0, 1): [((0, 0), 1), ((1, 1), 1), ((0, 2), 1)],
    (1, 0): [((0, 0), 1), ((1, 1), 1), ((2, 0), 1)],
    (1, 1): [((0, 1), 1), ((1, 0), 1), ((1, 2), 1), ((2, 1), 1)],
    (0, 2): [((0, 1), 1), ((1, 2), 1)],
    (1, 2): [((0, 2), 1), ((1, 1), 1), ((2, 2), 1)],
    (2, 0): [((1, 0), 1), ((2, 1), 1)],
    (2, 1): [((1, 1), 1), ((2, 0), 1), ((2, 2), 1)],
    (2, 2): [((1, 2), 1), ((2, 1), 1)]
}

start = (0, 0)
goal = (2, 2)
path = search(start, goal, graph)
print("Path:", path)
