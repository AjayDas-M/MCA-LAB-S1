s1 = input('Enter string 1 : ')
s2 = input('Enter string 2 : ')
s3 = s2[0] + s1[1::] + ' ' + s1[0] + s2[1::]
print(s3)
