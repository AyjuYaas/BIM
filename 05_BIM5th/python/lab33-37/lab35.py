#35 Write a program to update record into a database.(assume your own database and table)

import mysql.connector as conn

myDb = conn.connect(
    host = 'localhost',
    username = 'root',
    password = '',
    database = 'python_db'
)

myCursor = myDb.cursor()

sql = "UPDATE student SET Rollno = '%s' WHERE Rollno = '%s'"
value = ('056', '021BIM054')

myCursor.execute(sql, value)
myDb.commit()
print(myCursor.rowcount, "data updated")
myDb.close()
