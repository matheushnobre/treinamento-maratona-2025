while True:
    l, c, p = map(int, input().split())
    p -= 1
    if l == 0: break

    boom = False
    for i in range(l):
        linha = list(map(int, input().split()))

        if linha[p] != 0 and not boom:
            boom = True
            print(f'BOOM {i+1} {p}')

        if boom: continue

        for j in range(p-1, -1, -1):
            if linha[j] != 0:
                e = linha[j]
                break 

        for j in range(p, c):
            if linha[j] != 0:
                d = linha[j]
                break 
        
        dif = abs(e-d)
        if e > d:
            for j in range(p, p+dif+1):
                if linha[j] != 0:
                    boom = True
                    print(f'BOOM {i+1} {j+1}')
                    break 
            p = p + dif
        else:
            for j in range(p, p-dif-1, -1):
                if linha[j] != 0:
                    boom = True
                    print(f'BOOM {i+1} {j+1}')
                    break 
            p = p - dif

    if not boom:
        print(f'OUT {p+1}')