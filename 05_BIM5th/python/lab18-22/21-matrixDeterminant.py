#21 Create an 2D array of size 3 x 3 then find the determinant

# import numpy as np

# arr = np.array([
#     [1, 3, 2],
#     [-3, -1, -3],
#     [2, 3, 1]
# ])

# det = np.linalg.det(arr)

# print("Determinant = ", int(det))

mat = [
    [1, 3, 2],
    [-3, -1, -3],
    [2, 3, 1]
]

a, b, c = mat[0]
d, e, f = mat[1]
g, h, i = mat[2]

determinant = a*(e*i - h*f) - b*(d*i-g*h) + c*(d*h - e*g)

print('Determinant = ', determinant)