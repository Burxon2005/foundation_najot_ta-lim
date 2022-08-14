n = int(input("Enter number : "))
sum = 0
f = 1
i = 1
while i<n:
    print(f"{f}", end='+')
    f*=10
    f+=1
    sum += f
    i+=1
print(f"{f} = {sum+1}")