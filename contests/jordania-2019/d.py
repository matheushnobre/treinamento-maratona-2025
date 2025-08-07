dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(l, c, s):
    if m[l][c] == '*': return s 
    m[l][c] = '#'
    retorno = ''
    
    for k in range(4):
        nx = l + dx[k]
        ny = c + dy[k]
        if 0 <= nx < 12 and 0 <= ny < 12 and m[nx][ny] != '#':
            if k == 0:
                retorno = max(retorno, dfs(nx, ny, s+'D'))
            elif k == 1:
                retorno = max(retorno, dfs(nx, ny, s+'U'))
            elif k == 2:
                retorno = max(retorno, dfs(nx, ny, s+'R'))
            else:
                retorno = max(retorno, dfs(nx, ny, s+'L'))

    return retorno

m = [['.'] * 12 for _ in range(12)]
m[2][2] = m[2][9] = m[9][2] = m[9][9] = '*'
m[9][1] = m[8][1] = m[8][2] = m[8][10] = m[8][9] = m[9][10] = m[5][5] = m[5][6] = m[6][5] = m[6][6] = '#'

for _ in range(int(input())):
    m = [['.'] * 12 for _ in range(12)]
    m[2][2] = m[2][9] = m[9][2] = m[9][9] = '*'
    m[9][1] = m[8][1] = m[8][2] = m[8][10] = m[8][9] = m[9][10] = m[5][5] = m[5][6] = m[6][5] = m[6][6] = '#'

    l, c = map(int, input().split())
    l -= 1
    c -= 1
    
    ans = dfs(l, c, '')
    print(len(ans))
    print(ans)