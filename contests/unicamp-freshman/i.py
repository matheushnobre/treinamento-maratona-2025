n, k = map(int, input().split())
e = []

for i in range(n):
    a, b = map(int, input().split())
    e.append((a, b))


e.sort()
for i in e:
    if k >= i[0]:
        k += i[1]

print(k)