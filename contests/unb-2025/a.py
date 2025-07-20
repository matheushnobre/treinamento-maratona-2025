meta = int(input())
sup = meta + (meta * 0.05)
inf = meta - (meta * 0.05)

while True:
    try:
        n = int(input())
        if n < inf: print('Calma que ainda tem o returno.')
        elif n <= sup: print('Boa! Merece cafe e pao de queijo.')
        else: print('Athelera, fera!')
    except EOFError:
        break