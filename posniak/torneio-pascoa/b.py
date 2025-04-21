for _ in range(int(input())):
    s = input()
    v = int(input())
    ans = ''
        
    for i in range(len(s)):
        aux = ord(s[i]) - v
        if(aux < ord('A')): aux += 26
        ans += chr(aux)
            
    print(ans)
   