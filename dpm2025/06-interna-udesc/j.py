n, k = map(int, input().split())
linha = list(input())

el = 0
for i in range(1, n-1):
    if linha[i] == '.': el += 1
        
for i in range(min(k, el)):
    if linha[i+1] == '.':
        linha[i+1] = '#'
        linha[i] = '.'
        continue
    
    linha[i+1] = '#'
    linha[i] = '.'
    
    for j in range(i+1, n-2):
        if linha[j+1] == 'o':
            linha[j+1] = 'o'
        else:
            linha[j+1] = 'o'
            break
    

print(*linha, sep='')