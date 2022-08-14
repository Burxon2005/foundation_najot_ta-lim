a = int(input("Enter number : "))


if a > 3600:
    print(f"soat = {a//3600}: minut = {(a-3600)//60}: sekund = {(a-3600)%60}")
elif a>60:
    print(f"soat = 0 minut = {a//60} sekund = {a%60}")
elif 60>a and a>0:
    print(f"soat = 0 minut = 0 sekund = {a}")
else:
    print("soat = 0 minut = 0 sekund = 0")