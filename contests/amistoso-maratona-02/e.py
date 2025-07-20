s = list(input())

for i in range(1, len(s)):
    if s[i] == s[i-1]:
        if i == len(s)-1:
            if s[i-1] != 'a':
                s[i] = 'a'
            else:
                s[i] = 'b'
        else:
            if s[i-1] != 'a' and s[i+1] != 'a':
                s[i] = 'a'
            elif s[i-1] != 'b' and s[i+1] != 'b':
                s[i] = 'b'
            else:
                s[i] = 'c'
                
print(*s, sep='')