#24 Create a Class Quadratic having a, b, c, x1, and x2 as instance variable. 
# Create a function name Input (no parameter and no return type) to take the user input for a, b, and c. 
# Then create another function name Calculate (no parameter and no return type) to calculate two 
# roots and assign to variable x1 and x2. Also Create another function name 
# Display (no parameter and no return type) to display the two roots. 
# Create another class Imain having main () function to create an object of Quadratic class and invoke the function.

import math

class Quadratic:
    def __init__(self):
        self.a = 0
        self.b = 0
        self.c = 0
        self.x1 = 0.0
        self.x2 = 0.0

    def Input(self):
        self.a = int(input("Enter the value of a: "))
        self.b = int(input("Enter the value of b: "))
        self.c = int(input("Enter the value of c: "))
    
    def Calculate(self):
        self.x1 = round( (-self.b + ( math.sqrt(self.b**2 - 4*self.a*self.c) ) )/ (2*self.a) , 2)
        self.x2 = round( (-self.b - ( math.sqrt(self.b**2 - 4*self.a*self.c) ) )/ (2*self.a) , 2)
    
    def Display(self):
        print(f"The Roots Are: {self.x1}, {self.x2}")

class Imain:
    @staticmethod
    def main():
        quad = Quadratic()
        quad.Input()
        quad.Calculate()
        quad.Display()

if __name__ == "__main__":
    Imain.main()
