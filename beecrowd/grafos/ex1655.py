import heapq

def dijkstra(origem, destino):
    prob = [0] * len(grafo)
    prob[origem] = 1

    fila = [(-1, origem)]
    heapq.heapify(fila)

    while fila:
        patual, atual = heapq.heappop(fila)
        patual = -patual

        for v in grafo[atual]:
            vz = v[0]
            peso = v[1]

            if patual * peso > prob[vz]:
                prob[vz] = patual * peso 
                heapq.heappush(fila, (-patual*peso, vz))
    return prob[destino]

while True:
    e = input().split()
    if len(e) == 1: break

    n, m = int(e[0]), int(e[1])
    grafo = [[] for _ in range(n+1)]

    for i in range(m):
        a, b, peso = map(int, input().split())
        grafo[a].append((b, peso/100))
        grafo[b].append((a, peso/100))

    p = dijkstra(1, n) * 100
    print(f'{p:.6f} percent')