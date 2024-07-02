#20 Create an 2D array of size 2 x 2 then perform the matrix sum

mat1 = [ 
    [1, 2],
    [1, 2]
]
mat2 = [ 
    [2, 3],
    [2, 3]
]

# sum = [[0 for x in range(2)] for y in range(2)]
matSum = [[0, 0], [0, 0]]

for i in range(2):
    for j in range(2):
        matSum[i][j] = mat1[i][j] + mat2[i][j]

for i in range(2):
    for j in range(2):
        print(matSum[i][j], end=" ")
    print()

