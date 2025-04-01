m = int(input())
for ct in range(m):
    dicionario = dict()
    p,l = map(int,input().split())

    for _ in range(p):
        japones = input()
        portugues = input()

        dicionario[japones] = portugues

    for _ in range(l):


        entrada = input().split()

        for s in range(len(entrada)):

            if entrada[s] in dicionario:
                entrada[s] = dicionario[entrada[s]]

        print(" ".join(entrada))
    
    print()

    
