data = input().split('-')
m = int(data[1])
d = int(data[2])

if m < 9:
    print('GOOD')
elif m == 9 and d <= 16:
    print('GOOD')
else:
    print('TOO LATE')