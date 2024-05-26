# Write a program to find the roots of Quadratic equation.
# X=-b±√b 2 -4ac/2a. where a,b and c should be a user input

import math

a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

if( (b**2 - 4*a*c) < 0 ):
    print("\nNo Solution")
else:
    x1 = (-b + ( math.sqrt(b**2 - 4*a*c) ) )/ (2*a)
    x2 = (-b - ( math.sqrt(b**2 - 4*a*c) ) )/ (2*a)
    print("\nRoots:", x1, x2)