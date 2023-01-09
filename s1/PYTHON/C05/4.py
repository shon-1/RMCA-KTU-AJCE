#Write a Python program to read specific columns of a given CSV file and print the content of the columns.


import csv

# import the column indices thst you want to read
# e.g.column 0 is the 1st coolumn,column 1  is the secound column,etc....
columns_to_read = [0,0,2]

# open the csv file
with open('qs4.csv','r') as file :
    # create csv reader
    reader = csv.reader(file)

    #iteratib=ve over the roe of csv file :
    for row in reader:
        #print the contents of the specified columns
        print([row[i] for i in columns_to_read])