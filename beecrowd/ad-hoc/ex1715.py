n, m = map(int, input().split())
ans = 0
for i in range(n):
    lista = list(map(int, input().split()))
    ans += 1
    for j in lista:
        if j == 0:
            ans -= 1
            break
print(ans)