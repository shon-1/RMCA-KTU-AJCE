# Python program to copy odd lines of one file to other

# open files for reading & writing
input_f = open('abc.txt')
output_f = open('write.txt','w')

# coping/reading contents from read_file to copy_data
copy_data = input_f.readlines()
print("\nActual File content :")
print(copy_data,"\n")

for i in range(0,len(copy_data)):
    if i%2==0:
        output_f.write(copy_data[i])
    else:
        pass
# closing after writing
output_f.close()

#opening write file in read mode and printing values
output_f=open('write.txt','r')
print("Odd lines are :")
print(output_f.read())

# closing files
input_f.close()
output_f.close()