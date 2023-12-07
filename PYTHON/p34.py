a = int(input("Enter a number : "))
print("even " if not a % 2 else "odd")

print("___________________________")

b = input("Enter the list 1 : ")
item = input("Enter an item : ")
n = list(map(str.lower, b.split()))
print('Available' if (item.lower() in n) else "not Available")
