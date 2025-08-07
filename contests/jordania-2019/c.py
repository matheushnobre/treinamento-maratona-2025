s, x = map(int, input().split())
ans = 0
while s > 0:
    ans += 1
    s //= x 
    #print(s)
print(ans)