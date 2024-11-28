lista = [1, 2, 4]
for i in range(3, 100):
    lista.append(lista[-1] + lista[-2] - lista[-3])

n = int(input())
print(lista[n-1])