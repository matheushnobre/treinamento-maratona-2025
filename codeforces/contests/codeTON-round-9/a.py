t = int(input())
for ct in range(t):
    n = int(input())
    mods = []
    last = 1
    for i in range(n):
        for v in range(last+1, 101):
            if v % (i+1) not in mods:
                mods.append(v % (i+1))
                last = v
                print(v, end=' ')
                break
    print()