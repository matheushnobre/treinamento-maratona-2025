a, ta = map(int, input().split())
b, tb = map(int, input().split())

saidas = []
for i in range(300, 1440, b):
    saidas.append(i)

h, m = map(int, input().split(':'))
p = 60*h + m

# ônibus que saíram tb+1 minutos atrás até ta minutos a frente
l = -1
r = 0

for i in range(len(saidas)):
   # print(saidas[i])
    if saidas[i] > p - tb: 
        l = 1
        
    if l != -1 and saidas[i] < p + ta:
       # print(saidas[i] // 60, saidas[i] % 60)
        r += 1

print(r)