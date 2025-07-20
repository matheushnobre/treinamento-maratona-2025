ro, az = map(int, input().split())
a = int(input())

ans = 0
for ada in range(a+1):
    py = abs(a - ada)
    
    pada = ada * ro 
    ppy = py * az 
    ans = max(ans, pada*ppy)

print(ans)