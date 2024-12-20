from math import sqrt

def isPrimo(n):
    for i in range(2, int(sqrt(n)+1)):
        if n % i == 0:
            return False
    return True

def primos(n):
    primos = []
    i = 2
    while len(primos) < n:
        if isPrimo(i):
            primos.append(i)
        i += 1
    return primos

while True:
    e = int(input())
    if e == 0: break
    
    fila = [i+1 for i in range(e)]

    lp = primos(e)
    p = -1
    
    while len(fila) > 1:
        primo = lp[0]
        del lp[0]
        p = (p + primo) % len(fila)
        del fila[p]
        p -= 1
        
    print(fila[0])
    