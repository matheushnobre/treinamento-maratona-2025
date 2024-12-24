p = int(input())
pk = int(input())
pesos = []
for _ in range(pk):
    l, v = input().split()
    pesos.append(int(v))
    
aux = [[[0, 0]] * (p+1) for _ in range(pk+1)]
for i in range(1, pk+1):
    pesoAtual = pesos[i-1]
    for j in range(1, p+1):
        if pesoAtual > j:
            aux[i][j] = aux[i-1][j]
        elif 1 + aux[i-1][j-pesoAtual][0] > aux[i-1][j][0]:
            aux[i][j] = [1 + aux[i-1][j-pesoAtual][0], aux[i-1][j-pesoAtual][1] + pesoAtual]
        elif 1 + aux[i-1][j-pesoAtual][0] == aux[i-1][j][0] and pesoAtual + aux[i-1][j-pesoAtual][1] > aux[i-1][j][1]:
            aux[i][j] = [1 + aux[i-1][j-pesoAtual][0], aux[i-1][j-pesoAtual][1] + pesoAtual]
        else:
            aux[i][j] = aux[i-1][j]
            
print(aux[-1][-1][0])
print(aux[-1][-1][1])