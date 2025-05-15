n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort(reverse=True)

lista = []
for i in range(n):
    lista.append(a[i] + b[i])


lista.sort()
print(lista[-1] - lista[0])