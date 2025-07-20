for _ in range(int(input())):
    n = int(input())
    s = list(input())
    
    flag = False
    for i in range(n-1):
        if s[i+1] < s[i]:
            s[i+1], s[i] = s[i], s[i+1]
            for j in range(i+1, n-1):
                if s[j+1] <= s[j]:
                    s[j+1], s[j] = s[j], s[j+1]
                else: 
                    break 
            flag = True 
            break 
    
    if not flag:
        for i in range(n-1):
            if s[i] == s[i+1]:
                flag = True 
                break 
    
    print(''.join(s))