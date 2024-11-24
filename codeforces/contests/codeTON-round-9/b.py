t = int(input())
for _ in range(t):
    s = input()
    n = len(s)
    r = False
    
    for i in range(n):
        try:
            if s[i] == s[i+1]:
                ans = s[i] + s[i+1]
                print(ans)
                r = True
                break
            elif s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2]:
                ans = s[i] + s[i+1] + s[i+2]
                print(ans)
                r = True
                break
        except:
            print(-1)
            break

