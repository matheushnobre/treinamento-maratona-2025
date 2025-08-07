def mdc(a, b):
    while (b != 0):
        r = a % b
        a = b
        b = r
    return a
    

for _ in range(int(input())):
    a, b, k = map(int, input().split())
    m = mdc(a, b)
    while m != 1:
        a //= m 
        b //= m 
        m = mdc(a, b)
        
    if a <= k and b <= k: 
        print(1)
    elif a == b:
        print(1)
    else:
        print(2)