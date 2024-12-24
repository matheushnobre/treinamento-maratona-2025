n = int(input())
camadas = []
for _ in range(n):
    e = input()
    camadas.append(len(e))
    
camadas.sort()
menor = camadas[0]
maior = camadas[-1]

ans = 0
for i in range(menor, maior, 2):
    if i not in camadas:
        print(i * '*')
        ans += i
        
print(ans)