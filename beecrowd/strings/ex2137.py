while True:
    try:
        n = int(input())
    except EOFError:
        break
    
    l = []
    for _ in range(n):
        l.append(input())
    
    l.sort()
    print(*l, sep='\n')