def solve(n):
    aux = [2**i for i in range(1, 64)]

    if n in aux:
        return n-1
    b = list(bin(n)[2:])
    
    i = 0
    j = len(b) - 1
    
    while i < j:
        b[j] = b[i]
        i += 1
        j -= 1
    
    aux = ''
    for i in b: aux += i 
    ans = int(aux, 2)
    
    if ans > n:
        i = 0
        j = len(b)-1 
        inicio=i+1
        fim=j-1
        
        while i <= j:
            if b[i] == '1':
                inicio = i+1 
                fim = j-1 
            i += 1
            j -= 1
        for idx in range(inicio, fim+1):
            b[idx] = '1'
        b[inicio-1] = '0'
        b[fim+1] = '0'
    
        aux = ''
        for i in b: aux += i 
    
        ans = int(aux, 2)
        
    return ans

n = int(input())
print(solve(n))