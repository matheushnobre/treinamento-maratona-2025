import math

def busca(b, B, H, qtd):
    l = 0
    r = H 
    e = 0.000001
    
    while r - l > e:
        m = (l + r) / 2
        nb = b  + ((B-b) * m) / H
        c = (1/3) * math.pi * m * (b**2 + b*nb + nb**2)
                
        if abs(c-qtd) < e:
            return m 
        elif c < qtd:
            l = m 
        else:
            r = m 
            
    return (l + r) / 2
    
for _ in range(int(input())):
    N, L = map(int, input().split())
    b, B, H = map(int, input().split())
    
    qtd = L / N
    ans = busca(b, B, H, qtd)
    print(f'{ans:.2f}')