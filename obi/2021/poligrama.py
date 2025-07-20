# 30 / 100 (este código consome muita memória)

n = int(input())

# encontrar divisores
divisores = [1]
i = 2 
while i*i <= n:
    if n % i == 0:
        divisores.append(i)
        divisores.append(n // i)
    i += 1
divisores.sort()

# processar a string
s = input()
ans = False
for d in divisores:
    lista = [{l:0 for l in 'abcdefghijklmnopqrstuvwxyz'} for _ in range(n//d)]
    for i in range(n):
        lista[i // d][s[i]] += 1
    
    flag = True 
    for i in range(1, n//d):
        if lista[i] != lista[0]:
            flag = False
    
    if flag:
        print(s[:d])
        ans = True
        break

if not ans:
    print('*')