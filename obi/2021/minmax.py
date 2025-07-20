# 100 / 100

def soma(n):
    x = 0
    for i in str(n):
        x += int(i)
    return x

s = int(input())
a = int(input())
b = int(input())

menor = -1 
maior = -1 

for i in range(a, b+1):
    if soma(i) == s:
        if menor == -1: menor = i
        maior = i

print(menor, maior, sep='\n')