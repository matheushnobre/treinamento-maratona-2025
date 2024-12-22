t = int(input())
for _ in range(t):
	n, m = map(int, input().split())
	x1, y1, x2, y2 = map(int, input().split())
	p1 = (x1, y1)
	p2 = (x2, y2)

	bordas = [(1, 1), (1, m), (n, 1), (n, m)]
	if p1 in bordas or p2 in bordas:
		print(2)

	elif (x1 == 1 or x1 == n) or (x2 == 1 or x2 == n):
		print(3)

	elif (y1 == 1 or y1 == m) or (y2 == 1 or y2 == m):
		print(3)

	else:
		print(4)