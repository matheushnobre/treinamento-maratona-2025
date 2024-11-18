import heapq

t = int(input())
for ct in range(t):
    n, m, l = map(int, input().split())
    murdles = []
    power = []
    maiores = [[] for _ in range(n+1)]
    lista = []
    heapq.heapify(lista)
   
    for _ in range(n):
        li, ri = map(int, input().split())
        murdles.append((li, ri-li))
      
    indAtual = 0  
    for j in range(m):
        xi, vi = map(int, input().split())
        power.append((xi, vi))
        while indAtual != n and xi > murdles[indAtual][0]: 
                indAtual+=1
        maiores[indAtual].append(-vi)
            
    qtd = 0
    total = 0
 
    for i in range(n):
        for valor in maiores[i]:
            heapq.heappush(lista, valor)
            
        preciso = murdles[i][1]
        while len(lista) > 0:
            if total > preciso: break
            total += -heapq.heappop(lista)
            qtd += 1
            j += 1
        
        if total <= preciso: 
            qtd = -1
            break
        
    print(qtd)