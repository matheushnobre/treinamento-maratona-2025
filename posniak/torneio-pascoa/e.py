while True:
    n = int(input())
    if n == 0: break 
    
    aux = [0] * 1100
    l = map(int, input().split())
    
    for i in l:
        for j in range(i, i+10):
            aux[j] = 1 
    
    ans = 0
    for i in aux:
        ans += i 
        
    print(ans)