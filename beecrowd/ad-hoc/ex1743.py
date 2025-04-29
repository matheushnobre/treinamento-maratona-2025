l = list(map(int, input().split()))
l2 = list(map(int, input().split()))

s = 'Y'
for i in range(5):
    if l[i] + l2[i] != 1: s = 'N'

print(s)