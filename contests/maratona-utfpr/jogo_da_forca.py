p = input()
s = ['_'] * len(p)
while True:
    e = input()
    if e == '*': break
    
    for i in range(len(p)):
        if p[i] == e:
            s[i] = e
    
    print(*s, sep='')