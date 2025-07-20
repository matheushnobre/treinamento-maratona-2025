a, b, c = map(int, input().split())

if (b < c) and (a <= b or a >= c):
    print('Yes')
elif (b > c) and (a >= c and a <= b):
    print('Yes')
else:
    print('No')