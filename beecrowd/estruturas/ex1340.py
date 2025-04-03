import heapq

while True:
    try:
        n = int(input())
    except EOFError: break

    pilha = []
    fila = []
    prioridade = [] 
    heapq.heapify(prioridade)
    isPilha = isFila = isPrioridade = True
    
    for i in range(n):
        o, e = map(int, input().split())
        if o == 1:
            pilha.append(e)
            fila.append(e)
            heapq.heappush(prioridade, -e)
        else:
            if pilha[-1] != e: isPilha = False
            del pilha[-1]
            if fila[0] != e: isFila = False
            del fila[0]
            if heapq.heappop(prioridade) != -e: isPrioridade = False
    
    v = isPilha + isPrioridade + isFila
    if v == 0: print('impossible')
    elif v > 1: print('not sure')
    elif isPilha: print('stack')
    elif isFila: print('queue')
    else: print('priority queue')