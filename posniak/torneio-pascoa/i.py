for _ in range(int(input())):
    s = input()
    if len(s) != 20 or s[0] != 'R' or s[1] != 'A':
        print('INVALID DATA')
    else:
        ans = ''
        c = False 
        for i in range(2, len(s)):
            if not c and s[i] != '0': c = True
            if c: ans += s[i]
        if ans == '': print('INVALID DATA')
        else: print(ans)