s = input('enter list of names separated with comma: \n')
name = list(s.split(','))
name = [item.split(' ')for item in name]
print('List of first names : ')
for i in name:
    print(i[0])
count = 0
for i in name:
    if(i[0][0]=='a' or i[0][0]=='A'):
        count=count+1
print('the names staring with a :. ',count)
