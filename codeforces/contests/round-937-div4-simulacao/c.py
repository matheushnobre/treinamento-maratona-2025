t = int(input())
for _ in range(t):
    h, m = input().split(':')
    h = int(h)
    if h == 0:
        print(f'12:{m} AM')
        
    elif h < 12:
        h = '0' + str(h)
        print(f'{h[-2:]}:{m} AM')
    
    elif h == 12:
        print(f'12:{m} PM')
        
    else:
        h = str(h-12)
        h = '0' + h
        print(f'{h[-2:]}:{m} PM')