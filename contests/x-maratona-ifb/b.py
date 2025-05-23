resp = False

def ans(i, j, n):
    global resp
    if resp: return
    
    if i == n:
        resp = True
        for linha in matriz:
            print(*linha, sep=' ')

    elif j == n:
        ans(i+1, 0, n)

    elif matriz[i][j] == 0:
        for valor in range(1, n+1):
            # verifica se está na linha 
            c1 = 0
            for v1 in matriz[i]:
                if v1 == valor: c1 = 1
            
            # verifica se está na coluna
            for v2 in [matriz[aux][j] for aux in range(n)]:
                if v2 == valor: c1 = 1

            if c1 == 0:
                matriz[i][j] = valor 
                ans(i, j+1, n)
                
        matriz[i][j] = 0
        
    else:
        ans(i, j+1, n) 

n = int(input())
matriz = []

for linha in range(n):
    matriz.append(list(map(int, input().split())))


ans(0, 0, n)

if not resp:
    print(-1)