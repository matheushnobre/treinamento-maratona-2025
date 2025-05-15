a, b = map(int, input().split())

ans = ''

if a == 0:
    if b == 180: ans = 'lado'
    elif b < 180: ans = 'cima'
    else: ans = 'baixo'
    
elif a < 90:
    o = 180 - a 
    if b == o: ans = 'lado'
    elif b > a and b < o: ans = 'cima'
    else: ans = 'baixo'
    
elif a == 90:
    ans = 'baixo'
    
elif a < 180:
    o = 180 - a
    if b == o: ans = 'lado'
    elif b < a and b > o: ans = 'cima'
    else: ans = 'baixo'
    
elif a == 180:
    if b == 0: ans = 'lado'
    elif b < 180: ans = 'cima'
    else: ans = 'baixo'
    
elif a < 270:
    o = 360 - (a - 180)
    if b == o: ans = 'lado'
    elif b > a and b < o: ans = 'baixo'
    else: ans = 'cima'
    
elif a == 270:
    ans = 'cima'
    
else:
    o = 180 + (360 - a)
    if b == o: ans = 'lado'
    elif b > o and b < a: ans = 'baixo'
    else: ans = 'cima'
    
    
if ans == 'lado':
    print('O Claudio ta do outro lado da roda!')
elif ans == 'cima':
    print('Olha o Claudio ali em cima!')
else:
    print('O Claudio ta ali embaixo!')