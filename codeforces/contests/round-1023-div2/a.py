for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    
    if len(set(l)) == 1:
        print('NO')
    else:
        print('YES')
        s = [1] * n
        idx_maior = 0
        for i in range(n):
            if l[i] > l[idx_maior]:
                idx_maior = i 
        s[idx_maior] = 2
        print(*s, sep=' ')