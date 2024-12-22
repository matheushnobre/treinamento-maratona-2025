def solve():
    n = int(input())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    
    m = l1[-1]
    s = 0
    
    for i in range(n-1):
        if(l1[i] >= l2[i+1]):
            m += l1[i]
            s += l2[i+1]
    
    print(m-s)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()