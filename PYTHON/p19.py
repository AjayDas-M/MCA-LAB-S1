n = int(input('the number of characters needed : '))
i=1
b = []
while(i<=n):
    a = input('enter the character : ')
    b.append(a)
    i=i+1
print(b)
l = ""
for i in b:
    l = l+i
    
print(l)
