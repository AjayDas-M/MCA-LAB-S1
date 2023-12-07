a1 = set(map(int,input("Enter first collection of numbers : ").split()))
a2 = set(map(int,input("Enter second collection of numbers : ").split()))
print('List of same length : ',len(a1)==len(a2))
print("The collections sum to same value :  ",sum(a1)==sum(a2))
print('are there common elements : ',len(a1&a2))

