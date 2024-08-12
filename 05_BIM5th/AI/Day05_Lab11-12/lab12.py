from collections import deque

def print_solution(path):
    for step in path:
        print(f"Jug1: {step[0]} liters, Jug2: {step[1]} liters")

def water_jug_solver(X, Y, Z):
    # To store the visited states
    visited = set()

    # To store the states to be explored along with the path taken to reach them
    queue = deque([((0, 0), [])])

    while queue:
        (current_state, path) = queue.popleft()
        x, y = current_state

        # If the current state is the goal state
        if x == Z or y == Z or x + y == Z:
            path.append((x, y))
            print_solution(path)
            return True

        # Mark this state as visited
        visited.add((x, y))

        # Generate all possible next states and check their validity
        possible_states = [
            (X, y),      # Fill Jug1 completely
            (x, Y),      # Fill Jug2 completely
            (0, y),      # Empty Jug1 completely
            (x, 0),      # Empty Jug2 completely
            (x - min(x, Y - y), y + min(x, Y - y)),  # Pour Jug1 -> Jug2
            (x + min(y, X - x), y - min(y, X - x)),  # Pour Jug2 -> Jug1
        ]

        for state in possible_states:
            if state not in visited:
                queue.append((state, path + [current_state]))

    # If we exhaust the queue without finding the goal state
    print("No solution found.")
    return False

# Example usage
X = 4  # Capacity of Jug1
Y = 3  # Capacity of Jug2
Z = 2  # Required amount of water

if not water_jug_solver(X, Y, Z):
    print(f"No, it is not possible to measure {Z} liters of water.")
