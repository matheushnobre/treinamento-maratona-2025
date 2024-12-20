t = int(input())
for _ in range(t):
    n = int(input())
    lista = list(map(int, input().split()))
    if lista[0] == 0: qtd = 0
    else: qtd = 1
    
    for i in range(1, n):
        if lista[i] != 0 and lista[i-1] == 0:
            qtd += 1
                
    print(min(2, qtd))