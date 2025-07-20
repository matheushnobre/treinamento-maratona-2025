n = int(input())
lista = list(map(int, input().split()))

z = []
for i in range(n):
    if lista[i] == 0:
        z.append(i)
        
a = 0
p = 0
saida = [0] * n
for i in range(n):
    if p < len(z): saida[i] = min(abs(i - z[a]), abs(i - z[p]))
    else: saida[i] = abs(i - z[a])
    
    if lista[i] == 0:    
      p += 1
      a = p-1
    
print(*saida, sep=' ')