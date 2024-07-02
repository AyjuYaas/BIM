#31 write a program to count the number of words from the file name “input.txt”

fileIn = open("C:/Users/sayuj/OneDrive/Desktop/BIM054/00_BIM_Repo/05_BIM5th/python/lab28-32/input.txt", "r")
contents = fileIn.read().split()

print("Total Words = ", len(contents))

fileIn.close()