import pandas as pd
import mysql.connector as conn

myDb = conn.connect(
    host = 'localhost',
    username = 'root',
    password = '',
    database = 'python_db'
)
myCursor = myDb.cursor()

df  = pd.read_csv('C:/Users/sayuj/OneDrive/Desktop/BIM054/00_BIM_Repo/05_BIM5th/python/lab33-37/names.csv')

names = df['Name'].to_numpy()
selectedNames = []

for name in names:
    insert_row = []
    tempName = name.lower()
    if (tempName.startswith('s') or tempName.startswith('j')):
        insert_row.append(name, )
        selectedNames.append(tuple(insert_row))

sql = 'INSERT INTO names (Name) VALUES (%s)'
myCursor.executemany(sql, selectedNames)
myDb.commit()

print(myCursor.rowcount, "record inserted")
myDb.close()