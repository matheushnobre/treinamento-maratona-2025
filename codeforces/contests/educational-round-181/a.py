for _ in range(int(input())):
    s = input()
    if 'FFT' in s or 'NTT' in s:
        s = list(s)
        ans = 'T' * s.count('T') + 'F' * s.count('F') + 'N' * s.count('N')
        for i in s:
            if i not in 'FTN':
                ans += i         
        
        print(ans)
    else:
        print(s)