n = int(input("Enter number : "))
sum = 0
f = 1
for i in range(n-1):
    print(f"{f}", end='+')
    f*=10
    f+=1
    sum += f
print(f"{f} = {sum+1}")