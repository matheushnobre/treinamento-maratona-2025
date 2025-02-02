n = int(input())
pi = 2
c = 1
while(pi != 1):
    c += 1
    if(pi <= n//2): 
        pi *= 2
    else:
        s = pi - n//2
        pi = s*2 - 1
print(c)
