t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    
    l.sort()
    ans = 0
    last = l[0]
    freqAnt = 0
    freqAtual = 1
    
    for i in range(1, n):
        if l[i] == last:
            freqAtual += 1
        elif l[i] == last + 1:
            if freqAtual > freqAnt:
                ans += freqAtual - freqAnt
            freqAnt = freqAtual
            freqAtual = 1
        else:
            if freqAtual > freqAnt:
                ans += freqAtual - freqAnt
            freqAnt = 0
            freqAtual = 1
        
        last = l[i]
    
    if freqAtual > freqAnt:
        ans += freqAtual - freqAnt
        
    print(ans)