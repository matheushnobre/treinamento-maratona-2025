n = int(input())
ans = 0
potencia = 5

while potencia <= n:
    ans += n // potencia
    potencia *= 5
    
print(ans)
