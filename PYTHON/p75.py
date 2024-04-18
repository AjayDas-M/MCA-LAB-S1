import csv
fields = ['NAME', 'DEPARTMENT', 'SEMESTER']
rows = [['Abin', 'MCA', 'S1'],['ajay', 'MCA', 'S1']]
with open('abc.csv','w')as f:
    writer = csv.writer(f)
    writer.writerow(fields)
    writer.writerows(rows)
    f.close()