n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.extend(b)
a = list(set(a))
a.sort()
print(*a, sep=' ')