s = input('Enter a sentence : ')
l={}
for i in s:
    l[i]=l.get(i,0)+1
print(l)
