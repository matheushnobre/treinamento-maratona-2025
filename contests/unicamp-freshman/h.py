n, m = map(int, input().split())
saida = [0] * m

last = []

for i in range(n):
    f = int(input())
    fila = list(map(int, input().split()))
    
    notdif = len((set(last)).intersection(set(fila)))
    
    j = len(last) - notdif
    for aux in range(f):
        if j < len(last) and fila[aux] != last[j]:
            saida[fila[aux]-1] = 1
        else:
            j += 1
    
    last = fila
    

print(*saida, sep=' ')
    