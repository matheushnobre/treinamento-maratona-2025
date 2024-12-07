def somar(h1, m1, h2, m2):
    mf = m1 + m2
    if mf >= 60:
        mf -= 60
        h2 += 1
    hf = h1 + h2
    return hf, mf

def menor(h1, m1, h2, m2):
    if h2 > h1:
        return True
    elif h2 == h1 and m2 >= m1:
        return True
    return False
    
def calcularTempo(h1, m1, h2, m2):
    if h1 == h2 and m1 == m2: return 24, 0
    if m2 >= m1:
        mf = m2-m1
    else:
        h2 -= 1
        mf = 60+m2 - m1
    if h2 >= h1:
        hf = h2 - h1
    else:
        hf = 24+h2 - h1
    
    return hf, mf

def menorCaminho(graz, wroclaw):
    hm = 10000000
    mm = 10000000
    
    for rota in graz:
        ht, mt = calcularTempo(rota[0], rota[1], rota[2], rota[3])
                
        for rota2 in wroclaw:
            ht2, mt2 = calcularTempo(rota2[0], rota2[1], rota2[2], rota2[3])
            
            
            d1, d2 = calcularTempo(rota[2], rota[3], rota2[0], rota2[1])
            ht2, mt2 = somar(ht2, mt2, d1, d2)
            ht2, mt2 = somar(ht2, mt2, ht, mt)
            
            if menor(ht2, mt2, hm, mm):
                hm = ht2
                mm = mt2
                
    return hm, mm

if __name__ == '__main__':
    n = int(input())
    graz = []
    wroclaw = []
    
    for _ in range(n):
        cidade, horarios = input().split()
        a, b = cidade.split('-')
        h1, h2 = horarios.split('--')
        h1, m1 = map(int, h1.split(':'))
        h2, m2 = map(int, h2.split(':'))
    
        if a == 'Zagreb' and b == 'Graz':
            graz.append([h1, m1, h2, m2])
        elif a == 'Graz' and b == 'Wroclaw':
            wroclaw.append([h1, m1, h2, m2])
        
if len(wroclaw) == 0 or len(graz) == 0:
    print('NEMOGUCE')
else:    
    s1, s2 = menorCaminho(graz, wroclaw)
    s1, s2 = somar(s1, s2, 0, 1)
    if s2 == 0:
        s2 = '00'
    elif s2 < 10:
        s2 = '0' + str(s2)
        
    print(f'{s1}:{s2}')