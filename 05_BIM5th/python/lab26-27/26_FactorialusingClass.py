#26 Create a class Factorial having instance variable result.
# Class contains the function name int FindFact(int n) then calculate the factorial of number n and 
# return and print in the main function

class Factorial:
    result = 1
    
    def FindFact(self, n:int):
        while( n != 1 ):
            self.result *= n
            n -= 1
        return self.result
class Main:
    @staticmethod
    def main():
        factorial = Factorial()
        print(f"Factorial of 5 = {factorial.FindFact(5)}")



if __name__ == "__main__":
    Main.main()