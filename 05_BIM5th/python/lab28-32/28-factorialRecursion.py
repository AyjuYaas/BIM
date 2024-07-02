#28 Write a program find the factorial of given number using recursion
def fact(n):
    if(n <= 1): return 1
    return n * fact(n-1)

num = 5
print(f"Factorial of {num} is {fact(num)}")