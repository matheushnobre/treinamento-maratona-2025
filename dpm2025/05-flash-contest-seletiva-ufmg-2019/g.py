n, m = map(int, input().split())
p = input()
t = input()

poss = set()
for i in range(m-n+1):
    palavra = t[i:i+n]
    #print(palavra)

    flag = True
    for j in range(n):
        if p[j] == '?': continue 
        elif p[j] != palavra[j]: 
            flag = False
            break
    
    if flag: poss.add(palavra)

print(len(poss))