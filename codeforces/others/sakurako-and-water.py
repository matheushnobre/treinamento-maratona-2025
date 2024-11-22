t = int(input())
for _ in range(t):
    n = int(input())
    mat = []

    for i in range(n):
        mat.append(list(map(int, input().split())))
    
    s = 0
    for i in range(n):
        for j in range(n):
            if mat[i][j] < 0:
                s += - mat[i][j]
                v = - mat[i][j]

                newJ = j
                for newI in range(i+1, n):
                    newJ+=1
                    if newJ >= n: break
                    mat[newI][newJ] += v

    
    print(s)