#11 Write a program to find the number of days in a month

month = input("Enter the month: ")
array_30_days = ["april", "june", "september", "november"]

month = month.lower()

if(month == "february"):
    print("28 days")
elif(month in array_30_days):
    print("30 days")
else:
    print("31 days")