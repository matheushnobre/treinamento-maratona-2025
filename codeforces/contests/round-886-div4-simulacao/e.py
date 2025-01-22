from math import sqrt

def solve():
    n, k = map(int, input().split())
    b = 0
    at = 0
    
    for s in list(map(int, input().split())):
        at += s*s
        b += 4*s
    
    a = n*4
    c = (k-at) * (-1)
    a1 = (-b + sqrt(b*b - 4*a*c)) / (2*a)
    
    print(int(a1))
    
if '__main__':
    t = int(input())
    for _ in range(t):
        solve()