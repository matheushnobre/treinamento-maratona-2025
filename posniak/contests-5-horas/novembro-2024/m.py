m, n = map(int, input().split())
lista = list(map(int, input().split()))

maior = lista[0] - 0

for i in range(1, n):
	d = lista[i] - lista[i-1]
	if d % 2 == 1: d += 1
	maior = max(maior, d//2)

d = m - lista[-1]

maior = max(maior, d)
print(maior)