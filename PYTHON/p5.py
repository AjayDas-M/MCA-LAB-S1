s=input("Enter a string : ")
s=s[-1::]+s[1:-1:]+s[:1:]
print(s)
