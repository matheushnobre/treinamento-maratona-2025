for _ in range(int(input())):
    n = int(input())
    if n <= 3: 
        print(n)
    else:
    
        ans = 3
        s = 2
        for j in range(3, n):
            ans += s 
            if j % 2 == 0: s += 1
        
        print(ans)