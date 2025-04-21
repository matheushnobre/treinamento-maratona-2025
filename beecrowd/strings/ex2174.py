c = 151
l = []

for _ in range(int(input())):
    p = input()
    if p not in l: 
        c -= 1
        l.append(p)
    
print(f'Falta(m) {c} pomekon(s).')