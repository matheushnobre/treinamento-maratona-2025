# Optei por resolver em Python pois consigo converter uma string binária de 500 caracteres
# em um valor inteiro. C++ não me permitiria isso

def solve():
    m = list(input())
    n = list(input())
    pm = list()
    pn = list()

    for i in range(len(m)):
        if m[i] == '*': pm.append(i)

    for i in range(len(n)):
        if n[i] == '*': pn.append(i)
        
    for p1 in range(1<<len(pm)):
        for i in range(len(pm)):
            if(p1&(1<<i)): m[pm[i]] = '1'
            else: m[pm[i]] = '0'
        
        for p2 in range(1<<len(pn)):
            for i in range(len(pn)):
                if(p2&(1<<i)): n[pn[i]] = '1'
                else: n[pn[i]] = '0'
            
            a = int(''.join(m), 2)
            b = int(''.join(n), 2)
            if(a % b == 0):
                print(''.join(m))
                return
            
if '__main__':
    solve()