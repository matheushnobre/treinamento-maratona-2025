n = int(input())
s = list(input())

aux = s.copy()
aux.sort()

idx = 0
for i in range(n):
    if aux[i] != s[i]:
        idx = i
        break 

troca = n-1
for i in range(n-1, -1, -1):
    if s[i] == aux[idx]:
        troca = i
        break

s[idx], s[troca] = s[troca], s[idx]
print(''.join(s))