def euclidean(a, b):
    while b != 0:
        a, b = b, a % b  # Swap 'a' with 'b' and 'b' with 'a % b'
    return a

# Example usage
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

print(f"The GCD of {num1} and {num2} is: {euclidean(num1, num2)}")