pesE = [0] * (10**5 + 10)
pesD = [0] * (10**5 + 10)

n = int(input())
for i in range(n):
    l, c = input().split()
    c = int(c)
    if l == 'E': pesE[c] += 1
    else: pesD[c] += 1

ans = 0
for i in range(10**5+10):
    aux = min(pesE[i], pesD[i])
    ans += aux

print(ans)