t = int(input())
for i in range(t):
    n, k, x = map(int, input().split())
    primeiros = (k * (k+1)) // 2;
    ultimos = ((n * (n+1)) // 2) - (((n-k) * ((n-k)+1)) // 2)
    
    if primeiros <= x and ultimos >= x:
        print('YES')
    else:
        print('NO')
