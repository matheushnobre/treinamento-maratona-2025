# 100 / 100

lista = []
for i in range(4):
    x = int(input())
    lista.append(x)

lista.sort()
a = lista[0] + lista[3]
b = lista[1] + lista[2]

print(abs(a-b))