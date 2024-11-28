n = int(input())
lista = list(map(int, input().split()))
d = int(input())

s = d
for i in range(1, n):
    s += min(d, lista[i]-lista[i-1])
    
print(s)