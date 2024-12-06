t = int(input())
for _ in range(t):
    n = int(input())
    lista = list(map(int, input().split()))
    par = []
    impar = []
    for i in range(n):
        if i % 2 == 1: par.append(lista[i])
        else: impar.append(lista[i])
    
    if sum(par) / len(par) == sum(impar) / len(impar) and sum(par) / len(par) % 1 == 0:
        print('YES')
    else:
        print('NO')