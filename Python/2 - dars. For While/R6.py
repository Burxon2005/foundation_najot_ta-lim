# Tub sonlarni topish

for i in range(2,100):
    i = str(i)
    if i == i[::-1]:
        i = int(i)
        tubmi = True
        for j in range(2,i//2+1):
            if i%j==0:
                tubmi = False
                break
        if tubmi:
            print(i)