t = int(input())
for i in range(t):
    w = input()
    rep = False
    for j in range(1, len(w)):
        if(w[j] == w[j-1]): rep = True
    if not rep:
        print(len(w))
    else:
        print(1)