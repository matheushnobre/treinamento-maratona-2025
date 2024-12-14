import heapq

n = int(input())
notasAcima = []
notasAbaixo = []
contratados = []

for _ in range(n):
    e = input().split()
    if e[0] == '1':
        nome, nota = e[1], e[2]
        nota = int(nota)
        if nota > 80:
            heapq.heappush(notasAcima, [nota, nome])
        else:
            heapq.heappush(notasAbaixo, [-nota, nome])
    else:
        qtd = int(e[1])
        i = 0
        
        n = len(notasAcima)
        while i < min(qtd, n):
            contratados.append(notasAcima[0][1])
            heapq.heappop(notasAcima)
            i += 1
        
        if qtd > n:
            qtd -= n
            j = 0
            while j < qtd:
                contratados.append(notasAbaixo[0][1])
                heapq.heappop(notasAbaixo)
                j += 1
                        
contratados.sort()
print(*contratados, sep='\n')