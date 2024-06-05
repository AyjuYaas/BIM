#12 Write a program to find the day when we enter the number using match case. Where number should be enter by user and if
# you press 1 then display Sunday, 2 then display Monday, 3 then display Tuesday and so on…

day = int(input("Enter day number: "))

match day:
    case 1:
        print("Sunday")
    case 2:
        print("Monday")
    case 3:
        print("Tuesday")
    case 4:
        print("Wednesday")
    case 5:
        print("Thursday")
    case 6:
        print("Friday")
    case 7:
        print("Saturday")
    case default:
        print("Out of Bounds")