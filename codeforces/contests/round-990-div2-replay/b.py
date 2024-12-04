t = int(input())
for _ in range(t):
    o = {}
    n = int(input())
    s = list(input())
    
    for l in s:
        try: o[l] += 1
        except KeyError: o[l] = 1
    
    ordenado = sorted(o.items(), key=lambda x:x[1])
    menor = ordenado[0][0]
    maior = ordenado[-1][0]

    for i in range(n):
        if s[i] == menor:
            s[i] = maior
            break
        
    print(''.join(s))