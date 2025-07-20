for _ in range(int(input())):
    a, b, c, d, e, f = map(int, input().split())
    
    if (a == c == e) and (b + d + f == a):
        print('YES')
    elif (b == d == f) and (a + c + e == b):
        print('YES')
    elif (a + c == a + e) and (d + f == b) and (a + e == b):
        print('YES')
    elif (b + d == b + f) and (c + e == a) and (b + f == a):
        print('YES')
    else:
        print('NO')