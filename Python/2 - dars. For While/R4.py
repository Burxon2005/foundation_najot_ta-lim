count = 0
for i in range(1,1000):
    for j in range(1,1000):
        if i % j == 0:
            count+=1
    if count == 9:
        print(i)

    count = 0
