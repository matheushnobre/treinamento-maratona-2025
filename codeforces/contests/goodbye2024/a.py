t = int(input())
for _ in range(t):
    n = int(input())
    lista = list(map(int, input().split()))
    saida = False
    for i in range(n-1):
        j = i+1
        dx = [lista[i], lista[i], lista[i], lista[j]]
        dy = [lista[i], lista[i], lista[j], lista[j]]
        dz = [lista[i], lista[j], lista[j], lista[j]]
            
        saidaTemp = True
        for k in range(4):
            x = dx[k]
            y = dy[k]
            z = dz[k]
                
            if(x + y <= z) or (x + z <= y) or (y + z <= x):
                saidaTemp = False
            
        if saidaTemp: 
            saida = True
            
    if saida: print('YES')
    else: print('NO')