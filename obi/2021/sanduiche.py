# 100 / 100

def solve(i, pegados):
    if i > n: 
        return 0
    
    pegados[i] = 1
    retorno = 1
    
    for j in range(i+1, n+1):
        flag = True
        for k in range(1, n+1):
        #    print(f'i = {i}, j = {j}, k = {k}')
            if pegados[k] and pares[k][j]:
             #   print(f'nao pode {k} com {j}')
                flag = False 
        if flag: 
            retorno += solve(j, pegados)  
                  
    pegados[i] = 0
    
    return retorno

n, m = map(int, input().split())
pares = [[0] * (n+1) for _ in range(n+1)]
pegados = [0] * (n+1)

for i in range(m):
    a, b = map(int, input().split())
    pares[a][b] = 1
    pares[b][a] = 1

ans = 0
for i in range(1, n+1): 
    ans += solve(i, pegados)
    
print(ans)