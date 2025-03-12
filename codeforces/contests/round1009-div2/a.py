t = int(input())
for _ in range(t):
  lista = [abs(int(a)) for a in input().split()]
  if len(set(lista)) == 1: print('Yes')
  else: print('No')