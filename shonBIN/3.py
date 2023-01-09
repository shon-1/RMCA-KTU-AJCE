# Write a Python program to read each row from a given csv file and print a list of strings.

import csv

# open the csv file
with open('qs3.csv','r') as file :
    # create csv reader
    reader = csv.reader(file)

    #iteratib=ve over the roe of csv file :
    for row in reader:
        print(row)