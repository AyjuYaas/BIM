#30 Write a program to find the sum of natural number using recursion

def sumN(n):
    if(n == 0): return 0
    return n + sumN(n-1)

num = 5
print(f"Sum of first {num} natural number = {sumN(num)}")