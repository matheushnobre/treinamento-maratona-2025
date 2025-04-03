ct = 0
while True:
  n = int(input())
  if n == 0: break
  
  if ct != 0: print('')
  ct+=1
  lista = []
  for i in range(n):
    nome = input()
    cor, tam = input().split()
    lista.append((cor, tam, nome))
    
  for i in range(n):
    for j in range(i+1, n):
      if lista[j][0] < lista[i][0]:
        lista[j], lista[i] = lista[i], lista[j]
      elif lista[j][0] == lista[i][0]:
        if lista[j][1] > lista[i][1]:
          lista[j], lista[i] = lista[i], lista[j]
        elif lista[j][1] ==lista[i][1]:
          if lista[j][2] < lista[i][2]:
            lista[j], lista[i] = lista[i], lista[j]
  
  for i in lista:
    print(*i, sep=' ')
