# Create an array of size n then enter the element in the array and find min value and max value of an array.

list = []
size = int(input("Enter the number of records: "))

for i in range(size):
    num = int(input("Enter the number: "))
    list.append(num)

print("Max = ", max(list))
print("Min = ", min(list))

