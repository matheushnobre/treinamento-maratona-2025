t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    lista = list(map(int, input().split()))
    lista.sort()
    o = []
    ant = lista[0]
    t = 0
    for v in lista:
        if v == ant: t+=1
        else:
            o.append(t)
            ant = v
            t = 1
    o.append(t)
    o.sort()
    while k > 0 and len(lista) > 0:
        temp = o[0]
        o[0] -= k
        if(o[0] <= 0):
            del o[0]
        k -= temp
    print(max(len(o), 1))    