# Create a class ArraySum having instance variable sum then class contains the function name 
# int Sum(int[ ] a) then calculate the sum of array elements and return and print int the main function

class ArraySum:
    def __init__(self):
        self.sum = 0
    
    def Sum(self, a: int) -> int:
        for i in a:
            self.sum += i

        return self.sum

class Main:
    @staticmethod
    def main():
        arr = [1, 2, 3, 4, 5]
        arraySum = ArraySum()
        print(arraySum.Sum(arr))

if __name__ == "__main__" : Main.main()