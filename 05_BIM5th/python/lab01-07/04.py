#4 Write a program to find the simple interest using user input

p = float(input("Enter principal: "))
t = float(input("Enter time in Years: "))
r = float(input("Enter rate: "))

si = round( (p*t*r)/100 , 2)

print("Simple Interest:", si)