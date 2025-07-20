n = int(input())
ang = []

for i in range(1, n+1):
    x, y = map(int, input().split())
    x = abs(x)
    y = abs(y)
    print(x, y)
    if x == y == 0 or y == 0: ang.append((0, i))
    elif x == 0: ang.append((1, i))
    else: ang.append((x/y, i))
    
print(ang)