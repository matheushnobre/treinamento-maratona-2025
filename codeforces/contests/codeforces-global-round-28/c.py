def solve():
    s = input()
    snum = int(s, 2)
    n = len(s)
    
    p = -1
    for i in range(n):
        if s[i] == '0':
            p = i
            break
    
    if p == -1:
        print(f'1 {n} 1 1')
        return

    tam = n-p
    l2 = r2 = 0
    maior = -1
    for i in range(p):
        v = s[i:i+tam]
        xor = int(v, 2) ^ snum
        if xor > maior:
            maior = xor
            l2 = i + 1
            r2 = i + tam 
            
    print(1, n, l2, r2)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()
        