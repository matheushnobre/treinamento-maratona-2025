def busca(k):
    i  = 0 
    f = len(v)-1
    
    while i <= f:
        m = (i+f) // 2 
        if v[m] == k:
            return m 
        elif v[m] > k:
            f = m-1 
        else:
            i = m+1 
    
    return i-1
            
v = []
for i in range(1, 63250):
    v.append(i*(i+1)//2 + 1)
    
while True:
    n, k = map(int, input().split())
    if n == 0: break 

    prod = input().split()
    s = busca(k) 
    aux = v[s]  
    s += 2    
    
    print(prod[(k - aux) % n])