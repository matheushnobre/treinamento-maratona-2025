def dfs(i, grafo, visitados, comp):
    if visitados[i] != 0: return 
    visitados[i] = comp
    for vz in grafo[i]:
        dfs(vz, grafo, visitados, comp)

dic = {}
aux = 0
n, m = map(int, input().split())
grafo = [[] for _ in range(n)]

for i in range(m):
    p1, r, p2 = input().split()
    if p1 not in dic:
        dic[p1] = aux 
        aux += 1
    if p2 not in dic:
        dic[p2] = aux 
        aux += 1 
    
    grafo[dic[p1]].append(dic[p2])
    grafo[dic[p2]].append(dic[p1])
    
visitados = [0] * n 
comp = 0
for i in range(n):
    if visitados[i] == 0:
        comp += 1
        dfs(i, grafo, visitados, comp)
        

print(comp)