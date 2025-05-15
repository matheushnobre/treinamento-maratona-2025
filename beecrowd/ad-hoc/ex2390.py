lista = [0] * 10024
for _ in range(int(input())):
    p = int(input())
    for i in range(p, p+10):
        lista[i] = 1

print(sum(lista))