# Esta é a questão que eu sugeri pro contest. 
# Já havia sido feito antes, não entra na minha contagem de questões resolvidas.

ct = int(input())
for _ in range(ct):
    x, y, k = map(int, input().split())
    ax = 0
    ay = 0
    bx = min(x, y)
    by = min(x, y)
    cx = 0
    cy = min(x, y)
    dx = min(x, y)
    dy = 0
    print(ax, ay, bx, by)
    print(cx, cy, dx, dy)