t = int(input())
for ct in range(t):
    n = int(input())
    score = 0
    a = list(map(int, input().split()))
    a.sort()
    o = 1
    for i in range(1, n):
        if a[i] == a[i-1]:
            o += 1
        else:
            score += o//2
            o = 1
    score += o//2
    print(score)
    