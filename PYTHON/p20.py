a = input('enter a list of numbers : ')
a = list(map(int,a.split()))
a.sort()
print('second smallest number : ',a[1])
