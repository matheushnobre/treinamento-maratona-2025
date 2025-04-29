while True:
    n = int(input())
    if n == 0: break
    
    l = list(map(int, input().split()))
    if l[0] > l[1]:
        m = 0
        s = 1 
    else:
        m = 1
        s = 0
        
    for i in range(2, n):
        if l[i] > l[m]:
            s = m 
            m = i 
        elif l[i] > l[s]:
            s = i
    
    print(s+1)