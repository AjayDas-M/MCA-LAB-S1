words=input("enter the string").split()
words.sort(key=len,reverse=True)
print("max length=",len(words[0]))
if(len(words[0])==len(words[1])):
    print("bingo")
