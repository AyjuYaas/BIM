#14 Define String array of size 4 and store name of 4 students .The
# display the names of students whose name has character t.

students = ["Sneha", "Tisha", "Sandesh", "Ribet"]

for student in students:
    temp = student.lower()
    if 't' in temp:
        print(student)