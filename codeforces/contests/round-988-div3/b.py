t = int(input())
for ct in range(t):
    k = int(input())
    l = list(map(int, input().split()))
    conf = [0] * (k+1)
    
    k -= 2
    s = []
    for num in l:
        if k % num == 0:
            if conf[num] == 0: s.append(num)
            conf[num] += 1
    
    for v in s:
        o = k//v
        if o == v and conf[o] > 1:
            print(o, v)
            break
        elif o != v and conf[o] >= 1:
            print(o, v)
            break
            