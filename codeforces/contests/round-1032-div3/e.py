for _ in range(int(input())):
    l, r = input().split()
    
    ans = 0
    for i in range(len(l)):
        if l[i] == r[i]: ans += 2
        elif abs(int(l[i]) - int(r[i])) >= 2 and l[i] != '9':
            break 
        elif l[i] == '9' and int(r[i]) >= 1:
            break 
        else:
            ans += 1
            if i < len(l) - 1 and (l[i+1] != '9' or r[i+1] != '0'): break
    
    print(ans)
        