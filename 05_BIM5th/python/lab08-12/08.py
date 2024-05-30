#8 Write a program to find the greatest number between two numbers (a,b) where these two numbers should be the user input

a = int(input("Enter a number"))
b = int(input("Enter another number"))

if(a > b):
    print(a, "is greater")
else:
    print(b, "is greater")