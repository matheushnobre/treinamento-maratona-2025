def ehPrimo(n):
    if n <= 1: return False 
    if n == 2: return True
    i = 2
    while i*i <= n:
        if n % i == 0: return False
        i += 1
    return True 

c = 0 
i = 0
while c <= 4*10**5:
    if ehPrimo(i): 
        c += 1 
        print(i, c)
    i += 1 
    

print(i-1)