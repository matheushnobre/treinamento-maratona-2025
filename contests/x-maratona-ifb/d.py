s = input().split()
ans = s[0]
for i in range(1, len(s)):
    ans += ' '
    if s[i-1] == 'Daniel' or s[i-1] == 'daniel' or s[i-1] == 'DANIEL':
        if s[i][:3] == 'sad':
            if len(s[i]) == 3: ans += 'saad'
            elif s[i][3] not in 'abcdefghijklmnopqrstuvwxyz': ans += 'saad' + s[i][3:]
            else: ans += s[i]
        elif s[i][:3] == 'Sad':
            if len(s[i]) == 3: ans += 'Saad'
            elif s[i][3] not in 'abcdefghijklmnopqrstuvwxyz': ans += 'Saad' + s[i][3:]
            else: ans += s[i]
        elif s[i][:3] == 'SAD':
            if len(s[i]) == 3: ans += 'SAAD'
            elif s[i][3] not in 'abcdefghijklmnopqrstuvwxyz': ans += 'SAAD' + s[i][3:]
            else: ans += s[i]
        else:
            ans += s[i]
    else: ans += s[i]
    
print(ans)