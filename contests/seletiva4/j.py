a, b = map(int, input().split())

if a == b:
    print(1)
elif abs(a-b) % 2 == 0:
    print(3)
else:
    print(2)