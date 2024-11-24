n, a, b = map(int, input().split())
vetor = [1] * n

for i in range(a):
	vetor[i] = 0

ans = 0
for i in range(n-b-1, n):
	ans += vetor[i]

print(ans)