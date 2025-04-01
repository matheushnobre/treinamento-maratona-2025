import heapq

lista = []
faltam = 0
multa = 0

dia = 0
while True:
    try:
        t, f = map(int, input().split())
        heapq.heappush(lista, [-f/t, f, t, dia])

        if faltam == 0:
            atual = heapq.heappop(lista)
            multa += atual[1] * (dia - atual[3])
            faltam = atual[2]

        dia += 1
        faltam -= 1

    except EOFError:
        dia += faltam
        while len(lista) != 0:
            atual = heapq.heappop(lista)
            multa += atual[1] * (dia - atual[3])
            dia += atual[2]
        print(multa)
        break

    


    