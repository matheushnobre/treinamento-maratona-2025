dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

while True:
    try:
        n, m = map(int, input().split())
        matriz = []

        for i in range(n):
            matriz.append(list(map(int, input().split())))

        ans = False
        for i in range(n):
            for j in range(m):
                pico = True
                for k in range(8):
                    nx = i + dx[k]
                    ny = j + dy[k]
                    if nx >= 0 and nx < n and ny >= 0 and ny < m:
                        if matriz[i][j] <= matriz[nx][ny]:
                            pico = False
                            break
                if pico:
                    print(i+1, j+1)
                    ans = True
        
        if not ans: print(-1)
        print()

    except EOFError:
        break