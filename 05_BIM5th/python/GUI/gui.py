import tkinter as tk

root = tk.Tk()
root.geometry('400x400')
root.title('GUI Test')

def update_label():
    print(clickVar.get())
    if(clickVar.get() == 1):
        result.config(text="Apple")
    else:
        result.config(text="")

w = tk.Label(root, text='Which Fruit Do You Like?')
w.pack()

clickVar = tk.IntVar()

chkbox1 = tk.Checkbutton(root, 
                        text="Apple",
                        variable=clickVar,
                        onvalue=1,
                        offvalue=0,
                        command=update_label)
result = tk.Label(root, text="")

radioVar = tk.StringVar("Option1")
radio1 = tk.Radiobutton(root, text="op1", variable=radioVar)
radio2 = tk.Radiobutton(root, text="op2", variable=radioVar)
radio3 = tk.Radiobutton(root, text="op3", variable=radioVar)
1
chkbox1.pack()
result.pack()

radio1.pack()
radio2.pack()
radio3.pack()
root.mainloop()

