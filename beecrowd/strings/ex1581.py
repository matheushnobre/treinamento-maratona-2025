for _ in range(int(input())):
    s = set()
    for i in range(int(input())):
        s.add(input())
    if len(s) == 1:
        print(s.pop())
    else:
        print('ingles')