matriz = [[0] * 1010 for _ in range(1010)]
xmin, xmax, ymin, ymax = map(int, input().split())

for i in range(ymin, ymax):
    for j in range(xmin, xmax):
        matriz[i][j] = 1

        
xmin, xmax, ymin, ymax = map(int, input().split())
for i in range(ymin, ymax):
    for j in range(xmin, xmax):
            matriz[i][j] = 1

ans = 0
for linha in matriz:
    ans += sum(linha)
print(ans)

