a, b, c = map(int, input().split())
q = int(input())

v = []
for x in list(map(int, input().split())):
    r = abs((a+c)*x**3 - b*x**2 + b*c*x + (x+c)*(x-a))
    v.append(r)

xor = v[0]
for i in range(1, q):
    xor = xor ^ v[i]
print(xor)