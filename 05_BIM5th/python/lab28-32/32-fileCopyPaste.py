#32 write a program to read the file “input.txt” where it contains the list of keyword and 
# read the such a keyword whose length is greater than 3 and write this keyword in “output.txt” file

fileIn = open("C:/Users/sayuj/OneDrive/Desktop/BIM054/00_BIM_Repo/05_BIM5th/python/lab28-32/input.txt", "r")
contents = fileIn.read().split()

fileOut = open("C:/Users/sayuj/OneDrive/Desktop/BIM054/00_BIM_Repo/05_BIM5th/python/lab28-32/output.txt", "w")

for words in contents:
    if (len(words) >= 3):
        fileOut.write(words + "\n")

fileIn.close()
fileOut.close()