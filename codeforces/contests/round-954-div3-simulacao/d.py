def solve():
    n = int(input())
    s = input()
    
    if n == 2:
        print(int(s))
    elif s[0] == '0':
        print(0)
        return
    else:
        ans = 1000000000
        for i in range(n-1):
            v = int(s[i]+s[i+1])
            if i == 0: temp = v
            else: temp = int(s[0])
        
            for j in range(1, n):
                if j==i: 
                    if temp == 1: temp = v
                    elif v != 1: temp += v
                elif j==i+1: 
                    continue
                elif s[j] == '0':
                    print(0)
                    return
                elif s[j] == '1': 
                    continue
                elif temp == 1: 
                    temp = int(s[j])
                else: temp += int(s[j])
            ans = min(ans, temp)
        
        print(ans) 
        
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        solve()    