# 34. Write a program to delete records into the database.(assume your own database and table)

import mysql.connector 

conn = mysql.connector.connect(
    host = "localhost",
    username = 'root',
    password = "",
    database = "python_db"
)

myCursor = conn.cursor()

sql = "DELETE FROM student WHERE Rollno = %s"
value = ('021bim054', )

myCursor.execute(sql, value)
conn.commit()

print(myCursor.rowcount, 'rows deleted')
conn.close()
