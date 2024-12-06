t = int(input())
for _ in range(t):
    freq = {2: 0, 3: 0}
    v = [int(i) for i in input()]
    
    for i in v:
        if i in [2, 3]:
            freq[i] += 1
    
    soma = sum(v)
    if soma % 9 == 0:
        print('YES')
        continue
    
    temp = soma // 9 + 1
    falta = temp*9 - soma
    
    while True:
        while falta >= 6 and freq[3] > 0:        
            freq[3] -= 1
            falta -= 6
        
        if falta % 2 == 0 and freq[2] * 2 >= falta:
            falta = 0
            break
        
        if falta % 2 == 0 and freq[2] * 2 < falta:
            break
        
        falta += 9                
                
    if falta == 0: print('YES')
    else: print('NO')
   