"""
n = int(input("Enter num : "))
for i in range(n):
    for j in range(n):
        if i==j or i == 0 or j == 0 or j == n - 1 or i == n - 1 or i + j == n - 1:
            print("* ",end=" ")
        else:
            print("  ",end=" ")
    print(" ")

n = int(input("ds "))

p = n

for i in range(n+1):
    print("   "*i , "*  "*p)
    print("   "*i , "  *"*p)
    p-=1
"""

n = int(input('Enter first number : '))
i = 1
f = 1
sum = 0
sum2 = 0
while i < n:
    if n % i == 0:
        sum += i
    i += 1

# print(f"1 - summa = {sum}")

while f < sum:
    if sum % f == 0:
        sum2 += f
    f += 1

if sum2 == n:
    print(f"This is Amicable number : {n}")
"""
This is Amicable number : 6
This is Amicable number : 28
This is Amicable number : 220
This is Amicable number : 284
This is Amicable number : 496
This is Amicable number : 1184
This is Amicable number : 1210
This is Amicable number : 2620
This is Amicable number : 2924
"""