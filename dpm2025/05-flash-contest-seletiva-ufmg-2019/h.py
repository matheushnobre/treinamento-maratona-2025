n = int(input())
l = list(map(int, input().split()))
s = set(l)

if len(l) == len(s):
    print('N')
else:
    print('S')