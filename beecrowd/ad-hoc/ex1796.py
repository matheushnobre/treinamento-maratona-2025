n = int(input())
if sum(list(map(int, input().split()))) < n/2:
    print('Y')
else:
    print('N')