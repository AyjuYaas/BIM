# N Queen Problem

def solve_queen(n):
    board = [[0 for i in range(n)] for i in range(n)]
    if check_board(board, 0):
        print_board(board)
        return True

def check_board(board, col):
    # Checks if all queens are placed
    if col >= len(board):
        return True
    
    # Iterates over all the rows
    for i in range(len(board)):
        # Checks if it is safe to place the queen
        if is_safe(board, i, col):
            board[i][col] = 1
            # Checks if it is safe to place queen in another column
            if check_board(board, col + 1):
                return True
            board[i][col] = 0
    return False

def is_safe(board, row, col):
    # Check the row on the left side
    for i in range(col):
        if board[row][i] == 1:
            return False
    
    # Check the upper diagonal on the left side
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    # Check the lower diagonal on the left side
    for i, j in zip(range(row, len(board), 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False
    
    return True

def print_board(board):
    for row in board:
        print(" ".join(['Q' if x else '.' for x in row]))

solve_queen(8)
