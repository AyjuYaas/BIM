# a. Factorial
def fact(n: int) -> int:
    if (n <= 1):
        return 1
    else:
        return n * fact(n-1)

# b. Fibonacci Series
def fiboCalculator(n:int)->int:
    if n <= 1:    
        return 1
    else:
        return fiboCalculator(n-1) + fiboCalculator(n-2)

def fibo(n):
    for i in range (n):
        print(fiboCalculator(i), end=" ")
    print()

# c. TOH problem
def towerOfHanoi(n: int, by: chr, to: chr, aux: chr) -> None:
	if (n == 1):
		print(f"Move disk 1 from rod {by} to rod {to}");
		return
	towerOfHanoi(n-1, by, aux, to)
	print(f"Move disk {n} from rod {by} to rod {to}")
	towerOfHanoi(n-1, aux, to, by)
     
# executing a, b, and c
# a.
print(f"Factorial of 5 is: {fact(5)}")

# b. 
print("\nFibonacci upto 7th term:")
fibo(7)

#c. 
print("\nTower of Hanoi of 3 rings from rod A to C with Auxiliary rod B:")
towerOfHanoi(3, 'A', 'C', 'B')
