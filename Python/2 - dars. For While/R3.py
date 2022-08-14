
i = 1
f = 1
sum = 0
sum2 = 0
n = 1
while n!=5000:
    while i < n:
        if n % i == 0:
            sum += i
        i += 1


    while f < sum:
        if sum % f == 0:
            sum2 += f
        f += 1

    if sum2 == n:
        print(f"This is Amicable number : {n}")
    n+=1
    i = 1
    f = 1
    sum = 0
    sum2 = 0