for _ in range(int(input())):
    n, m = map(int, input().split())
    n -= 2
    m -= 2

    n = max(n, 0)
    m = max(m, 0)

    a = n // 3 + (n % 3 != 0)
    b = m //3 + (m % 3 != 0)

    print(a*b)