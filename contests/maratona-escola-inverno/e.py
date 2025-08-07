l, r = map(int, input().split())

aux = l 
for i in range(l+1, r+1):
    if i < 0:
        aux *= -1 
    elif i == 0:
        aux = 0

if aux >= 0:
    print('Y')
else:
    print('N')