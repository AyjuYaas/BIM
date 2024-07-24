import pandas as pd
import mysql.connector as conn

mydb = conn.connect(
    host = 'localhost',
    username = 'root',
    password = '',
    database = 'python_db'
)
mycursor = mydb.cursor()

df  = pd.read_csv('C:/Users/sayuj/OneDrive/Desktop/BIM054/00_BIM_Repo/05_BIM5th/python/lab33-37/names.csv')

df = df.drop(['year', 'percent', 'sex'], axis=1)
names = df['name'].to_numpy()
selectedNames = []

for name in names:
    insertrow = []
    tempName = name.lower()
    if (tempName.startswith('s') or tempName.startswith('j')):
        insertrow.append(str(name))
        selectedNames.append(tuple(insertrow))

sql = 'INSERT INTO names (Name) VALUES (%s)'
mycursor.executemany(sql, selectedNames)
mydb.commit()

print(mycursor.rowcount, "record inserted")
mydb.close()