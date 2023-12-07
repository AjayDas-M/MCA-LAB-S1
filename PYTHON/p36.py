def rev(name):
    for word in name[::-1]:
        print(word,end=" ")


n = input('enter the full name : ').split()
rev(n)