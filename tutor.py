# a script to assist building habits.
import sys
import os

fo = open(sys.argv[1])
print ("Name of the file: "), fo.name

for line in fo.readlines():
    os.system('clear')    
    Newline = line.strip()  
    if not Newline:
        continue
    if line.startswith('#'):
        continue
    if line.startswith('//'):
        continue
    if line.startswith('/*'):
        continue
    if line.startswith('*/'):
        continue
    print (Newline)
    MyString = input()
    while MyString != Newline:
        print (Newline)
        MyString = input()
    
# Close opend file
fo.close()
