for _ in range(int(input())):
    o = [0]*26
    c = 0
    f = input()
    for l in f:
        if l == ' ' or l == ',': continue
        idx = ord(l) - ord('a')
        if o[idx] == 0: c += 1
        o[idx] += 1
    if c == 26: print('frase completa')
    elif c >= 13: print('frase quase completa')
    else: print('frase mal elaborada')