def solve():
    n, m, k = map(int, input().split())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    
    passa = [1] * (m+1)
    for i in l2:
        passa[i] = 0

    if(n-k > 1):
        print('0'*m)
    elif(n-k == 0):
        print('1'*m)
    else:
        s = ''
        for v in l1:
            if passa[v] == 1:
                s += '1'
            else:
                s += '0'
        print(s)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()