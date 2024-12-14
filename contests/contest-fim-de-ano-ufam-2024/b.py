saida = 0
n, l = map(int, input().split())
for i in range(n):
    x, v = map(int, input().split())
    if v > 0:
        tempo = (l - x) / v
    else:
        tempo = x / abs(v)
    saida = max(saida, tempo)
    
print(f'{saida:.8f}')