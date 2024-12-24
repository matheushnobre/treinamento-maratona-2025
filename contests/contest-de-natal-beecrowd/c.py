meses = {
    'january': 31,
    'february': 28,
    'march': 31,
    'april': 30,
    'may': 31,
    'june': 30,
    'july': 31,
    'august': 31,
    'setember': 30,
    'october': 31,
    'november': 30,
    'december': 31
}

ans = 0
n = int(input())
for _ in range(n):
    mes, qtd = input().split()
    ans += meses[mes] * int(qtd)

print(ans)