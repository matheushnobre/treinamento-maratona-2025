def bfs(grafo, o, d):
    visitados = [0] * len(grafo)
    visitados[o] = 1
    distancias = [-1] * len(grafo)
    distancias[o] = 0
    fila = [o]
    
    while len(fila) != 0:
        v_atual = fila[0]
        del fila[0]
        for vz in grafo[v_atual]:
            if visitados[vz] == 0:
                visitados[vz] = 1
                distancias[vz] = distancias[v_atual] + 1
                fila.append(vz)

    return distancias[d]

p = int(input())
pessoas = []
grafo = [[] for _ in range(p)]

for _ in range(p):
    pessoas.append(input())
    
for _ in range(p):
    a, *lista = input().split()
    ia = pessoas.index(a)
    for b in range(len(lista)-1):
        ib = pessoas.index(lista[b])
        grafo[ia].append(ib)
        grafo[ib].append(ia)
        
m, n = input().split()
m, n = pessoas.index(m), pessoas.index(n)        
print(bfs(grafo, m, n))
    
    