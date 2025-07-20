for _ in range(int(input())):
    n = int(input())
    soma = (n*(n+1)) // 2
    
    i = 0
    while 2**i <= n:
        soma -= 2**i * 2
        i += 1 
    
    print(soma)