def solve():
    a, b, c = map(int, input().split())
    s = a+b+c
    if s  % 3 != 0:
        print('NO')
    else:
        if c - b < b - a:
            print('NO')
        else:
            print('YES')


if '__main__':
    for _ in range(int(input())):
        solve()