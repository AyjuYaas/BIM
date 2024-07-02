#9 Write a program to find the lowest number between three numbers(a,b,c) where these numbers should be the use input

a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
c = int(input("Enter 3rd number: "))

if(a<b and a<c):
    print(a,"is smallest")
elif(b<c):
    print(b, "is smallest")
else:
    print(c, "is smallest")