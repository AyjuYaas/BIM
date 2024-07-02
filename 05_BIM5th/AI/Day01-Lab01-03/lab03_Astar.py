from lab01_b_graph import graph

hn_val = {
    "a": 46,
    "b": 39,
    "c": 41,
    "d": 29,
    "e": 38,
    "f": 17,
    "g": 6,
    "h": 0,
}

start = "a"
goal = "h"

each_distance = {}
queue = [start]
visited = []

def aStar(graph):

    for node in graph:
        each_distance[node] = {}

        #calculates the distance of each node to it's neighbors
        for neighbor in graph[node]:
            if(neighbor > node):
                distance = hn_val[neighbor] + graph[node][neighbor]
                each_distance[node][neighbor] = distance

    while(True):
        #Finds the smallest routes to the neighbor
        small = [key for key in each_distance[node] if
            all(each_distance[node][temp] >= each_distance[node][key]
            for temp in each_distance[node])]
        
        if(small):
            if(small[0] == goal):
                queue.append(small[0])
                break
            else:
                queue.append(small[0])
                visited.append(small[0])
                node = small[0]
        else:
            queue = [start]
            node = start

    return queue



print(aStar(graph))