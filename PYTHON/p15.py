num = input("enter  numbers separated by commas : ")
s = list(map(int,num.split(',')))
print(s)
even = [i for i in s if(i%2==0)]
print(even)
