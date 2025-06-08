n, marcelo, machado = map(int, input().split())

lista = list(map(int, input().split()))
alturas = [(0, 0)]

for i in range(1, n):
    lista[i] = lista[i-1] + lista[i]
    alturas.append((lista[i], i))
    
alturas.sort(reverse=True)  

k = int(input())
machado = machado + lista[k-1]

ans = 'NAO'
for i in range(n):
    alt = alturas[i][0]
    idx = alturas[i][1]
    
    if idx == k-1: continue
    if marcelo + alt >= machado:
        ans = 'SIM'
        print(ans)
        print(idx+1)
        break

if ans == 'NAO': print(ans)