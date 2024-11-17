n, t, k, d = map(int, input().split())
bolos = [0, 0]
saida = "YES"
for i in range(1000001):
	if i % t == 0:
		bolos[0] += k
		bolos[1] += k
	if (i >= d) and (d-i) % t == 0:
		bolos[1] += k

	if bolos[0] >= n:
		saida = "NO"
		break
	elif bolos[1] >= n:
		saida = "YES"
		break

print(saida)
