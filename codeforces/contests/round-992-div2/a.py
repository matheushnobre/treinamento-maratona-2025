t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    lista = list(map(int, input().split()))
    
    saida = 'NO'
    for i in range(n):
        ehPossible = True
        for j in range(n):
            if i != j:
                v = abs(lista[i] - lista[j])
                if v % k == 0: 
                    ehPossible = False
        if ehPossible:
            saida = f'YES\n{i+1}'
            break
    
    print(saida)