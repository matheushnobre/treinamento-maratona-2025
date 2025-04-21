n = int(input())
lista = []

for  _ in range(n):
    no, id = input().split()
    lista.append([no, int(id)])
    
lista = sorted(lista, key=lambda x :(-x[1], x[0]))
for i in range(n//3):
    print(f'Time {i+1}')
    
    for j in range(i, n, n//3):
        print(lista[j][0], lista[j][1])
        
    print()