import math
 
def mult(v1, v2):
    a, b = map(int, v1.split('/'))
    c, d = map(int, v2.split('/'))
    
    num = a*c 
    den = b*d
    return f'{num}/{den}'
 
def div(v1, v2):
    a, b = map(int, v1.split('/'))
    c, d = map(int, v2.split('/'))
    
    num = a*d
    den = b*c
    return f'{num}/{den}'
 
def soma(v1, v2):
    a, b = map(int, v1.split('/'))
    c, d = map(int, v2.split('/'))
    
    num = d*a + b*c
    den = b*d
    return f'{num}/{den}'
 
def sub(v1, v2):
    a, b = map(int, v1.split('/'))
    c, d = map(int, v2.split('/'))
    
    num = d*a - b*c
    den = b*d
    return f'{num}/{den}'
 
def formata(v):
    a, b = map(int, v.split('/'))
    m = math.gcd(a, b)
    if a<0 and b<0:
        return f'{abs(a//m)}/{abs(b//m)}'
    elif a<0 or b<0:
        return f'-{abs(a//m)}/{abs(b//m)}'
    else:
        return f'{abs(a//m)}/{abs(b//m)}'
 
n = int(input())
o = input().split()
 
aux = []
 
i = 0
while i < len(o):
    c = o[i]
    
    if c == '*':
        v1 = aux.pop()
        aux.append(mult(v1, o[i+1]))
        del o[i]
        del o[i]
    elif c == '/':
        v1 = aux.pop()
        aux.append(div(v1, o[i+1]))
        del o[i]
        del o[i]
    else:
        aux.append(o[i])
        i += 1
        
v = aux[0]
del aux[0]
 
while len(aux):
    if aux[0] == '+':
        v = soma(v, aux[1])
    else:
        v = sub(v, aux[1])
    del aux[0]
    del aux[0]
    
v = formata(v)
print(v)