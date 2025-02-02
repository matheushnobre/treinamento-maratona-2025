a, b = map(int, input().split())
s = -b // (a-b)
if (a-b) * s == -b:
    print(s)
else:
    print(s+1)