n, k = map(int, input().split())
e = list(map(int, input().split()))
d = list(map(int, input().split()))

e.sort()
d.sort()

temp = 0
ans = 0

for i in range(n):
    temp += e[i]
    temp += d[i]
    
    if temp > k: break
    ans += 1

print(ans)