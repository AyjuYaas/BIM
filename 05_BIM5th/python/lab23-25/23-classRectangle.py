#23 Create a Class Rectangle having length, breadth and area as instance variable. 
# Create a function name Set (no parameter and no return type) to take the user input for length and breadth. 
# Then create another function name Calculate (no parameter and no return type)
# to calculate the area and display the area of rectangle. 
# Create another class Imain having main () function to create an object of Rectangle class and invoke the function.

class Rectangle:
    length = 0
    breadth = 0
    def Set(self):
        self.length = int(input("Enter Length: "))
        self.breadth = int(input("Enter Breadth: "))
    
    def Calculate(self):
        area = self.length * self.breadth
        print("Area of Rectangle =", area)

rec = Rectangle()
rec.Set()
rec.Calculate()
