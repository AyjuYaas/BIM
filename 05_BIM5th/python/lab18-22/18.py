# Create an array of size n then enter the element in array and find the sum of array elements

list = []
size = int(input("Enter the number of records: "))

for i in range(size):
    num = int(input("Enter a number: "))
    list.append(num)

allSum = sum(list)
print("Sum = ", allSum)