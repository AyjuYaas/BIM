#5 Write a program to find the Compound interest

p = float(input("Enter principal: "))
t = float(input("Enter time in Years: "))
r = float(input("Enter rate: "))

ci = p * ( (1 + r/100) ** t )

print("Compound Interest: ", round(ci, 2))