for _ in range(int(input())):
    n, s = map(int, input().split())
    ans = 0
    # (0, 0), (0, s), (s, 0), (s, s)
    for i in range(n):
        dx, dy, xi, yi = map(int, input().split())
        
        if dx == 1:
            aux = s - xi
            if dy == -1:
                if yi - aux == 0:
                    ans += 1
            else:
                if yi + aux == s:
                    ans += 1
        elif dx == -1:
            aux = xi 
            if dy == 1:
                if yi + aux == s:
                    ans += 1
            else:
                if yi - aux == 0:
                    ans += 1
    print(ans)
        