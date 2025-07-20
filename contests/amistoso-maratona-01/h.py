n = int(input())
l = list(map(int, input().split()))

maior = 0
atual = 0

# inicio + fim
for i in range(n):
    if l[i] == 1: atual += 1
    else: break

for i in range(n-1, -1, -1):
    if l[i] == 1: atual += 1
    else: break

maior = atual
atual = 0

for i in range(n):
    if l[i] == 1: atual += 1
    else: atual = 0
    maior = max(atual, maior)

print(maior)