while True:
    n, m = map(int, input().split())
    if n == 0: break
    
    ans = str(n+m).replace('0', '')
    print(ans)