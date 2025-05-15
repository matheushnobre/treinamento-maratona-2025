mod = 10**9+7
n = int(input())

ans = 0
ant = 1
aux = 1

for i in range(1, n-1):
    aux = (aux + ant*2) % mod
    ant = (ant * 2) % mod
    
o = (ant * 2) % mod 
ans = aux * 3 + o

if n == 1: ans = 1
print(ans % mod)