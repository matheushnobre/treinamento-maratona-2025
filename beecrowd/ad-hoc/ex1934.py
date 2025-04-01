l, c = map(int, input().split())
dic = {}

linhas = []
res = []

for _ in range(l):
    linha = input().split()
    linhas.append(linha[:-1])
    res.append(int(linha[-1]))

for j in range(c):
    col = []
    for i in range(l):
        col.append(linhas[i][j])
    linhas.append(col)

res = res + list(map(int, input().split()))


i = 0
while len(linhas) > 0:
    i = i % len(linhas)
    linha = linhas[i]
    vD = []
    soma = 0

    for v in linha:
        try:
            soma += dic[v]
        except KeyError:
            vD.append(v)
    
    if len(set(vD)) == 1:
        valor = vD[0]
        qtd = 0
        for v in linha:
            if v == valor: qtd += 1
        dic[valor] = (res[i] - soma) // qtd
        del res[i]
        del linhas[i]

    elif len(set(vD)) == 0:
        del res[i]
        del linhas[i]

    else:
        i += 1
    
aux = sorted(dic, key=lambda x:x)
for v in aux:
    print(v, dic[v])