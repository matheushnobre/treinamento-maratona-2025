def virar(lista):
    virou = 0
    for i in range(len(lista)):
        if lista[i]==1:
            lista[i]=4
            if i>0:
                if lista[i-1]==1 or lista[i-1]==0:
                    lista[i-1] = not lista[i-1]
            if i<len(lista)-1:
                if lista[i+1]==1 or lista[i+1]==0:
                    lista[i+1] = not lista[i+1]
            virou = 1
            break
    if virou:
        virar(lista)
    return lista

n = int(input())
cartas = [int(i) for i in input().split()]
k = virar(cartas)
if k.count(4)==n:
    print('S')
else:
    print('N')