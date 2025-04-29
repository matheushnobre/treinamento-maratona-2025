def check(m):
    comp = [0] * c
    i = 0 
    
    for j in lista:
        if j > m: 
            return False
        
        if comp[i] + j <= m:
            comp[i] += j 
        else:
            i += 1 
            if i >= c: 
                return False 
            comp[i] += j
       
    return True

n, c, t = map(int, input().split())
aux = list(map(int, input().split()))
lista = [i / t for i in aux]

l, r = 0, 10**9
ans = r

while l <= r:
    m = (l+r) // 2 
    if check(m):
        ans = m 
        r = m-1 
    else:
        l = m+1

print(ans)