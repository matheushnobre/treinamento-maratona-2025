from math import log
t = int(input())
for _ in range(t):
    n = int(input())
    if n == 1: print(1)
    elif n in [2, 3, 4]: print(2)
    else:
        saida = 2
        va = 4
        while va < n:
            saida += 1
            va = va * 2 + 2
        print(saida)