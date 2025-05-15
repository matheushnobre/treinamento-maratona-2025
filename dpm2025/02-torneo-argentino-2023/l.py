a, b = map(int, input().split())
c, d = map(int, input().split())

r1 = a+c
r2 = b+d

if r1 == r2:
    print('D')
elif r1 > r2:
    print('A')
else:
    print('P')