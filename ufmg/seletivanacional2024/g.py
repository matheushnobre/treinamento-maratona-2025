mod = 998244353
w, h = map(int, input().split())
m = h-1 + w-1
ans = 1 
for i in range(m):
    ans = (ans * 2) % mod

print(ans*4 % mod) 