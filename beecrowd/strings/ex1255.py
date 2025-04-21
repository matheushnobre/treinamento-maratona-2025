letras = 'abcdefghijklmnopqrstuvwxyz'
for _ in range(int(input())):
    s = input().lower()
    dic = {c:0 for c in letras}
    for i in s:
        try:
            dic[i] += 1
        except KeyError:
            continue
    
    maior = 0
    ans = []
    for c in letras:
        if dic[c] > maior:
            ans.clear()
            ans.append(c)
            maior = dic[c]
        elif dic[c] == maior:
            ans.append(c)
    
    ans.sort()
    print(*ans, sep='')