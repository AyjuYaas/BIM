# 33. Write a program to insert record into the database.(assume your own database and table)
import mysql.connector as conn

myDb = conn.connect(
    host="localhost",
    username = "root",
    password = "",
    database = "python_db"
)

myCursor = myDb.cursor()

# For One SQL Statement and Execution

sql = "INSERT INTO student (Name, Email, Rollno, Course) VALUES (%s, %s, %s, %s)"
value = ('Sayujya', 'sayujya57@gmail.com', '054', 'BIM')

myCursor.execute(sql, value)

# For Multiple SQL Statement and Execution
sql = "INSERT INTO STUDENT (id, name, address, phone, semester, faculty) VALUES (%s, %s, %s, %s, %s, %s)"
value = (1, 'Sayujya', 'Kathmandu', '9841234567', 5, 'BIM')
value2 = (2, 'Sanjay', 'Bhaktapur', '9841234567', 5, 'BIM')

myCursor.executemany(sql, [value, value2])

myDb.commit()

print(myCursor.rowcount , "records added")

myDb.close()