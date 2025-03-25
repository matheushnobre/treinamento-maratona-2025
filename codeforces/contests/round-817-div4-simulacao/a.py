for _ in range(int(input())):
    n = int(input())
    s = list(input())

    aux = list('Timur')

    aux.sort()
    s.sort()
    if aux == s: print('YES')
    else: print('NO')