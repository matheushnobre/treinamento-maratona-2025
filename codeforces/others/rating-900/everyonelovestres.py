t = int(input())
for _ in range(t):
    n = int(input())
    if n in [1, 3]: print(-1)
    else:
        if n % 2 == 0:
            s = (n-2) * '3' + '66'
        else:
            s = (n-4) * '3' + '6366'
        print(s)