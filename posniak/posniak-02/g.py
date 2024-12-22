t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    answer = (n // k) * k
    resto = n % k
    maximo = k // 2
    answer += min(resto, maximo)
    print(answer)
    