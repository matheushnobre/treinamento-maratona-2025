digitos = '0123456789'
letras = 'abcdefghijklmnopqrstuvwxyz'

for _ in range(int(input())):
    s = input()
    saida = 'S'
    
    if(len(s) <= 10):
        saida = 'N'
    
    l = d = 0
    for i in s:
        if i in digitos: 
            d += 1
            if l > 0:
                saida = 'N'
        else: 
            l += 1
    
    if d == 0 or l == 0:
        saida = 'N'
    
    for i in range(1, d):
        if s[i] < s[i-1]:
            saida = 'N'

    for i in range(d+1, len(s)):
        if s[i] < s[i-1]:
            saida = 'N'
        
    
    print(saida)
