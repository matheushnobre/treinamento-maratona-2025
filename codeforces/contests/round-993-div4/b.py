t = int(input())
for _ in range(t):
    a = input()
    b = ''
    for i in range(len(a)-1, -1, -1):
        if a[i] == 'p': b += 'q'
        elif a[i] == 'q': b += 'p'
        else: b += 'w'
    print(b)