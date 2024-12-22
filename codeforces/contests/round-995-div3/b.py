def solve():
    n, a, b, c = map(int, input().split())
    d = (n//(a+b+c)) * 3
    t = (a+b+c) * (d//3)
    
    aux = [a, b, c]
    for i in range(3):
        if t < n:
            t += aux[i]
            d += 1
    
    print(d)
    

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()