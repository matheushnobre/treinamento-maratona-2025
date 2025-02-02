dic = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'E'}

while True:
    n = int(input())
    if n == 0: break

    for i in range(n):
        lista = list(map(int, input().split()))
        r = None
        for j in range(5):
            if lista[j] <= 127:
                if r is None: r = dic[j]
                else: r = '*'
        if r is None: r = '*'
        print(r)
