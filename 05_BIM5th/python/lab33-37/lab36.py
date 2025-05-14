#36 Write a program to retrieve records from the database.(assume your own database and table)

import mysql.connector as conn

myDb = conn.connect(
    host = "localhost",
    username = "root",
    password = '',
    database = 'python_db'
)

myCursor = myDb.cursor()

sql = "SELECT * FROM student WHERE Rollno = '%s'"
value = ('021BIM054', )

myCursor.execute(sql, value)

# sql = "SELECT * FROM student"
# myCursor.execute(sql)

result = myCursor.fetchall()

for x in result:
    print(x)

