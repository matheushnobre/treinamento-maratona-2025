from itertools import combinations

n, x = map(int, input().split())
prod = []
for _ in range(n):
    a, q = map(int, input().split())
    prod.append((a, q))
    
for i in range(1, n+1):
    maior = 0
    for c in combinations(prod, i):
        aci = 0
        qual = 0
        for j in c:
            qual += j[1]
            aci += j[0]
        if aci < x: maior = max(maior, qual)
    print(maior, end=' ')