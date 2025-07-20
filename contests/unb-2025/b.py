n = int(input())
lista = list(map(int, input().split()))
m = min(lista)
ans = 0

for i in lista:
    ans += max(0, i-m)

print(ans)