lista = list(map(int, input().split()))

saida = False
for i in range(4):
    listaTemp = lista.copy()
    del listaTemp[i]
    
    saida = True
    for j in range(1, 3):
        if listaTemp[j] <= listaTemp[j-1]:
            saida = False
            break
    
    if saida: 
        print(*listaTemp, sep=' ')
        break

if not saida: print('ALLENDE VIVE')