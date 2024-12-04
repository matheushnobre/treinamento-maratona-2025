dic = [0] + [i**2 for i in range(1, 201, 2)]

t = int(input())
for _ in range(t):
    n = int(input())
    lista = list(map(int, input().split()))
    s = 0
    total = 0
    for v in lista:
        total += v
        if total in dic:
            s += 1
    
    print(s) 