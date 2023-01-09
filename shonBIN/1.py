# Python program to read a file line by line and store it into a list.

f = open("abc.txt","r")
b = open("abc.txt","r")
i = open("abc.txt","r")

# single line Reading
print("Printing content in 1 line : ")
print(f.readline())

# multiple Line Reading
print("printing all lines using (readlines) :")
print(b.readlines())

# Using Strip
print("\n Printing contents using Strip :")
print([x.strip() for x in i])

f.close()
