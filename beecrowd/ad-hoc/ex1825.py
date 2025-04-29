def check(n):
    cnt = [0] * 10
    for i in n:
        if cnt[int(i)] > 0: return 0
        cnt[int(i)] = 1
    return 1

while True:
    try:
        n, m = map(int, input().split())
    except EOFError:
        break
    ans = 0
    for i in range(n, m+1):
        ans += check(str(i))
    print(ans)