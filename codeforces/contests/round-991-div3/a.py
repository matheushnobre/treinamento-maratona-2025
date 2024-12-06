t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    tam = 0
    pode = True
    s = 0
    for i in range(n):
        word = input()
        tam += len(word)
        if tam > m:
            pode = False
        if pode: s += 1
    
    print(s)