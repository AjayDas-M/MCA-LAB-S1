a = input('Enter a list of strings : ')
a = list(a.split(','))
n = int(input('Enter a number : '))
for i in a:
    if(len(i)>n):
        print(i)
