# Write a program to find the simple interest using user input

p = float(input("Enter principal: "))
t = float(input("Enter time in Years: "))
r = float(input("Enter rate: "))

si = (p*t*r)/100

print("Simple Interest:", si)