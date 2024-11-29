n, k = list(map(int, input().split()))
ans = 0
lista = list(map(int, input().split()))
for i in lista:
    if i >= lista[k-1] and i > 0:
        ans += 1
print(ans)