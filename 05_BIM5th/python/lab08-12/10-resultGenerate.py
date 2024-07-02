#10 Write a program to generate the simple result where user must enter the marks of five subject then check whether given
# entered marks is passed or not. If marks entered in all subject is greater than pass marks the calculate the percentage and 
# division.(assume P.M=35,F.M=100)

subjects = ["Python", "Java", "C++", "PHP", "Psychology"]
total_marks = 0
fail = False

for e in range(5):
    while(True):
        print("Enter Marks of", subjects[e], end=": ")
        marks = int(input())
        if(marks<100 and marks>0): break
        print("Marks cannot be greater than 100 or less than 0")
        continue
    if(marks < 35):
        fail = True
    total_marks += marks

if(fail):
    print("Failed")
else:
    percentage = (total_marks / 500 ) * 100
    print("Percentage = ", percentage)

    if(percentage > 80):
        print("Distinction")
    elif(percentage > 70):
        print("First Division")
    elif(percentage > 60):
        print("Second Division")
    else:
        print("Third Division")