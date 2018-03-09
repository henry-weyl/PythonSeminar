print('Hello World!')
a = 1
b = 2
b = b+a
print(b)
raw = input('input 0 or 1 >')
a = int(raw)
if a == 0:
    print('You typed a 0!')
else:
    print('You typed {0}'.format(a))
a = 1
while a > 0:
    raw = input('input 0 or 1 >')
    a = int(raw)
    if a == 9:
        break
else:
    print('ends with 0')
c = ['a', 'b', 'c', 'd']
for i in c:
    print(i)

# for i in range(4):
#   print(b[i])
