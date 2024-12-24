letras = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
n = int(input())
l = input().split()
aux = []
for c in l:
    aux.append(letras.index(c) + 1)

maior = 1
for i in range(n):
    for j in range(i, n):
        if(abs(aux[j] - aux[i]) < n and j-i+1 > maior):
            maior = j-i+1

print(n-maior)