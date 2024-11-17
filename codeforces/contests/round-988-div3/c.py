from math import sqrt 
 
def ehPrimo(n):
    if n == 1 or n == 2: return True
    for i in range(2, int(sqrt(n) + 1)):
        if(n % i == 0): return False
    return True
 
t = int(input())
for ct in range(t):
    n = int(input())
    if n in [2, 3, 4]:
        print(-1)
    else:
        saida = []
        fila = []
        for i in range(1, n+1, 2):
            saida.append(i)
        
        first = True
        for i in range(2, n+1, 2):
            if first and ehPrimo(i + saida[-1]):
                fila.append(i)
            else:
                first = False
                saida.append(i)
        saida += fila
        print(*saida, sep=' ')