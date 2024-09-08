# Write a python GUI program for the registration form with submit button where form include 
# “ First Name,LastName,Gender,DOB,Country,Hobbies and Submit Button” 
# and On Submit button these values should be saved in the database.

import tkinter as tk
import mysql.connector as Conn

def check_details():
    fname = form_fname.get()
    lname = form_lname.get()
    gender = genderVar.get()
    dob = form_dob.get()
    country = form_country.get()
    hobbies = hobbyVar.get()

    conn = Conn.connect(
        host = "localhost",
        user = "root",
        password = "",
        database = "python_db"
    )
    cursor = conn.cursor()
    query = "INSERT INTO userHobbies (fname, lname, gender, dob, country, hobbies) VALUES(%s, %s, %s, %s, %s, %s)"
    values = (fname, lname, gender, dob, country, hobbies)
    cursor.execute(query, values)
    conn.commit()
    conn.close()

    print(fname, lname, gender, dob, country, hobbies)


root = tk.Tk()
root.geometry('320x400')
root.title('Registration')

tk.Label(root, text='First Name').grid(row=0, column=1, padx = 5)
form_fname = tk.Entry(root)
form_fname.grid(row=1, column=1)
tk.Label(root, text='Last Name').grid(row=2, column=1, padx=5)
form_lname = tk.Entry(root)
form_lname.grid(row=3, column=1)

genderVar = tk.StringVar()
tk.Label(root, text='Gender').grid(row=4, pady=10, columnspan=3)
gender1 = tk.Radiobutton(root, text="Male", variable=genderVar, value="Male").grid(row=5, column=0, padx=10)
gender2 = tk.Radiobutton(root, text="Female", variable=genderVar, value="Female").grid(row=5, column=1)
gender3 = tk.Radiobutton(root, text="Others", variable=genderVar, value="Others").grid(row=5, column=2)

tk.Label(root, text="DOB (YYYY-MM-DD)").grid(row=6, column=1, pady=10)
form_dob = tk.Entry(root)
form_dob.grid(row=7, column=1, padx=10)

tk.Label(root, text='Country').grid(row=8, column=1, padx=5)
form_country = tk.Entry(root)
form_country.grid(row=9, column=1)

tk.Label(root, text='Hobbies').grid(row=10, columnspan=3, pady=10)
hobbyVar = tk.StringVar()
hobby1 = tk.Checkbutton(root, 
                        text="Reading",
                        variable=hobbyVar,
                        onvalue="Reading",
                        offvalue="").grid(row=11, column=0)
hobby1 = tk.Checkbutton(root, 
                        text="Movies",
                        variable=hobbyVar,
                        onvalue="Movies",
                        offvalue="").grid(row=11, column=1)
hobby1 = tk.Checkbutton(root, 
                        text="Aquarium",
                        variable=hobbyVar,
                        onvalue="Aquarium",
                        offvalue="").grid(row=11, column=2)

submit = tk.Button(root, text="Submit", command=check_details).grid(row=12, column=1, pady=10)

root.mainloop()