n = int(input())
p, o, q = input().split()

if o == '+':
    r = int(p) + int(q)
else:
    r = int(p) * int(q)
    
if r > n:
    print('OVERFLOW')
else:
    print('OK')