r = list(map(int, input().split()))
n, q = map(int, input().split())

for _ in range(q):
    c1, l1, c2, l2 = map(int, input().split())
    c2 -= 1
    c1 -= 1
    
    if l1 == l2:
        ans = abs(r[c2] - r[c1])
    else:
        l1, l2 = min(l1, l2), max(l1, l2)
        men = min(l2-l1, l1-0+n-l2)
        
        com1 = 2*r[0] * 3.14159265359
        a1 = com1 / n * men
        ans1 = abs(r[c1] - r[0]) + abs(r[c2] - r[0]) + a1
        
        com2 = 2*r[1] * 3.14159265359
        a2 = com2 / n * men
        ans2 = abs(r[c1] - r[1]) + abs(r[c2] - r[1]) + a2
        
        com3 = 2*r[2] * 3.14159265359
        a3 = com3 / n * men
        ans3 = abs(r[c1] - r[2]) + abs(r[c2] - r[2]) + a3
        
        ans = min(ans1, ans2, ans3)
        
    print(f'{ans:.7f}')