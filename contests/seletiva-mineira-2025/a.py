n = int(input()) 

ans = 0
atual = 4
for i in range(n):
    if atual < 5: ans += 1
    atual = (atual + 1) % 7
    
print(ans)