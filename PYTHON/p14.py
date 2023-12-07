s = input('Enter a string : ')
rev = s[-1::-1]
print(rev)
if(rev==s):
    print("the word is palindrome")
else:
    print("The word is not palindrome")
