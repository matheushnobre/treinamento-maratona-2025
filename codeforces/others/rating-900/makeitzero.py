def solve():
    n = int(input())
    vetor = list(map(int, input().split()))
    
    if(n % 2 == 0):
        print(2)
        print(1, n)
        print(1, n)
    
    else:
        print(4)
        print(1, n-1)
        print(1, n-1)
        print(n-1, n)
        print(n-1, n)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()
