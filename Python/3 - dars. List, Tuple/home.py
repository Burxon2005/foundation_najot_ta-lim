# S 1
"""
lst = [True, "Salom", 5, 5.6]
for i in lst:
    print(type(i), end=' ')
"""


# S 2
"""
nums = [[2, 15, 4],
        [19, 24, 11],
        [7, 9, 5],
        [10, 3, 1]]
for i in nums:
    for j, value in enumerate(i):
        if j % 2:
            i.remove(value)
            i.insert(j, value**2)
print(nums)
"""


# S 3
"""
arrays = [7, 8, 1, 3, 4, 6, 7, 5]
l = 0
copy_arr = arrays
for i in copy_arr:
    if l % 2:
            copy_arr[l] = i  3
    else:
            copy_arr[l] = i 2
    l += 1
print(copy_arr)
"""


# S 4
"""
n = int(input('N : '))
nums = (5, -3, 4, -2, 1, -9, 8, -6, 7, 0, 4)
for i in range(len(nums)):
    if nums[i] == n:
        index1 = i
print(index1)
"""


# S 5
"""
n = int(input('N : '))
lst = (12, 45, 4, 10, 5, 56, 34, 99)
lst = list(lst)
for i in lst:
    if int(i) == n:
        lst.remove(i)
lst = tuple(lst)
print(lst) 
"""


# S 6
"""
numbers = [
    [5, 3, 7],
    [1, 4, 9],
    [2, 8, 6]
]
sum_copy = 0
for i in numbers:
    summa = sum(i)
    if sum_copy < summa:
        sum_copy = summa
print(sum_copy)
"""


# S 7
"""
lst = [-1,4,2,7,0,9,1]
lst2 = [1,12,21,7,9,4,7]
for i in lst:
    for j in lst2:
        if i == j:
            print(f"{i}")
"""


# S 8
"""
numbers = [10,20,[300,400,[5000,6000],500],30,40]
numbers[2][2].insert(2,7000)
print(numbers)
"""


# S 9
"""
n = input("0-index = "),input("1-index = "),input("2-index = "),input("3-index = "),input("4-index = "),input('5-index = ')
n = list(n)
n.remove(max(n))
print(max(n))
"""


# S 10

num =  [2, 5, 1, 4, 3, 2, 1, 6, 8, 5, 7, 9]
new_num = []
for i in num:
    if i not in new_num:
        new_num.append(i)
num = new_num
print(num)
# S 11
lst = [11, 33, 50]
txt = ''
for i in lst:
    txt += str(i)
print(int(txt))
# print(*lst,sep='')    # 2 - usul
# S 12
lst = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]
lst.sort(key=lambda i : i[1])
print(lst)
# S 13
lst = [3, 4, 0, 0, 0, 6, 2, 0, 6, 7, 6, 0, 0, 0, 9, 10, 7, 4, 4, 5, 3, 0, 0, 2, 9, 7, 1]
nol = 0
for i in lst:
    if i == 0:
        lst.remove(i)
        nol += 1
for j in range(nol):
    lst.append(0)
print(lst)
"""