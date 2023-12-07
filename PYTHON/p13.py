print('------------------a---------------------------')
a=input('enter numbers separated with comma : ')
a=list(map(int,a.split(',')))
print(a)
pos=[item for item in a if(item>0)]
print('Positive Numbers are : ',pos)

print('----------------b--------------------------------')

sq=[item**2 for item in a]
print(sq)

print('-------------------c----------------------------')

vowels=['a','A','e','e','i','I','o','O','u','U']

s1 = input("enter a string ; ")
s2 = list(s1)
print(s2)
v1 = [item for item in s2 if(item in vowels)]
print('Vowels : ',v1)

print('------------------d-----------------------------')

noteven = [item for item in a if(item%2==1 or item<=0)]
print("not even : ",noteven)

print('-----------------e-----------------------------')

year = int(input('enter year : '))
leap = [i for i in range(2023,year) if((i%400==0) or (i%100==0)or(i%4==0))]
print('Leap year : ',leap)
