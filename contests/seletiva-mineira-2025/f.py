n, c, k = map(int, input().split())
ans = 0
lista = []
for i in range(n):
    lista.append(int(input()))

lista.sort()

maximo = -1
temp = 0

for i in range(n):
    
    if lista[i] > maximo or temp == c:
        maximo = -1 
        temp = 0
        ans += 1

    if temp == 0:
        maximo = lista[i] + k 
    temp += 1
    
    
print(ans)