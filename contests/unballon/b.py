from math import log

mod = 10**9 + 7
n, k = map(int, input().split())

e = 1
aux = 1

while aux < k:
    aux += 2**e
    e += 1

ans = 1
for i in range(e-1):
    ans = ans * n 
    ans %= mod

s = k - aux//2 - 1

while s > 0:
    m = int(log(s) // log(2))
    ad = 1
    for j in range(m):
        ad *= n 
        ad %= mod
    
    ans += ad 
    ans %= mod 
    s -= 2**m
    
print(ans)

