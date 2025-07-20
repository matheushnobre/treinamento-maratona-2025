string = list(input())
m = int(input())

for i in range(m):
    l, r, k = map(int, input().split())
    l -= 1
    r -= 1
    tam = (r-l+1)
    desl = k % tam 
    
    st = string[l:r+1].copy()
    
    #print(st, nst, desl)
    for i in range(tam):
        string[l + (i + desl) % tam] = st[i]

    #print(*string, sep='')
print(*string, sep='')