# 100 / 100

INF = 1e18

l, c = map(int, input().split())
dic = {}
linhas = []
colunas = [[] for i in range(c)]

for i in range(l+1):
    linhas.append(input().split())
    
for j in range(c):
    for i in range(l):
        dic[linhas[i][j]] = -INF
        colunas[j].append(linhas[i][j])
    colunas[j].append(linhas[l][j])

aux = [] 
for linha in linhas[:-1]+colunas:
    temp = {}
    for v in linha[:-1]:
        if v not in temp:
            temp[v] = 0
        temp[v] += 1
    aux.append((temp, linha[-1]))

for i in range(len(aux)):
    for linha in aux:
        numVariaveis = 0
        soma = 0
    
        for var in linha[0]:
            if dic[var] == -INF:
                numVariaveis += 1 
            else:
                soma += dic[var] * linha[0][var]
    
        if numVariaveis == 1:
            for var in linha[0]:
                if dic[var] == -INF:
                    dic[var] = (int(linha[1]) - soma) // linha[0][var] 
    
for k, v in sorted(dic.items()):
    print(k, v)