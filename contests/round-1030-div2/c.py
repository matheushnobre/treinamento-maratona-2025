for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    aux, bit = 0, 0 
    while aux < k and bit <= 64:
        for j in range(n):
            v = a[j]
            if not (v & (1 << bit)):
                aux += 2**bit 
                if aux > k: break 
                else:
                    a[j] = a[j] | (1<<bit)
        bit += 1
        
    ans = 0
    for j in range(n):
        for bit in range(65):
            if a[j] & (1<<bit): ans += 1
    
    print(ans)