n, m = map(int, input().split())
for i in range(m):
    a, b = map(int, input().split())
print(*[i for i in range(1, n+1)], sep=' ')