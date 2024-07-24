insert_row = []
    tempName = name.lower()
    if (tempName.startswith('s') or tempName.startswith('j')):
        insert_row.append(name, )
        selectedNames.append(tuple(insert_row))

sql = 'INSERT INTO names (Rollno, Name, Address) VALUES (%s, %s, %s)'
myCursor.executemany(sql, selectedNames)
myDb.commit()

print(myCursor.rowcount, "record inserted")
myDb.close()