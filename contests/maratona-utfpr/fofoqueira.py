e = input()
s = ''

l = e[0]
f = 1

for i in range(1, len(e)):
    if e[i] == l:
        f += 1
    else:
        s += l+str(f)
        l = e[i]
        f = 1
        
s += l+str(f)
print(s)