while True:
    try:
        lista = []
        n = int(input())
        for _ in range(n):
            lista.append(input())
            
        lista.sort()
        
        ans = 0
        for i in range(1, len(lista)):
            ult = lista[i-1]
            atual = lista[i]
            for j in range(len(atual)):
                if atual[j] == ult[j]: ans += 1
                else: break 
                
        print(ans)
    except EOFError: 
        break
    
