n = int(input())
x = []
y = []

for _ in range(n):
    a, b = map(int, input().split())
    x.append(a)
    y.append(b)

x.sort()
y.sort()

print(x[(n-1)//2], y[(n-1)//2])