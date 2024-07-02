#13 Write a program to find sum, subtract, multiply and division using switch case. 
# Where two numbers must be user input and
# user also must enter the operator.

a = int(input("Enter 1st Number: "))
b = int(input("Enter 2nd Number: "))

op = input("Enter the operator (+ - * /): ")

match op:
    case "+":
        print("Sum: ", a+b)
    case "-":
        print("Difference: ", a-b)
    case "*":
        print("Product: ", a*b)
    case "/":
        print("Division: ", a/b)