n = int(input())
lista = list(map(int, input().split()))

rest = {i:0 for i in range(n)}
soma = 0
ans = 0

for i in lista:
    soma += i
    soma %= n
    if soma % n == 0: ans += 1 
    ans += rest[abs(soma % n)]
    rest[abs(soma%n)] += 1

print(ans)