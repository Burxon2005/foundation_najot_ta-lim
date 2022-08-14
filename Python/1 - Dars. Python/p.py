
a = int(input("Qator : "))
b = int(input("Ustun : "))

if a<=8 and b<=8:
    if a % 2 == 0 and b % 2 != 0:
        print("Qora")
    elif a % 2 != 0 and b % 2 == 0:
        print("Qora")
    else:
        print("Oq")
else:
    print("Noto'g'ri kiritdingiz")