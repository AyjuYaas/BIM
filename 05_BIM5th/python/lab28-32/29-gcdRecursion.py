#29 Write a program to find the GCD of two numbers using recursion

def gcd(a, b):
    if(b == 0): return a
    return gcd(b, a % b)

num1 = 8
num2 = 4
print(f"Gcd of {num1} and {num2} = {gcd(num1, num2)}")