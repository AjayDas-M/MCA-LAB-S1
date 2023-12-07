a = input("Enter a string : ")
w={}
for i in a.split():
    w[i.lower()]=w.get(i,0)+1
print(w)
