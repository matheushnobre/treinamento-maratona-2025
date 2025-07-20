for _ in range(int(input())):
    n, m, k = map(int, input().split())
    if n % 2 == m % 2:
        if k % 2 == 1:
            print('NO')
            continue 
    else:    
        if k % 2 == 0:
            print('NO')
            continue 
        
    if k < n+m-2:
        print('NO')
        continue
    
    print('YES')
    
    for i in range(n):
        if i == n-1:
            if n % 2 == 0: at = 'B'
            else: at = 'R'
            
            for j in range(m-1):
                if i == n-2 and j == m-2:
                    if at == 'B': print('R', end=' ')
                    else: print('B', end=' ')
                else: print(at, end=' ')
                if at == 'B': at = 'R'
                else: at ='B'
            print(end='\n')
        else:
            if n % 2 == 0:
                l = ['B'] * (m-1)
                print(*l, sep=' ')
            else:
                l = ['R'] * (m-1)
                print(*l, sep=' ')
    
    at = 'R'
    for i in range(n-1):
        for j in range(m):
            print(at, end=' ')
        if at == 'R': at = 'B'
        else: at = 'R'
        print(end='\n')