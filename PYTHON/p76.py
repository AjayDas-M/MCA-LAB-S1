import csv
with open('abc.csv',mode='r')as f:
    file = csv.reader(f)
    for lines in file:
        if lines:
            print(lines[0],"\t",lines[1]),"\t",lines[2])