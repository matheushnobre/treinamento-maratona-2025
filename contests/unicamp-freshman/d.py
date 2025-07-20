
def dist(a, b):
    x1 = int(a[0])
    y1 = int(a[1])
    x2 = int(b[0])
    y2 = int(b[1])
    return ((x1-x2)**2 + (y1-y2)**2)

a = input().split()
b = input().split()
c = input().split()
d = input().split()

if (dist(a, b) == dist(b, c) == dist(c, d) == dist(d, a)) and (dist(a, c) == dist(b, d)):
    print('SIM')
else:
    print('NAO')