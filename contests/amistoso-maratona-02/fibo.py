lista = [0, 1]

for i in range(2, 101):
    f = lista[-1] + lista[-2]
    lista.append(f)
    print(f'FIB({i}) = {f}')
    if f > 2*10**5: break
