n, m = map(int, input().split())
l = list(map(int, input().split()))

count = [0] * (m+1)
for i in l:
    count[i] += 1
    
ac = [count[i]] * (m+1)
for i in range(1, m+1):
    ac[i] = ac[i-1] + count[i]
    
for i in range(m):
    print(ac[m] - ac[i], end=' ')