t = 0
while True:
    t += 1
    p, s = map(int, input().split())
    if p == 0: break
    
    aux = []
    for i in range(s):
        u, v = map(int, input().split())
        aux.append((u, 1))
        aux.append((v, -1))
    aux.sort()
    print(f'Teste {t}', end='\n')
    soma = 0
    for idx in range(len(aux)):
        i = aux[idx]
        if soma == 0 and i[1] == 1:
            if idx != 0 and aux[idx-1][0] == i[0]: pass
            else: print(i[0], end=' ')
        elif soma == 1 and i[1] == -1:
            if idx != len(aux) - 1 and aux[idx+1][0] == i[0]: pass
            else: print(i[0], end='\n')
        soma += i[1]
        
    print()