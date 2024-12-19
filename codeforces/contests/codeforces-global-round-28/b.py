t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    v = [0] * n
    j = 1
    for i in range(k-1, n, k):
        v[i] = j
        j += 1
        
    for i in range(n):
        if v[i] == 0: 
            v[i] = j
            j += 1
        
    print(*v, sep=' ')