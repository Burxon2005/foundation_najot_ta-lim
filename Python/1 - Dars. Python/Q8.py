qator = int(input("Enter num : "))
ustun = int(input("Enter num : "))

if ustun % 2 != 0 and qator % 2 == 0:
    print("Black")
elif ustun % 2 == 0 and qator % 2 != 0:
    print("Black")
else:
    print("White")
