s = input()
k = 'kick'

j = 0
ans = 0
for i in range(len(s)):
    if s[i] == k[j]:
        j += 1
    else:
        j = 0
        if(s[i] == k[j]): j = 1

    if j == 4:
        j = 0
        if(s[i] == k[j]): j += 1
        ans += 1

print(ans)