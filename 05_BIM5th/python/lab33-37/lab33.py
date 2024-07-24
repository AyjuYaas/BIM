# 33. Write a program to insert record into the database.(assume your own database and table)
import mysql.connector as conn

myDb = conn.connect(
    host="localhost",
    username = "root",
    password = "",
    database = "python_db"
)

myCursor = myDb.cursor()

sql = "INSERT INTO student (Name, Email, Rollno, Course) VALUES (%s, %s, %s, %s)"
value = ('Sayujya', 'sayujya57@gmail.com', '054', 'BIM')

myCursor.execute(sql, value)
myDb.commit()

print(myCursor.rowcount , "records added")

myDb.close()