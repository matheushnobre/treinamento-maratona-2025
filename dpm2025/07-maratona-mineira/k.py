n = int(input())
saida = []

aux = 0
for i in range(n):
    p, v = map(int, input().split())
    saida.append([p + (v*aux), aux])
    aux += 1

print(len(saida))
for i in saida:
    print(*i, sep=' ')