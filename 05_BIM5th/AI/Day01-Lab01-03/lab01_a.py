#1(a) WAP to represent the graph using dictionary in python

from lab01_a_graph import graph

for node in graph:
    print(f"{node}", end =": ")
    for neighbor in graph[node]:
        if(neighbor > node):
            print(neighbor, end = ", ")
    print()