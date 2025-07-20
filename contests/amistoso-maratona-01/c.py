n = int(input())
lista = []

for i in range(n):
    a, b, c, d = map(int, input().split())
    soma = a+b+c+d
    lista.append((soma, i))

lista.sort(key=lambda x : (-x[0], x[1]))
for i in range(n):
    if lista[i][1] == 0:
        print(i+1)
