n = int(input())
if n == 1:
    print(1)
elif n <= 3:
    print('NO SOLUTION')
elif n == 4:
    print('2 4 1 3')
else:
    l1 = [i for i in range(1, n+1, 2)]
    l2 = [i for i in range(2, n+1, 2)]
    l1.extend(l2)
    print(*l1, sep=' ')