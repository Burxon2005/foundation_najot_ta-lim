# T 1   setni bir biriga qo'shib chiqarish
"""
sample_set = {'Yellow', 'Orange', 'Black'}
sample_list = ['Blue', 'Green', 'Red']
sample_set.update(sample_list)
print(sample_set)
"""


# T 2   Ikkala set da borlarni chiqarish
"""
set1 = {10, 20, 30, 40, 50}
set2 = {30, 40, 50, 60, 70}
set1.intersection_update(set2)
print(set1)
"""


# T 3
"""
set1 = {10, 20, 30, 40, 50}
set2 = {30, 40, 50, 60, 70}
set1.update(set2)
print(set1)
"""


# T 4   screen


# T 5
"""
lst = [1, 'abcd', 3, 1.2, 4, 'xyz', 5, 'pqr', 7, -5, -12.22]
count = 0
for i in lst:
    if type(i) == type(int()):
        count += 1
print(count)
"""


# T 6
"""
tpl = (4, 3, 2, 2, -1, 18)
summ = 1
for i in tpl:
    summ *= i
print(summ)
"""


# T 7
"""
lst = [(), (), ('',),() ,('a', 'b'), (),('a', 'b', 'c'), (), ('d')]
lst = [t for t in lst if t]     # birinchi usul
# for j in range(len(lst)):     # ikkinchi usul
#     for i in lst:
#         if i == ():
#             lst.remove(i)
print(lst)
"""


# T 8
"""
lst = [1, 'abcd', 3, 1.2, 4, 'xyz', 5, 'pqr', 7, -5, -12.22]
m = 0
for i in lst:
    if type(i) == type(int()) or type(i) == type(float()):
        if m <= i:
            m = i
print(m)
"""


# T 9
"""
keys = ['Ten', 'Twenty', 'Thirty']
values = [10, 20, 30]
st = dict(zip(keys, values))
print(st)
# T 10
sampleDict = {
    'class':{
        'student':{
            'name':'mike', 'marks':{
                'physics':70,
                'history':80
            }
        }
    }
}
print(sampleDict['class']['student']['marks']['history'])
"""


# T 11
"""
sampleDict = {'a': 100, 'b': 200, 'c': 300}
for i in sampleDict.values():
    if i == 200:
        print('bor')
        break
    elif i == len(sampleDict):
        print('yoq')
    else:
        continue
"""


# T 12
"""
sampleDict = {
    'name': 'kelly',
    'age': 25,
    'salary': 8000,
    'city': 'new york'
}
sampleDict['location'] = sampleDict['city']
del sampleDict['city']
print(sampleDict)
"""


# T 13  ???


# T 14
"""
lst = [1, 4, 7 , 9]
if lst != sorted(lst):
    print('Tartibsiz')
else:
    print('Osish')
"""
