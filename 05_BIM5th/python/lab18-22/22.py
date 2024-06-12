# Create an 2D array of size 3 x 3 the display the upper triangle

mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for i in range(3):
    for j in range(i, 3):
        print(mat[i][j], end = " ")
    print()
    print("  " * i, end = "  ")