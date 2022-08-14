a = int(input("Enter len : "))

for i in range(a):
    for j in range(a):
        if i == 0 or j == 0 or i + j == a-1:
            print(" *",end=" ")
        else:
            print(" ",end=" ")
    print(" ")