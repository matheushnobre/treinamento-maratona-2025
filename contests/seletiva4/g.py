count = [0] * 5
l = list(map(int, input().split()))
for i in l: count[i] += 1

ans = 0
for i in count:
    ans += i // 2

print(ans)