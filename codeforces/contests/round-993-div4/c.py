t = int(input())
for _ in range(t):
    m, a, b, c = map(int, input().split())
    f = min(m, a)
    s = min(m, b)
    r = 2*m - f - s
    
    saida = f + s + min(r, c)
    print(saida)