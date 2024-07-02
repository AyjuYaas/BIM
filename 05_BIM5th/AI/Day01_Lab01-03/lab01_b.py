#1(b) WAP to represent the graph using dictionary in python

from lab01_b_graph import graph

for node in graph:
    print(f"{node}", end =": ")
    for neighbor in graph[node]:
        if(neighbor > node):
            print(f"{neighbor}:{graph[node][neighbor]} ", end="")
    print()