#25 Make class “Rectangle with attributes length ,breadth and area as instance variable. 
# The class contains methods computeArea (no parameters and no return type)and 
# displayArea(no return type and no return type).Write a program with main method 
# that creates two objects of Rectangle class and find their areas and display area of larger rectangle.

class Rectangle:
    def __init__(self, l, b):
        self.length = l
        self.breadth = b
        self.area = 0

    def computeArea(self):
        self.area = self.length * self.breadth
    
    def displayArea(self):
        print(f"Area = {self.area}")

class Imain:
    @staticmethod
    def main():
        rec1 = Rectangle(12, 13)
        rec2 = Rectangle(4, 9)

        rec1.computeArea()
        rec2.computeArea()

        if(rec1.area > rec2.area):
            rec1.displayArea()
        else:
            rec2.displayArea()

if __name__ == "__main__":
    Imain.main()

