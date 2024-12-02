t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    lista = list(map(int, input().split()))
    lista.sort(reverse=True)
    
    total = 0
    saida = 0
    for n in lista:
        if total == k: 
            saida = 0
            break
        if total + n > k:
            saida = k - total
            break
        total += n
    
    if total < k:
        saida = k - total
    
    print(saida)