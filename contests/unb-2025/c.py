n, k, v = map(int, input().split())
lista = list(map(int, input().split()))

lista.sort(reverse=True)
menor = v//k

ans = min(menor, lista[k-1])
print(ans)