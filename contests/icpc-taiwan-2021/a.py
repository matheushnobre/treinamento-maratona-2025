n = int(input())
lista = []
for i in range(n):
    g, s, b, *p = input().split()
    lista.append([int(g), int(s), int(b), p])
lista.sort(key=lambda x : [-x[0], -x[1], -x[2]])

print(*lista[0][3], sep=' ')